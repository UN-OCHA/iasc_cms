<?php
/**
 * @file
 * iasc_action_points.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function iasc_action_points_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'iasc_action_points';
  $page->task = 'page';
  $page->admin_title = 'IASC Action Points';
  $page->admin_description = '';
  $page->path = 'iasc/action-points';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_iasc_action_points__panel';
  $handler->task = 'page';
  $handler->subtask = 'iasc_action_points';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'IASC Action Points';
  $display->uuid = '30d83e46-9209-4090-ac28-57924172eb46';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c00fe1a9-54c7-4683-b680-23807bd4cca4';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:1261';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '1261',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '206',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<p><span style="color: #333333; font-family: Arial, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; line-height: 21.5385px; orphans: auto; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; display: inline !important; float: none; background-color: #ffffff;">This space aim to provide up-to-date information on policy and operational decisions and action points adopted by IASC Principals and Working Group at their regular and ad hoc meetings. The IASC Principals are chaired by the Emergency Relief Coordinator (ERC), Mr. Stephen O\'Brien while the Working Group meeting are chaired by the Deputy Emergency Relief Coordinator, Ms. Kyung-wha Kang.</span></p>',
            'format' => 'iasc_wysiwyg',
          ),
        ),
      ),
      'log' => '',
      'created' => 1463740997,
      'timestamp' => 1463740997,
      'changed' => 1463740997,
      'uuid' => '',
      'uid' => '691',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c00fe1a9-54c7-4683-b680-23807bd4cca4';
  $display->content['new-c00fe1a9-54c7-4683-b680-23807bd4cca4'] = $pane;
  $display->panels['contentmain'][0] = 'new-c00fe1a9-54c7-4683-b680-23807bd4cca4';
  $pane = new stdClass();
  $pane->pid = 'new-5dc0db9b-e73b-4b4f-a5b2-c6cbb9f0c13d';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_action_points-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'table',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5dc0db9b-e73b-4b4f-a5b2-c6cbb9f0c13d';
  $display->content['new-5dc0db9b-e73b-4b4f-a5b2-c6cbb9f0c13d'] = $pane;
  $display->panels['contentmain'][1] = 'new-5dc0db9b-e73b-4b4f-a5b2-c6cbb9f0c13d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c00fe1a9-54c7-4683-b680-23807bd4cca4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['iasc_action_points'] = $page;

  return $pages;

}
