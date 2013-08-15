<?php
/**
 * @file
 * project_open_data_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function project_open_data_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function project_open_data_content_node_info() {
  $items = array(
    'pod_item' => array(
      'name' => t('Project Open Data Item'),
      'base' => 'node_content',
      'description' => t('Add an item to your data listing. This content type includes all "common core" required fields described by Project Open Data here: http://project-open-data.github.io/schema/.

Please note: Unless the field description says, "Optional", it is considered a required field by the US federal government. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Human-readable name of the asset. Should be in plain English and include sufficient detail to facilitate search and discovery. -- "Common Core” Required Field'),
    ),
  );
  return $items;
}
