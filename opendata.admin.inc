<?php

/**
 * Module settings.
 */

function opendata_settings() {
  $form['settings']['help'] = array(
    '#type' => 'fieldset',
    '#title' => t('OpenData Settings'),
    '#description' => t('Use this to change various OpenData settings.'),
  );
  
  $form['settings']['cron'] = array(
    '#type' => 'select',
    '#title' => t('Selected'),
    '#options' => array(
      0 => t('No'),
      1 => t('Yes'),
    ),
    '#default_value' => 0,
    '#description' => t('Use the default system cron?')
   );
  return system_settings_form($form);
}
