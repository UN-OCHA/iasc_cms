<?php
/**
 * @file
 * iasc_meeting.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iasc_meeting_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'iasc_location';
  $mini->category = '';
  $mini->admin_title = 'IASC Location';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Node add form',
      'keyword' => 'node_add',
      'name' => 'node_add_form',
      'type' => 'oa_event',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Location';
  $display->uuid = '17913e0d-c586-4246-8891-7de381c79919';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['iasc_location'] = $mini;

  return $export;
}
