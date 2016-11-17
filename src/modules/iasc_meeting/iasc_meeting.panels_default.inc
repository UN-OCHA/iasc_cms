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
  $mini->contexts = array();
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
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'iasc_location';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-52ac04cf-b5df-4ffc-a4f2-351c79469771';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div style="display: none;">&nbsp;</div>',
    'format' => 'insecure_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '52ac04cf-b5df-4ffc-a4f2-351c79469771';
  $display->content['new-52ac04cf-b5df-4ffc-a4f2-351c79469771'] = $pane;
  $display->panels['middle'][0] = 'new-52ac04cf-b5df-4ffc-a4f2-351c79469771';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['iasc_location'] = $mini;

  return $export;
}
