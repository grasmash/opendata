<?php

/**
 * @file
 * Contains page callback functions for opendata module.
 */

/**
 * Outputs dataset nodes into data.json.
 */
function opendata_data_json() {

  $nodes = opendata_get_datasets();
  $datasets = opendata_build_rows($nodes);
  $feed = array(
    'conformsTo' => 'https://project-open-data.cio.gov/v1.1/schema',
    'dataset' => $datasets,
  );

  // We are returning JSON, so tell the browser.
  drupal_add_http_header('Content-Type', 'application/json');

  echo str_replace('\\/', '/', drupal_json_encode($feed));
}

/**
 * Retrieves public, published dataset nodes.
 *
 * @return array
 *   An array of dataset nodes.
 */
function opendata_get_datasets() {
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'opendata_dataset')
    ->propertyCondition('status', 1)
    ->propertyOrderBy('sticky', 'DESC')
    ->propertyOrderBy('created', 'DESC')
    ->fieldCondition('field_opendata_access_level', 'value', 'public', '=')
    ->addTag('opendata_datasets')
    // Run the query as user 1.
    ->addMetaData('account', user_load(1));
  $entities = $query->execute();

  if (!empty($entities['node'])) {
    $nids = array_keys($entities['node']);
    $nodes = node_load_multiple($nids);
    return $nodes;
  }

  return array();
}

/**
 * Build PHP array and object structure in preparation for JSON output.
 *
 * @param array $nodes
 *   An array of opendata_dataset nodes.
 *
 * @return array
 *   An array of objects formatted as per Open Data schema specifications.
 */
function opendata_build_rows($nodes) {
  $rows = array();
  foreach ($nodes as $node) {

    $row = new stdClass();

    // Common Core fields. These are required, so we don't check for empty.
    $row->title = $node->title;
    $row->description = opendata_get_field_value($node, 'field_opendata_description');

    $row->keyword = opendata_get_field_value_delimited($node, 'field_opendata_keyword', ',');
    $row->modified = opendata_get_field_value($node, 'field_opendata_modified');
    $row->contactPoint = opendata_build_contactpoint($node);
    $row->identifier = opendata_get_field_value($node, 'field_opendata_identifier');
    $row->accessLevel = opendata_get_field_value($node, 'field_opendata_access_level');

    $row->bureauCode = opendata_get_field_value($node, 'field_opendata_bureau_code', 'value', 'n');
    $row->programCode = opendata_get_field_value($node, 'field_opendata_program_code', 'value', 'n');

    // Common Core (Required if Applicable) fields.
    $row->describedBy = opendata_get_field_value($node, 'field_opendata_data_dictionary');
    $row->distribution = opendata_build_distributions($node);
    $row->license = opendata_get_field_value($node, 'field_opendata_license');
    $row->spatial = opendata_get_field_value($node, 'field_opendata_spatial');
    $row->temporal = opendata_get_field_value($node, 'field_opendata_temporal');
    $row->rights = opendata_get_field_value($node, 'field_opendata_rights');

    // Extended fields.
    $row->issued = opendata_get_field_value($node, 'field_opendata_release_date');
    $row->accrualPeriodicity = opendata_get_field_value($node, 'field_opendata_frequency');
    $row->language = opendata_get_field_value($node, 'field_opendata_language', 'value', 'n');
    $row->boolean = opendata_get_field_value($node, 'field_opendata_data_quality');
    $row->conformsTo = opendata_get_field_value($node, 'field_opendata_conforms_to');
    $row->describedByType = opendata_get_field_value($node, 'field_opendata_datadictionary_ty');
    $row->theme = opendata_get_field_value($node, 'field_opendata_theme', 'value', 'n');
    $row->references = opendata_get_field_value($node, 'field_opendata_references', 'value', 'n');
    $row->landingPage = opendata_get_field_value($node, 'field_opendata_landing_page');
    $row->isPartOf = opendata_get_field_value($node, 'field_opendata_ispartof', 'value');
    $row->systemOfRecords = opendata_get_field_value($node, 'field_opendata_system_of_records');
    $row->primaryITInvestmentUII = opendata_get_field_value($node, 'field_opendata_primary_it_invest');

    // Build the publisher object.
    $publisher_name = opendata_get_field_value($node, 'field_opendata_publisher');
    $suborg_piped_list = opendata_get_field_value($node, 'field_opendata_suborganizationof');
    $row->publisher = opendata_build_publisher($publisher_name, $suborg_piped_list);

    // Clear out empty properties.
    $row = opendata_remove_empty_elements($row);

    $rows[] = $row;
    unset($row);
  }

  return $rows;
}

/**
 * Sets a JSON row property given a node field name.
 *
 * @param object $node
 *   The node containing the field value.
 * @param string $field_name
 *   The machine name of the field.
 * @param string $column_name
 *   The column containing the primary value for a given field.
 * @param string $cardinality
 *   Limits how many values are allowed and the manner they are processed.
 *   1 (default) - retrieves one possible value.
 *
 * @return string|array
 *   String or array if multiple cardinality.
 */
