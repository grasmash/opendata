<?php

/**
 * @file
 * Module settings.
 */

/**
 * Page callback for admninistrative form.
 * @return [type] [description]
 */
function opendata_settings() {
  $form = array();

  $form['opendata']['opendata_help'] = array(
    '#type' => 'fieldset',
    '#title' => t('OpenData Settings'),
    '#description' => t('Use this to change various OpenData settings.'),
  );

  $form['opendata']['open_datacat'] = array(
    '#markup' => t('Imagine this is a cat.'),
  );

  $form['opendata']['opendata_theming'] = array(
    '#type' => 'checkbox',
    '#title' => t('Apply default theming to /data page'),
    '#default_value' => variable_get('opendata_theming', TRUE),
  );

  return system_settings_form($form);
}
