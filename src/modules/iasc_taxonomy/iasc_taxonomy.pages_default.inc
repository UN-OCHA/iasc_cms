<?php
/**
 * @file
 * iasc_taxonomy.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iasc_taxonomy_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'Other taxonomy Pages',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'hosts' => 'hosts',
              'document_types' => 'document_types',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4a17e021-fb27-4abc-8eb2-3cc5089cd8a0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7cf06c2d-5f77-47ae-b75f-81ad219e2d9b';
    $pane->panel = 'contentmain';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
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
    $pane->uuid = '7cf06c2d-5f77-47ae-b75f-81ad219e2d9b';
    $display->content['new-7cf06c2d-5f77-47ae-b75f-81ad219e2d9b'] = $pane;
    $display->panels['contentmain'][0] = 'new-7cf06c2d-5f77-47ae-b75f-81ad219e2d9b';
    $pane = new stdClass();
    $pane->pid = 'new-49b07ffb-3cc1-4c9a-bffd-80e3ab9a9fc7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_taxonomy-taxonomy_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'exposed' => array(
        'sort_order' => 'ASC',
        'sort_by' => 'created',
      ),
      'context' => array(
        0 => 'argument_term_1',
      ),
      'view_settings' => 'fields',
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
    $pane->uuid = '49b07ffb-3cc1-4c9a-bffd-80e3ab9a9fc7';
    $display->content['new-49b07ffb-3cc1-4c9a-bffd-80e3ab9a9fc7'] = $pane;
    $display->panels['contentmain'][1] = 'new-49b07ffb-3cc1-4c9a-bffd-80e3ab9a9fc7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