function opendata_get_field_value($node, $field_name, $column_name = 'value', $cardinality = 1) {
  $field_items = field_get_items('node', $node, $field_name, $node->language);

  $values = array();
  if (!empty($field_items)) {
    foreach ($field_items as $field_item) {
      if (!empty($field_item[$column_name])) {
        $values[] = check_plain($field_item[$column_name]);
      }
    }
  }

  if ($cardinality === 1) {
    // Return only one value.
    return (!empty($values)) ? $values[0] : '';
  }
  else {
    // Return an array of values.
    return (!empty($values)) ? $values : '';
  }
}


/**
 * Sets JSON row properties given a node field name with delimited list.
 *
 * @param object $node
 *   The node containing the field value.
 * @param string $field_name
 *   The machine name of the field.
 * @param string $delimiter
 *   The character acting as the delimiter.
 *
 * @return array
 *   Array to be put into the json object.
 */
function opendata_get_field_value_delimited($node, $field_name, $delimiter) {
  $field_items = field_get_items('node', $node, $field_name, $node->language);

  // This element can have unlimited cardinality from delimited string(s).
  $items = array();
  if (!empty($field_items)) {
    foreach ($field_items as $delimited_items) {
      if (!empty($delimited_items['value'])) {
        $list = check_plain($delimited_items['value']);
        $items = array_merge($items, explode($delimiter, $list));
      }
    }
  }
  return $items;
}


/**
 * Build the distributions property for a JSON row.
 *
 * @param object $node
 *   An opendata_dataset node.
 *
 * @return array
 *   An array of distribution objects.
 */
function opendata_build_distributions($node) {
  $distributions = field_get_items('node', $node, 'field_opendata_distribution', $node->language);

  if (!empty($distributions)) {
    $distributions_return = new stdClass();
    foreach ($distributions as &$distribution) {
      // Join the "@type": "dcat:Distribution" to the $distribution array.
      $distribution = array('@type' => 'dcat:Distribution') + $distribution;
      // Clear out empty fields.
      $distribution = opendata_remove_empty_elements($distribution);
      // Convert the key names to property names.
      opendata_convert_distribution_keys($distribution);
    }
    unset($distribution);

  }

  return $distributions;
}


/**
 * Builds the publisher array.
 *
 * @param string $publisher_name
 *   The name of the publisher.
 * @param string $suborg_piped_list
 *   A pipe delimited list of organizations from broadest to most specific.
 *
 * @return array
 *   A fully formed publisher array.
 */
function opendata_build_publisher($publisher_name, $suborg_piped_list) {
  if (!empty($suborg_piped_list)) {
    $suborgs = explode('|', $suborg_piped_list);

    $suborgs_array = array();
    foreach ($suborgs as $key => $org) {
      // The first item is the deepest and has no suborg of its own.
      if ($key == 0) {
        $suborgs_array[$key] = array(
          '@type' => 'org:Organization',
          'name' => $org,
        );
      }
      else {
        $parent_key = $key - 1;
        $suborgs_array[$key] = array(
          '@type' => 'org:Organization',
          'name' => $org,
          'subOrganizationOf' => $suborgs_array[$parent_key],
        );
      }
    }

    $publisher_array = array(
      "@type" => "org:Organization",
      "name" => $publisher_name,
      'subOrganizationOf' => array_pop($suborgs_array),
    );

    return $publisher_array;
  }
}


/**
 * Builds the contactPoint array.
 *
 * @param object $node
 *   The node object for the dataset.
 *
 * @return array
 *   A fully formed contactPoint array.
 */
function opendata_build_contactpoint($node) {
  return array(
    '@type' => 'vcard:Contact',
    'fn' => opendata_get_field_value($node, 'field_opendata_person', 'value'),
    'hasEmail' => opendata_get_email($node),
  );
}

/**
 * Retrieves the field_opendata_mbox and prefixes it if needed.
 *
 * @param object $node
 *   The node object for the dataset.
 *
 * @return string
 *   The email properly prefixed.
 */
function opendata_get_email($node) {
  $email = opendata_get_field_value($node, 'field_opendata_mbox', 'email');
  if (!empty($email) && (strpos($email, 'mailto:') === FALSE)) {
    $email = 'mailto:' . $email;
  }
  return $email;
}

/**
 * Remove empty first level elements from arrays and objects.
 *
 * @param array|object $collection
 *   An array or object to process.
 *
 * @return array|object
 *   Whatever type given is returned, with any top level empty elements removed.
 */
function opendata_remove_empty_elements($collection) {
  // Clear out empty elements.
  if (is_object($collection)) {
    return (object) array_filter((array) $collection);
  }
  else {
    return array_filter($collection);
  }
}


/**
 * Replace the distribution field names with the schema property names.
 *
 * @param array $distribution
 *   The array of one distribution's fields.
 */
function opendata_convert_distribution_keys(&$distribution) {
  $key_property_map = array(
    'access_url' => 'accessURL',
    'conforms_to' => 'conformsTo',
    'described_by' => 'describedBy',
    'described_by_type' => 'describedByType',
    'download_url' => 'downloadURL',
    'media_type' => 'mediaType',
  );

  // Swap the drupal field name for the schema property name.
  foreach ($key_property_map as $key => $property) {
    if (array_key_exists($key, $distribution)) {
      $distribution[$property] = $distribution[$key];
      unset($distribution[$key]);
    }
  }
}
