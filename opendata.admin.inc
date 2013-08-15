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

  $form['opendata']['cat'] = array(
    '#markup' => t('Imagine this is a cat.'),
  );

  return system_settings_form($form);
}
