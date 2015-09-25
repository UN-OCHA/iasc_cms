<?php
/**
 * @file
 * Theme functions
 */

/**
 * Implements hook_css_alter().
 * Changes the jQuery UI theme to a Bootstrap-like theme
 * from http://addyosmani.github.io/jquery-ui-bootstrap/
 */
function iasc_admin_css_alter(&$css) {
  $radix_path = drupal_get_path('theme', 'radix');

  // Radix now includes compiled stylesheets for demo purposes.
  // We remove these from our subtheme since they are already included
  // in compass_radix.
  unset($css[$radix_path . '/assets/stylesheets/radix-style.css']);
  unset($css[$radix_path . '/assets/stylesheets/radix-print.css']);

  // Add a custom jQuery UI theme.
  if (isset($css['misc/ui/jquery.ui.theme.css'])) {
    $css['misc/ui/jquery.ui.theme.css']['data'] =
      drupal_get_path('theme', 'oa_radix') . '/assets/vendor/jqueryui/jquery-ui-1.10.0.custom.css';
  }
}