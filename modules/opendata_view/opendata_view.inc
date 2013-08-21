<?php

/**
 * @file
 * Utility functiosn for opendata_view module.
 */

/**
 * Processess the view paths in case the view is overridden.
 */
function opendata_view_save_view_handler($form, $formstate) {
  // Pull the view from the data structure.
  $view = $formstate['opendata_view'];

  if ($view->type == 'Overridden') {
    // Get the new paths.
    $htmlpath = $formstate['values']['opendata_path_html'];

    // Update the view.
    $view->display['page']->display_options['path'] = $htmlpath;

    // Save the view.
    views_save_view($view);
  }

  // Clear the views cache.
  views_invalidate_cache();
}
