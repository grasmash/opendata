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
  $rows = opendata_build_rows($nodes);

  // We are returning JSON, so tell the browser.
  drupal_add_http_header('Content-Type', 'application/json');

  echo str_replace('\\/', '/', drupal_json_encode($rows));
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
    $row->description = opendata_get_field_value($node, 'field_opendata_description', 'value');
    $row->keyword = opendata_get_field_value($node, 'field_opendata_keyword', 'value', 'n-comma');
    $row->modified = opendata_get_field_value($node, 'field_opendata_modified', 'value');
    $row->contactPoint = opendata_build_contactpoint($node);
    $row->identifier = opendata_get_field_value($node, 'field_opendata_identifier', 'value');
    $row->accessLevel = opendata_get_field_value($node, 'field_opendata_access_level', 'value');

    $row->bureauCode = opendata_get_field_value($node, 'field_opendata_bureau_code', 'value', 'n-list');
    $row->programCode = opendata_get_field_value($node, 'field_opendata_program_code', 'value', 'n-items');

    // Common Core (Required if Applicable) fields.
    $row->describedBy = opendata_get_field_value($node, 'field_opendata_data_dictionary', 'value');
    $row->distribution = opendata_build_distributions($node);
    $row->license = opendata_get_field_value($node, 'field_opendata_license', 'value');
    $row->spatial = opendata_get_field_value($node, 'field_opendata_spatial', 'value');
    $row->temporal = opendata_get_field_value($node, 'field_opendata_temporal', 'value');
    $row->rights = opendata_get_field_value($node, 'field_opendata_rights', 'value');

    // Extended fields.
    $row->issued = opendata_get_field_value($node, 'field_opendata_release_date', 'value');
    $row->accrualPeriodicity = opendata_get_field_value($node, 'field_opendata_frequency', 'value');
    $row->language = opendata_get_field_value($node, 'field_opendata_language', 'value', 'n-items');
    $row->boolean = opendata_get_field_value($node, 'field_opendata_data_quality', 'value');
    $row->conformsTo = opendata_get_field_value($node, 'field_opendata_conforms_to', 'value');
    $row->describedByType = opendata_get_field_value($node, 'field_opendata_datadictionary_ty', 'value');
    $row->theme = opendata_get_field_value($node, 'field_opendata_theme', 'value', 'n-items');
    $row->references = opendata_get_field_value($node, 'field_opendata_references', 'value', 'n-items');
    $row->landingPage = opendata_get_field_value($node, 'field_opendata_landing_page', 'value');
    $row->isPartOf = opendata_get_field_value($node, 'field_opendata_ispartof', 'value');
    $row->systemOfRecords = opendata_get_field_value($node, 'field_opendata_system_of_records', 'value');
    $row->primaryITInvestmentUII = opendata_get_field_value($node, 'field_opendata_primary_it_invest', 'value');

    // Build the publisher object.
    $publisher_name = opendata_get_field_value($node, 'field_opendata_publisher', 'value');
    $suborg_piped_list = opendata_get_field_value($node, 'field_opendata_suborganizationof', 'value');
    $row->publisher = opendata_build_publisher($publisher_name, $suborg_piped_list);

    // Clear out empty properties.
    opendata_remove_empty_elements($row);

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
 *
 * @param string $field_name
 *   The machine name of the field.
 *
 * @param string $column_name
 *   The column containing the primary value for a given field.
 *
 * @param string $cardinality
 *   Limits how many values are allowed and the manner they are processed.
 *   1 (default) - retrieves one possible value.
 *   n-piped - retrieves a single value and splits it on |.
 *   n-list - retrieves the results of a multi-select list.
 *   n-items - retrieves the results of multiple items.
 *
 * @return string
 *   String to be put into the json object.
 */
function opendata_get_field_value($node, $field_name, $column_name, $cardinality = 1) {
  switch ($cardinality) {
    case 'n-list':
    case 'n-items':
      // This element can have unlimited cardinality from an array.
      if (!empty($node->{$field_name}[LANGUAGE_NONE][0][$column_name])) {
        $field_items = $node->{$field_name}[LANGUAGE_NONE];
        $field_values = array();
        foreach ($field_items as $field_item) {
          $field_values[] = $field_item[$column_name];
        }

        return $field_values;
      }

      return '';

    case  'n-comma':
      // This element may be comma delimited so convert it to pipes.
      if (!empty($node->{$field_name}[LANGUAGE_NONE][0][$column_name])) {
        $node->{$field_name}[LANGUAGE_NONE][0][$column_name] = str_replace(',', '|', $node->{$field_name}[LANGUAGE_NONE][0][$column_name]);
      }
      // Now that it is converted to pipes, let it continue on to n-piped.
    case 'n-piped':
      // This element can have unlimited cardinality from a piped string.
      if (!empty($node->{$field_name}[LANGUAGE_NONE][0][$column_name])) {
        $piped = $node->{$field_name}[LANGUAGE_NONE][0][$column_name];
        $items = explode('|', $piped);
        return $items;
      }

      return '';

    case '1':
    case 1:
    default:
      // We are only looking to handle one value.
      if (!empty($node->{$field_name}[LANGUAGE_NONE][0][$column_name])) {
        return $node->{$field_name}[LANGUAGE_NONE][0][$column_name];
      }

      return '';
  }

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
      opendata_remove_empty_elements($distribution);
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
function opendata_build_publisher($publisher_name, $suborg_piped_list = '') {
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
    'hasEmail' => opendata_get_field_value($node, 'field_opendata_mbox', 'email'),
  );
}


/**
 * Remove empty first level elements from arrays and objects.
 *
 * @param array|object $things
 *   An array or object to process
 */
function opendata_remove_empty_elements(&$things) {
  // Clear out empty properties.
  foreach ($things as $property => $value) {
    if (empty($value)) {
      // The value is empty so remove it from $things.
      if (is_array($things)) {
        unset($things[$property]);
      }
      else {
        // Not an array so must be an object.
        unset($things->$property);
      }
    }
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
