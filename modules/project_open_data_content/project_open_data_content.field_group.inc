<?php
/**
 * @file
 * project_open_data_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function project_open_data_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pod_common_core|node|pod_item|form';
  $field_group->group_name = 'group_pod_common_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pod_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Common Core (Required)',
    'weight' => '0',
    'children' => array(
      0 => 'field_pod_access_level',
      1 => 'field_pod_description',
      2 => 'field_pod_identifier',
      3 => 'field_pod_keyword',
      4 => 'field_pod_mbox',
      5 => 'field_pod_modified',
      6 => 'field_pod_person',
      7 => 'field_pod_publisher',
      8 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Common Core (Required)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_pod_common_core|node|pod_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pod_core_if_applicable|node|pod_item|form';
  $field_group->group_name = 'group_pod_core_if_applicable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pod_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Common Core (Required if Applicable)',
    'weight' => '1',
    'children' => array(
      0 => 'field_pod_data_dictionary',
      1 => 'field_pod_distribution',
      2 => 'field_pod_license',
      3 => 'field_pod_spatial',
      4 => 'field_pod_temporal',
      5 => 'field_pod_web_service',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Common Core (Required if Applicable)',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_pod_core_if_applicable|node|pod_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pod_expanded_fields|node|pod_item|form';
  $field_group->group_name = 'group_pod_expanded_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pod_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expanded Fields',
    'weight' => '2',
    'children' => array(
      0 => 'field_pod_data_quality',
      1 => 'field_pod_feed',
      2 => 'field_pod_frequency',
      3 => 'field_pod_granularity',
      4 => 'field_pod_landing_page',
      5 => 'field_pod_language',
      6 => 'field_pod_references',
      7 => 'field_pod_release_date',
      8 => 'field_pod_size',
      9 => 'field_pod_system_of_records',
      10 => 'field_pod_theme',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Expanded Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_pod_expanded_fields|node|pod_item|form'] = $field_group;

  return $export;
}
