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
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '24.475328938060954',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'panel panel-default panel-primary sidebar',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => 'main',
        'class' => 'panel-body',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'panel-body',
      ),
      1 => array(
        'type' => 'column',
        'width' => '75.52467106193905',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => '1',
        'class' => 'header',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'body',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'header',
      ),
      'body' => array(
        'type' => 'region',
        'title' => 'Body',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'header' => NULL,
      'body' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1ec5a632-78a1-4beb-9b61-f8840b998c6d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae8c562e-1e4d-4753-a985-222b0e6f68c8';
    $pane->panel = 'body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
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
    $pane->uuid = 'ae8c562e-1e4d-4753-a985-222b0e6f68c8';
    $display->content['new-ae8c562e-1e4d-4753-a985-222b0e6f68c8'] = $pane;
    $display->panels['body'][0] = 'new-ae8c562e-1e4d-4753-a985-222b0e6f68c8';
    $pane = new stdClass();
    $pane->pid = 'new-873b1816-3764-47bc-b681-805d9ab2a673';
    $pane->panel = 'body';
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
        'link' => 0,
        'view_mode' => 'link_only',
        'links' => 0,
      ),
      'context' => array(),
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
    $pane->uuid = '873b1816-3764-47bc-b681-805d9ab2a673';
    $display->content['new-873b1816-3764-47bc-b681-805d9ab2a673'] = $pane;
    $display->panels['body'][1] = 'new-873b1816-3764-47bc-b681-805d9ab2a673';
    $pane = new stdClass();
    $pane->pid = 'new-16d221c3-80c0-4e31-a783-415489e5ff04';
    $pane->panel = 'header';
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
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16d221c3-80c0-4e31-a783-415489e5ff04';
    $display->content['new-16d221c3-80c0-4e31-a783-415489e5ff04'] = $pane;
    $display->panels['header'][0] = 'new-16d221c3-80c0-4e31-a783-415489e5ff04';
    $pane = new stdClass();
    $pane->pid = 'new-9e7da99b-add6-4cb4-952b-9d26f298367e';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_published_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'medium',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => array(),
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
    $pane->uuid = '9e7da99b-add6-4cb4-952b-9d26f298367e';
    $display->content['new-9e7da99b-add6-4cb4-952b-9d26f298367e'] = $pane;
    $display->panels['header'][1] = 'new-9e7da99b-add6-4cb4-952b-9d26f298367e';
    $pane = new stdClass();
    $pane->pid = 'new-9017976b-a1a0-4cac-a168-81e5a6bea209';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
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
    $pane->uuid = '9017976b-a1a0-4cac-a168-81e5a6bea209';
    $display->content['new-9017976b-a1a0-4cac-a168-81e5a6bea209'] = $pane;
    $display->panels['right'][0] = 'new-9017976b-a1a0-4cac-a168-81e5a6bea209';
    $pane = new stdClass();
    $pane->pid = 'new-3e3b3e05-0a45-4144-93c1-ac69addb1f84';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => array(),
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
    $pane->uuid = '3e3b3e05-0a45-4144-93c1-ac69addb1f84';
    $display->content['new-3e3b3e05-0a45-4144-93c1-ac69addb1f84'] = $pane;
    $display->panels['right'][1] = 'new-3e3b3e05-0a45-4144-93c1-ac69addb1f84';
    $pane = new stdClass();
    $pane->pid = 'new-68ef8bd3-06a6-48f3-ae72-a65da6ab70c0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oa_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '68ef8bd3-06a6-48f3-ae72-a65da6ab70c0';
    $display->content['new-68ef8bd3-06a6-48f3-ae72-a65da6ab70c0'] = $pane;
    $display->panels['right'][2] = 'new-68ef8bd3-06a6-48f3-ae72-a65da6ab70c0';
    $pane = new stdClass();
    $pane->pid = 'new-c47d0913-683b-4649-b42d-7c1fdd9d8a09';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => array(),
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
    $pane->uuid = 'c47d0913-683b-4649-b42d-7c1fdd9d8a09';
    $display->content['new-c47d0913-683b-4649-b42d-7c1fdd9d8a09'] = $pane;
    $display->panels['right'][3] = 'new-c47d0913-683b-4649-b42d-7c1fdd9d8a09';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:announcement:default'] = $panelizer;

  return $export;
}
