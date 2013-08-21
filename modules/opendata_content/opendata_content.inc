<?php

/**
 * @file
 * Contains utility functions for opedata_content module.
 */

/**
 * Generates a unique ID.
 *
 * @return strip
 *   A unique string.
 */
function opendata_content_uuid_create() {
  return strtolower(sprintf('%04X%04X-%04X-%04X-%04X-%04X%04X%04X', mt_rand(0, 65535), mt_rand(0, 65535), mt_rand(0, 65535), mt_rand(16384, 20479), mt_rand(32768, 49151), mt_rand(0, 65535), mt_rand(0, 65535), mt_rand(0, 65535)));
}

/**
 * Verifies that value of opendata_identifier is unique for a given node.
 *
 * @param object $node
 *   The node to check. Node must be of type opendata_dataset.
 *
 * @return boolean
 *   TRUE if node has a unique identifier.
 */
function opendata_content_uuid_validate($node) {
  $identifier = field_get_items('node', $node, 'field_opendata_identifier', $node->language);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'opendata_dataset')
    ->fieldCondition('field_opendata_identifier', 'value', $identifier[0]['value'], '=');

  $result = $query->execute();

  if (isset($result['node']) && array_keys($result['node']) != array($node->nid)) {
    return FALSE;
  }

  return TRUE;
}

/**
 * Verifies that value of field_opendata_modified is valid for a given node.
 *
 * Valid value is in YYYY-MM-DD format.
 *
 * @param object $node
 *   The node to check. Node must be of type opendata_dataset.
 *
 * @return boolean
 *   TRUE if value of field_opendata_modified is valid.
 */
function opendata_content_modified_validate($node) {
  $date_pattern = '/^\d{4}-\d{2}-\d{2}$/';
  $modified = field_get_items('node', $node, 'field_opendata_modified', $node->language);

  if (preg_match($date_pattern, $modified[0]['value'])) {
    list($year, $month, $day) = explode('-', $modified[0]['value']);
    if (checkdate($month, $day, $year)) {
      return TRUE;
    }
  }

  return FALSE;
}
