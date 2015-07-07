<?php
/**
 * @file
 * iasc_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iasc_taxonomy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function iasc_taxonomy_image_default_styles() {
  $styles = array();

  // Exported image style: organizations_logo.
  $styles['organizations_logo'] = array(
    'label' => 'Organizations Logo',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
