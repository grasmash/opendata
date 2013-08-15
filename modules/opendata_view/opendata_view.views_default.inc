<?php
/**
 * @file
 * opendata_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opendata_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'project_open_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Open Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Open Data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pod_description']['id'] = 'field_pod_description';
  $handler->display->display_options['fields']['field_pod_description']['table'] = 'field_data_field_pod_description';
  $handler->display->display_options['fields']['field_pod_description']['field'] = 'field_pod_description';
  $handler->display->display_options['fields']['field_pod_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_description']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_pod_keyword']['id'] = 'field_pod_keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['table'] = 'field_data_field_pod_keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['field'] = 'field_pod_keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_keyword']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Last Update */
  $handler->display->display_options['fields']['field_pod_modified']['id'] = 'field_pod_modified';
  $handler->display->display_options['fields']['field_pod_modified']['table'] = 'field_data_field_pod_modified';
  $handler->display->display_options['fields']['field_pod_modified']['field'] = 'field_pod_modified';
  $handler->display->display_options['fields']['field_pod_modified']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_modified']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_pod_publisher']['id'] = 'field_pod_publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['table'] = 'field_data_field_pod_publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['field'] = 'field_pod_publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_publisher']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_pod_person']['id'] = 'field_pod_person';
  $handler->display->display_options['fields']['field_pod_person']['table'] = 'field_data_field_pod_person';
  $handler->display->display_options['fields']['field_pod_person']['field'] = 'field_pod_person';
  $handler->display->display_options['fields']['field_pod_person']['label'] = 'Person';
  $handler->display->display_options['fields']['field_pod_person']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_person']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Contact Email */
  $handler->display->display_options['fields']['field_pod_mbox']['id'] = 'field_pod_mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['table'] = 'field_data_field_pod_mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['field'] = 'field_pod_mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_mbox']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Unique Identifier */
  $handler->display->display_options['fields']['field_pod_identifier']['id'] = 'field_pod_identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['table'] = 'field_data_field_pod_identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['field'] = 'field_pod_identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_identifier']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Public Access Level */
  $handler->display->display_options['fields']['field_pod_access_level']['id'] = 'field_pod_access_level';
  $handler->display->display_options['fields']['field_pod_access_level']['table'] = 'field_data_field_pod_access_level';
  $handler->display->display_options['fields']['field_pod_access_level']['field'] = 'field_pod_access_level';
  $handler->display->display_options['fields']['field_pod_access_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_access_level']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Data Dictionary */
  $handler->display->display_options['fields']['field_pod_data_dictionary']['id'] = 'field_pod_data_dictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['table'] = 'field_data_field_pod_data_dictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['field'] = 'field_pod_data_dictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_data_dictionary']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Download URL */
  $handler->display->display_options['fields']['field_pod_distribution']['id'] = 'field_pod_distribution';
  $handler->display->display_options['fields']['field_pod_distribution']['table'] = 'field_data_field_pod_distribution';
  $handler->display->display_options['fields']['field_pod_distribution']['field'] = 'field_pod_distribution';
  $handler->display->display_options['fields']['field_pod_distribution']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_distribution']['click_sort_column'] = 'access_url';
  $handler->display->display_options['fields']['field_pod_distribution']['settings'] = array(
    'emphasis' => 0,
  );
  $handler->display->display_options['fields']['field_pod_distribution']['delta_offset'] = '0';
  /* Field: Content: Endpoint */
  $handler->display->display_options['fields']['field_pod_web_service']['id'] = 'field_pod_web_service';
  $handler->display->display_options['fields']['field_pod_web_service']['table'] = 'field_data_field_pod_web_service';
  $handler->display->display_options['fields']['field_pod_web_service']['field'] = 'field_pod_web_service';
  $handler->display->display_options['fields']['field_pod_web_service']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_web_service']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Download URL (field_pod_distribution:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_pod_distribution';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'Format';
  $handler->display->display_options['fields']['delta']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Content: License */
  $handler->display->display_options['fields']['field_pod_license']['id'] = 'field_pod_license';
  $handler->display->display_options['fields']['field_pod_license']['table'] = 'field_data_field_pod_license';
  $handler->display->display_options['fields']['field_pod_license']['field'] = 'field_pod_license';
  $handler->display->display_options['fields']['field_pod_license']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_license']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Spatial */
  $handler->display->display_options['fields']['field_pod_spatial']['id'] = 'field_pod_spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['table'] = 'field_data_field_pod_spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['field'] = 'field_pod_spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_spatial']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Temporal */
  $handler->display->display_options['fields']['field_pod_temporal']['id'] = 'field_pod_temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['table'] = 'field_data_field_pod_temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['field'] = 'field_pod_temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_temporal']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Release Date */
  $handler->display->display_options['fields']['field_pod_release_date']['id'] = 'field_pod_release_date';
  $handler->display->display_options['fields']['field_pod_release_date']['table'] = 'field_data_field_pod_release_date';
  $handler->display->display_options['fields']['field_pod_release_date']['field'] = 'field_pod_release_date';
  $handler->display->display_options['fields']['field_pod_release_date']['label'] = 'Issued';
  $handler->display->display_options['fields']['field_pod_release_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_release_date']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Frequency */
  $handler->display->display_options['fields']['field_pod_frequency']['id'] = 'field_pod_frequency';
  $handler->display->display_options['fields']['field_pod_frequency']['table'] = 'field_data_field_pod_frequency';
  $handler->display->display_options['fields']['field_pod_frequency']['field'] = 'field_pod_frequency';
  $handler->display->display_options['fields']['field_pod_frequency']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_frequency']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_pod_language']['id'] = 'field_pod_language';
  $handler->display->display_options['fields']['field_pod_language']['table'] = 'field_data_field_pod_language';
  $handler->display->display_options['fields']['field_pod_language']['field'] = 'field_pod_language';
  $handler->display->display_options['fields']['field_pod_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_language']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Granularity */
  $handler->display->display_options['fields']['field_pod_granularity']['id'] = 'field_pod_granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['table'] = 'field_data_field_pod_granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['field'] = 'field_pod_granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_granularity']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Data Quality */
  $handler->display->display_options['fields']['field_pod_data_quality']['id'] = 'field_pod_data_quality';
  $handler->display->display_options['fields']['field_pod_data_quality']['table'] = 'field_data_field_pod_data_quality';
  $handler->display->display_options['fields']['field_pod_data_quality']['field'] = 'field_pod_data_quality';
  $handler->display->display_options['fields']['field_pod_data_quality']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_data_quality']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_pod_theme']['id'] = 'field_pod_theme';
  $handler->display->display_options['fields']['field_pod_theme']['table'] = 'field_data_field_pod_theme';
  $handler->display->display_options['fields']['field_pod_theme']['field'] = 'field_pod_theme';
  $handler->display->display_options['fields']['field_pod_theme']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_theme']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Related Documents */
  $handler->display->display_options['fields']['field_pod_references']['id'] = 'field_pod_references';
  $handler->display->display_options['fields']['field_pod_references']['table'] = 'field_data_field_pod_references';
  $handler->display->display_options['fields']['field_pod_references']['field'] = 'field_pod_references';
  $handler->display->display_options['fields']['field_pod_references']['label'] = 'References';
  $handler->display->display_options['fields']['field_pod_references']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_references']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_pod_size']['id'] = 'field_pod_size';
  $handler->display->display_options['fields']['field_pod_size']['table'] = 'field_data_field_pod_size';
  $handler->display->display_options['fields']['field_pod_size']['field'] = 'field_pod_size';
  $handler->display->display_options['fields']['field_pod_size']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_size']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Homepage URL */
  $handler->display->display_options['fields']['field_pod_landing_page']['id'] = 'field_pod_landing_page';
  $handler->display->display_options['fields']['field_pod_landing_page']['table'] = 'field_data_field_pod_landing_page';
  $handler->display->display_options['fields']['field_pod_landing_page']['field'] = 'field_pod_landing_page';
  $handler->display->display_options['fields']['field_pod_landing_page']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_landing_page']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: RSS Feed */
  $handler->display->display_options['fields']['field_pod_feed']['id'] = 'field_pod_feed';
  $handler->display->display_options['fields']['field_pod_feed']['table'] = 'field_data_field_pod_feed';
  $handler->display->display_options['fields']['field_pod_feed']['field'] = 'field_pod_feed';
  $handler->display->display_options['fields']['field_pod_feed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_feed']['settings'] = array(
    'emphasis' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pod_item' => 'pod_item',
  );

  /* Display: HTML */
  $handler = $view->new_display('page', 'HTML', 'page');
  $handler->display->display_options['path'] = 'data';

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 1;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pod_description']['id'] = 'field_pod_description';
  $handler->display->display_options['fields']['field_pod_description']['table'] = 'field_data_field_pod_description';
  $handler->display->display_options['fields']['field_pod_description']['field'] = 'field_pod_description';
  $handler->display->display_options['fields']['field_pod_description']['label'] = 'description';
  $handler->display->display_options['fields']['field_pod_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_description']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_pod_keyword']['id'] = 'field_pod_keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['table'] = 'field_data_field_pod_keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['field'] = 'field_pod_keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['label'] = 'keyword';
  $handler->display->display_options['fields']['field_pod_keyword']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_keyword']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Last Update */
  $handler->display->display_options['fields']['field_pod_modified']['id'] = 'field_pod_modified';
  $handler->display->display_options['fields']['field_pod_modified']['table'] = 'field_data_field_pod_modified';
  $handler->display->display_options['fields']['field_pod_modified']['field'] = 'field_pod_modified';
  $handler->display->display_options['fields']['field_pod_modified']['label'] = 'modified';
  $handler->display->display_options['fields']['field_pod_modified']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_modified']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_pod_publisher']['id'] = 'field_pod_publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['table'] = 'field_data_field_pod_publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['field'] = 'field_pod_publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['label'] = 'publisher';
  $handler->display->display_options['fields']['field_pod_publisher']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_publisher']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_pod_person']['id'] = 'field_pod_person';
  $handler->display->display_options['fields']['field_pod_person']['table'] = 'field_data_field_pod_person';
  $handler->display->display_options['fields']['field_pod_person']['field'] = 'field_pod_person';
  $handler->display->display_options['fields']['field_pod_person']['label'] = 'person';
  $handler->display->display_options['fields']['field_pod_person']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_person']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Contact Email */
  $handler->display->display_options['fields']['field_pod_mbox']['id'] = 'field_pod_mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['table'] = 'field_data_field_pod_mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['field'] = 'field_pod_mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['label'] = 'mbox';
  $handler->display->display_options['fields']['field_pod_mbox']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_mbox']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Unique Identifier */
  $handler->display->display_options['fields']['field_pod_identifier']['id'] = 'field_pod_identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['table'] = 'field_data_field_pod_identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['field'] = 'field_pod_identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['label'] = 'identifier';
  $handler->display->display_options['fields']['field_pod_identifier']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_identifier']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Public Access Level */
  $handler->display->display_options['fields']['field_pod_access_level']['id'] = 'field_pod_access_level';
  $handler->display->display_options['fields']['field_pod_access_level']['table'] = 'field_data_field_pod_access_level';
  $handler->display->display_options['fields']['field_pod_access_level']['field'] = 'field_pod_access_level';
  $handler->display->display_options['fields']['field_pod_access_level']['label'] = 'accessLevel';
  $handler->display->display_options['fields']['field_pod_access_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_access_level']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Data Dictionary */
  $handler->display->display_options['fields']['field_pod_data_dictionary']['id'] = 'field_pod_data_dictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['table'] = 'field_data_field_pod_data_dictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['field'] = 'field_pod_data_dictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['label'] = 'dataDictionary';
  $handler->display->display_options['fields']['field_pod_data_dictionary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_data_dictionary']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Download URL */
  $handler->display->display_options['fields']['field_pod_distribution']['id'] = 'field_pod_distribution';
  $handler->display->display_options['fields']['field_pod_distribution']['table'] = 'field_data_field_pod_distribution';
  $handler->display->display_options['fields']['field_pod_distribution']['field'] = 'field_pod_distribution';
  $handler->display->display_options['fields']['field_pod_distribution']['label'] = 'accessURL';
  $handler->display->display_options['fields']['field_pod_distribution']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_distribution']['click_sort_column'] = 'access_url';
  $handler->display->display_options['fields']['field_pod_distribution']['settings'] = array(
    'emphasis' => 0,
  );
  $handler->display->display_options['fields']['field_pod_distribution']['delta_offset'] = '0';
  /* Field: Content: Endpoint */
  $handler->display->display_options['fields']['field_pod_web_service']['id'] = 'field_pod_web_service';
  $handler->display->display_options['fields']['field_pod_web_service']['table'] = 'field_data_field_pod_web_service';
  $handler->display->display_options['fields']['field_pod_web_service']['field'] = 'field_pod_web_service';
  $handler->display->display_options['fields']['field_pod_web_service']['label'] = 'webService';
  $handler->display->display_options['fields']['field_pod_web_service']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_web_service']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Download URL (field_pod_distribution:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_pod_distribution';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'format';
  $handler->display->display_options['fields']['delta']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Content: License */
  $handler->display->display_options['fields']['field_pod_license']['id'] = 'field_pod_license';
  $handler->display->display_options['fields']['field_pod_license']['table'] = 'field_data_field_pod_license';
  $handler->display->display_options['fields']['field_pod_license']['field'] = 'field_pod_license';
  $handler->display->display_options['fields']['field_pod_license']['label'] = 'license';
  $handler->display->display_options['fields']['field_pod_license']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_license']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Spatial */
  $handler->display->display_options['fields']['field_pod_spatial']['id'] = 'field_pod_spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['table'] = 'field_data_field_pod_spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['field'] = 'field_pod_spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['label'] = 'spatial';
  $handler->display->display_options['fields']['field_pod_spatial']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_spatial']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Temporal */
  $handler->display->display_options['fields']['field_pod_temporal']['id'] = 'field_pod_temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['table'] = 'field_data_field_pod_temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['field'] = 'field_pod_temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['label'] = 'temporal';
  $handler->display->display_options['fields']['field_pod_temporal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_temporal']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Release Date */
  $handler->display->display_options['fields']['field_pod_release_date']['id'] = 'field_pod_release_date';
  $handler->display->display_options['fields']['field_pod_release_date']['table'] = 'field_data_field_pod_release_date';
  $handler->display->display_options['fields']['field_pod_release_date']['field'] = 'field_pod_release_date';
  $handler->display->display_options['fields']['field_pod_release_date']['label'] = 'issued';
  $handler->display->display_options['fields']['field_pod_release_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_release_date']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Frequency */
  $handler->display->display_options['fields']['field_pod_frequency']['id'] = 'field_pod_frequency';
  $handler->display->display_options['fields']['field_pod_frequency']['table'] = 'field_data_field_pod_frequency';
  $handler->display->display_options['fields']['field_pod_frequency']['field'] = 'field_pod_frequency';
  $handler->display->display_options['fields']['field_pod_frequency']['label'] = 'accrualPeriodicity';
  $handler->display->display_options['fields']['field_pod_frequency']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_frequency']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_pod_language']['id'] = 'field_pod_language';
  $handler->display->display_options['fields']['field_pod_language']['table'] = 'field_data_field_pod_language';
  $handler->display->display_options['fields']['field_pod_language']['field'] = 'field_pod_language';
  $handler->display->display_options['fields']['field_pod_language']['label'] = 'language';
  $handler->display->display_options['fields']['field_pod_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_language']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Granularity */
  $handler->display->display_options['fields']['field_pod_granularity']['id'] = 'field_pod_granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['table'] = 'field_data_field_pod_granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['field'] = 'field_pod_granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['label'] = 'granularity';
  $handler->display->display_options['fields']['field_pod_granularity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_granularity']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Data Quality */
  $handler->display->display_options['fields']['field_pod_data_quality']['id'] = 'field_pod_data_quality';
  $handler->display->display_options['fields']['field_pod_data_quality']['table'] = 'field_data_field_pod_data_quality';
  $handler->display->display_options['fields']['field_pod_data_quality']['field'] = 'field_pod_data_quality';
  $handler->display->display_options['fields']['field_pod_data_quality']['label'] = 'boolean';
  $handler->display->display_options['fields']['field_pod_data_quality']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_data_quality']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_pod_theme']['id'] = 'field_pod_theme';
  $handler->display->display_options['fields']['field_pod_theme']['table'] = 'field_data_field_pod_theme';
  $handler->display->display_options['fields']['field_pod_theme']['field'] = 'field_pod_theme';
  $handler->display->display_options['fields']['field_pod_theme']['label'] = 'theme';
  $handler->display->display_options['fields']['field_pod_theme']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_theme']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Related Documents */
  $handler->display->display_options['fields']['field_pod_references']['id'] = 'field_pod_references';
  $handler->display->display_options['fields']['field_pod_references']['table'] = 'field_data_field_pod_references';
  $handler->display->display_options['fields']['field_pod_references']['field'] = 'field_pod_references';
  $handler->display->display_options['fields']['field_pod_references']['label'] = 'references';
  $handler->display->display_options['fields']['field_pod_references']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_references']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_pod_size']['id'] = 'field_pod_size';
  $handler->display->display_options['fields']['field_pod_size']['table'] = 'field_data_field_pod_size';
  $handler->display->display_options['fields']['field_pod_size']['field'] = 'field_pod_size';
  $handler->display->display_options['fields']['field_pod_size']['label'] = 'size';
  $handler->display->display_options['fields']['field_pod_size']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_size']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: Homepage URL */
  $handler->display->display_options['fields']['field_pod_landing_page']['id'] = 'field_pod_landing_page';
  $handler->display->display_options['fields']['field_pod_landing_page']['table'] = 'field_data_field_pod_landing_page';
  $handler->display->display_options['fields']['field_pod_landing_page']['field'] = 'field_pod_landing_page';
  $handler->display->display_options['fields']['field_pod_landing_page']['label'] = 'landingPage';
  $handler->display->display_options['fields']['field_pod_landing_page']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_landing_page']['settings'] = array(
    'emphasis' => 0,
  );
  /* Field: Content: RSS Feed */
  $handler->display->display_options['fields']['field_pod_feed']['id'] = 'field_pod_feed';
  $handler->display->display_options['fields']['field_pod_feed']['table'] = 'field_data_field_pod_feed';
  $handler->display->display_options['fields']['field_pod_feed']['field'] = 'field_pod_feed';
  $handler->display->display_options['fields']['field_pod_feed']['label'] = 'feed';
  $handler->display->display_options['fields']['field_pod_feed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pod_feed']['settings'] = array(
    'emphasis' => 0,
  );
  $handler->display->display_options['path'] = 'data.json';
  $export['project_open_data'] = $view;

  return $export;
}
