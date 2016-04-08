<?php
/**
 * @file
 * iasc_action_points.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_action_points_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iasc_action_points_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iasc_action_points_node_info() {
  $items = array(
    'action_point' => array(
      'name' => t('Action Point'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
