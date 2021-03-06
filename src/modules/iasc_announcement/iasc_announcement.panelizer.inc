<?php
/**
 * @file
 * iasc_announcement.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function iasc_announcement_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:announcement:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'announcement';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bc0da3d3-60a8-499b-81ca-7e089cc518a6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-76db2c8d-0af8-4a91-92dc-30a26a5f5d92';
  $pane->panel = 'contentmain';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '76db2c8d-0af8-4a91-92dc-30a26a5f5d92';
  $display->content['new-76db2c8d-0af8-4a91-92dc-30a26a5f5d92'] = $pane;
  $display->panels['contentmain'][0] = 'new-76db2c8d-0af8-4a91-92dc-30a26a5f5d92';
  $pane = new stdClass();
  $pane->pid = 'new-9f81b47f-696e-4310-a11b-b85f549b3e46';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
      'show_repeat_rule' => 'show',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9f81b47f-696e-4310-a11b-b85f549b3e46';
  $display->content['new-9f81b47f-696e-4310-a11b-b85f549b3e46'] = $pane;
  $display->panels['contentmain'][1] = 'new-9f81b47f-696e-4310-a11b-b85f549b3e46';
  $pane = new stdClass();
  $pane->pid = 'new-9394664d-6b8c-43db-801c-f87ed6589129';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9394664d-6b8c-43db-801c-f87ed6589129';
  $display->content['new-9394664d-6b8c-43db-801c-f87ed6589129'] = $pane;
  $display->panels['contentmain'][2] = 'new-9394664d-6b8c-43db-801c-f87ed6589129';
  $pane = new stdClass();
  $pane->pid = 'new-5bb24c4e-fb64-445f-94ca-664eb52c5b2a';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_referenced_docs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => FALSE,
      'view_mode' => 'link_to_document',
      'links' => 1,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5bb24c4e-fb64-445f-94ca-664eb52c5b2a';
  $display->content['new-5bb24c4e-fb64-445f-94ca-664eb52c5b2a'] = $pane;
  $display->panels['contentmain'][3] = 'new-5bb24c4e-fb64-445f-94ca-664eb52c5b2a';
  $pane = new stdClass();
  $pane->pid = 'new-cf8206e9-12a6-44a4-96ee-6a468e5cee49';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Relevant Links',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'secondary_options' => 'panel-success',
      'linked_list' => 'arrow',
    ),
    'style' => 'secondary',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cf8206e9-12a6-44a4-96ee-6a468e5cee49';
  $display->content['new-cf8206e9-12a6-44a4-96ee-6a468e5cee49'] = $pane;
  $display->panels['sidebar'][0] = 'new-cf8206e9-12a6-44a4-96ee-6a468e5cee49';
  $pane = new stdClass();
  $pane->pid = 'new-c45c7935-b817-4305-a536-029903936386';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'search_contacts-panel_pane_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Contact',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'secondary_options' => 'panel-primary',
      'linked_list' => 'none',
    ),
    'style' => 'secondary',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c45c7935-b817-4305-a536-029903936386';
  $display->content['new-c45c7935-b817-4305-a536-029903936386'] = $pane;
  $display->panels['sidebar'][1] = 'new-c45c7935-b817-4305-a536-029903936386';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:announcement:default'] = $panelizer;

  return $export;
}
