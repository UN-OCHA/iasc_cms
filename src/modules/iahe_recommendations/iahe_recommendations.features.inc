<?php
/**
 * @file
 * iahe_recommendations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iahe_recommendations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iahe_recommendations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iahe_recommendations_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_section:oa_section_worktracker'])) {
    $data['node:oa_section:oa_section_worktracker']->display->content['new-e0562fa4-45f2-4e30-ab1d-da180812171e'] = (object) array(
          'pid' => 'new-e0562fa4-45f2-4e30-ab1d-da180812171e',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'new_task_view-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'field_summary_of_the_recommendat_value' => '',
            ),
            'view_settings' => 'table',
            'header_type' => 'titles',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'e0562fa4-45f2-4e30-ab1d-da180812171e',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_worktracker']->display->layout = 'radix_boxton'; /* WAS: 'radix_bryant_flipped' */
    $data['node:oa_section:oa_section_worktracker']->display->panels['contentmain'][0] = 'new-e0562fa4-45f2-4e30-ab1d-da180812171e'; /* WAS: 'new-d9d3303b-f59f-4e65-bcd7-67a42b55cdda' */
    unset($data['node:oa_section:oa_section_worktracker']->display->content['new-083432ea-5fb3-4e40-8c9d-09ed848deab7']);
    unset($data['node:oa_section:oa_section_worktracker']->display->content['new-bb4d24a8-400f-4710-8ed8-4617dcb6a89d']);
    unset($data['node:oa_section:oa_section_worktracker']->display->content['new-d9d3303b-f59f-4e65-bcd7-67a42b55cdda']);
    unset($data['node:oa_section:oa_section_worktracker']->display->content['new-da9053d3-c4a2-4bb4-a0d0-9e66b49efabc']);
    unset($data['node:oa_section:oa_section_worktracker']->display->content['new-f2dfa2bb-79a3-4e2e-89b9-d6d048e6846f']);
    unset($data['node:oa_section:oa_section_worktracker']->display->panels['contentmain'][1]);
    unset($data['node:oa_section:oa_section_worktracker']->display->panels['contentmain'][2]);
    unset($data['node:oa_section:oa_section_worktracker']->display->panels['contentmain'][3]);
    unset($data['node:oa_section:oa_section_worktracker']->display->panels['sidebar']);
  }
}