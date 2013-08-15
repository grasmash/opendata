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

  $form['opendata']['help'] = array(
    '#type' => 'fieldset',
    '#title' => t('OpenData Settings'),
    '#description' => t('Use this to change various OpenData settings.'),
  );

  $form['opendata']['opendata_cron'] = array(
    '#type' => 'select',
    '#title' => t('Selected'),
    '#options' => array(
      0 => t('No'),
      1 => t('Yes'),
    ),
    '#default_value' => variable_get('opendata_cron', 0),
    '#description' => t('Use the default system cron?')
   );

  return system_settings_form($form);
}
