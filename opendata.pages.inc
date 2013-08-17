<?php

/**
 * @file
 * Contains page callback functions for opendata module.
 */

/**
 * Outputs dataset nodes into data.json.
 */
function opendata_data_json() {

  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'opendata_dataset')
    ->propertyCondition('status', 1)
    ->propertyOrderBy('created', 'DESC')
    ->fieldCondition('field_opendata_access_level', 'value', 'public', '=')
    // Run the query as user 1.
    ->addMetaData('account', user_load(1));
    $entities = $query->execute();
    $nids = array_keys($entities['node']);
    $nodes = node_load_multiple($nids);

    foreach ($nodes as $node) {

      $row = new stdClass();

      // Common Core fields.
      $row->title = $node->title;
      $row->description = $node->field_opendata_description[LANGUAGE_NONE][0]['value'];
      $row->keyword = $node->field_opendata_keyword[LANGUAGE_NONE][0]['value'];
      $row->modified = $node->field_opendata_modified[LANGUAGE_NONE][0]['value'];
      $row->publisher = $node->field_opendata_publisher[LANGUAGE_NONE][0]['value'];
      $row->person = $node->field_opendata_person[LANGUAGE_NONE][0]['value'];
      $row->mbox = $node->field_opendata_mbox[LANGUAGE_NONE][0]['email'];
      $row->identifier = $node->field_opendata_identifier[LANGUAGE_NONE][0]['value'];
      $row->accessLevel = $node->field_opendata_access_level[LANGUAGE_NONE][0]['value'];

      // Common Core (Required if Applicable) fields.
      if (!empty($node->field_opendata_data_dictionary[LANGUAGE_NONE][0]['value'])) {
        $row->dataDictionary = $node->field_opendata_data_dictionary[LANGUAGE_NONE][0]['value'];
      }

      // Build distributions.
      $row->distribution = array();
      foreach ($node->field_opendata_distribution[LANGUAGE_NONE] as $delta => $value) {
        $distribution = new stdClass();
        $distribution->accessURL = $value['access_url'];
        if (!empty($value['size'])) {
          $distribution->size = $value['size'];
        }
        $distribution->format = $value['format'];
        $row->distribution[] = $distribution;
        unset($distribution);
      }

      if (!empty($node->field_opendata_web_service[LANGUAGE_NONE][0]['value'])) {
        $row->webService = $node->field_opendata_web_service[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_license[LANGUAGE_NONE][0]['value'])) {
        $row->license = $node->field_opendata_license[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_spatial[LANGUAGE_NONE][0]['value'])) {
        $row->spatial = $node->field_opendata_spatial[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_temporal[LANGUAGE_NONE][0]['value'])) {
        $row->temporal = $node->field_opendata_temporal[LANGUAGE_NONE][0]['value'];
      }

      // Extended fields.
      if (!empty($node->field_opendata_release_date[LANGUAGE_NONE][0]['value'])) {
        $row->issued = $node->field_opendata_release_date[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_frequency[LANGUAGE_NONE][0]['value'])) {
        $row->accrualPeriodicity = $node->field_opendata_frequency[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_language[LANGUAGE_NONE][0]['value'])) {
        $row->language = $node->field_opendata_language[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_granularity[LANGUAGE_NONE][0]['value'])) {
        $row->granularity = $node->field_opendata_granularity[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_data_quality[LANGUAGE_NONE][0]['value'])) {
        $row->boolean = $node->field_opendata_data_quality[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_theme[LANGUAGE_NONE][0]['value'])) {
        $row->theme = $node->field_opendata_theme[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_references[LANGUAGE_NONE][0]['value'])) {
        $row->references = $node->field_opendata_references[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_size[LANGUAGE_NONE][0]['value'])) {
        $row->size = $node->field_opendata_size[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_landing_page[LANGUAGE_NONE][0]['value'])) {
        $row->landingPage = $node->field_opendata_landing_page[LANGUAGE_NONE][0]['value'];
      }
      if (!empty($node->field_opendata_feed[LANGUAGE_NONE][0]['value'])) {
        $row->feed = $node->field_opendata_feed[LANGUAGE_NONE][0]['value'];
      }

      $rows[] = $row;
      unset($row);
    }

    drupal_json_output($rows);
}
