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

  $form['opendata_help'] = array(
    '#markup' => t('Use this form to change various OpenData settings.'),
  );

  $form['opendata']['opendata_theming'] = array(
    '#type' => 'checkbox',
    '#title' => t('Apply default theming to /data page'),
    '#default_value' => variable_get('opendata_theming', TRUE),
  );

  return system_settings_form($form);
}
