<?php

/**
 * @file
 * Contains utility functions for opedata_content module.
 */

/**
 * Creates a new catalog node.
 */
function opendata_content_catalog_node_create() {
  global $base_url;
  global $user;

  $node = new StdClass();
  $node->title = 'Data Catalog';
  $node->type = 'opendata_dataset';
  $node->uid = $user->uid;
  $node->status = 1;
  node_object_prepare($node);

  $node->language = LANGUAGE_NONE;
  $node->field_opendata_description[$node->language][]['value']  = 'Data Catalog';
  $node->field_opendata_keyword[$node->language][]['value']      = 'catalog';
  $node->field_opendata_modified[$node->language][]['value']     = date('Y-m-d');
  $node->field_opendata_publisher[$node->language][]['value']    = 'Agency.gov';
  $node->field_opendata_person[$node->language][]['value']       = 'Lastname, Firstname';
  $node->field_opendata_mbox[$node->language][]['email']         = 'firstname.lastname@example.gov';
  $node->field_opendata_identifier[$node->language][]['value']   = 'catalog';
  $node->field_opendata_access_level[$node->language][]['value'] = 'public';

  $node->field_opendata_distribution[$node->language][] = array(
    'access_url' => $base_url . '/data.json',
    'format'     => 'json',
  );

  // Set sticky so the catalog will appear at the top of the list.
  $node->sticky = 1;

  $node = node_submit($node);
  node_save($node);

  variable_set('opendata_catalog_node', $node->nid);
  variable_set('opendata_catalog_node_updated', FALSE);

  return $node;
}

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
