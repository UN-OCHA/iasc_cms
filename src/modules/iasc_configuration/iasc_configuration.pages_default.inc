<?php
/**
 * @file
 * iasc_configuration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function iasc_configuration_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'section_nodes';
  $page->task = 'page';
  $page->admin_title = 'Section Nodes';
  $page->admin_description = 'Panel Variants for Document, Meetings and Announcements of a Space.';
  $page->path = 'section/%node/%type/all';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'type' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_section_nodes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'section_nodes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Documents of a Space',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'documents',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
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
  $display->title = 'Documents';
  $display->uuid = '0eefe0a7-d41a-4d4b-9c29-411f5361d0f0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b634733d-ad94-42a7-b2f0-dfae1da27096';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_sections-panel_pane_space_docs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b634733d-ad94-42a7-b2f0-dfae1da27096';
  $display->content['new-b634733d-ad94-42a7-b2f0-dfae1da27096'] = $pane;
  $display->panels['contentmain'][0] = 'new-b634733d-ad94-42a7-b2f0-dfae1da27096';
  $pane = new stdClass();
  $pane->pid = 'new-d414fc2e-5f44-427c-9ea8-de2398da430b';
  $pane->panel = 'sidebar';
  $pane->type = 'iasc_configuration.section_menu';
  $pane->subtype = 'iasc_configuration.section_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd414fc2e-5f44-427c-9ea8-de2398da430b';
  $display->content['new-d414fc2e-5f44-427c-9ea8-de2398da430b'] = $pane;
  $display->panels['sidebar'][0] = 'new-d414fc2e-5f44-427c-9ea8-de2398da430b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_section_nodes_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'section_nodes';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Meetings of a Space',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'meetings',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
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
  $display->title = 'Meetings';
  $display->uuid = '0eefe0a7-d41a-4d4b-9c29-411f5361d0f0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bee696c5-135b-4471-ab84-0007690a6bb8';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_sections-panel_pane_space_meetings';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'field_oa_date' => 1,
      'title' => 1,
      'og_group_ref' => 1,
      'field_city' => 1,
      'field_time_zone' => 0,
      'field_oa_date_1' => 1,
    ),
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bee696c5-135b-4471-ab84-0007690a6bb8';
  $display->content['new-bee696c5-135b-4471-ab84-0007690a6bb8'] = $pane;
  $display->panels['contentmain'][0] = 'new-bee696c5-135b-4471-ab84-0007690a6bb8';
  $pane = new stdClass();
  $pane->pid = 'new-d414fc2e-5f44-427c-9ea8-de2398da430b';
  $pane->panel = 'sidebar';
  $pane->type = 'iasc_configuration.section_menu';
  $pane->subtype = 'iasc_configuration.section_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd414fc2e-5f44-427c-9ea8-de2398da430b';
  $display->content['new-d414fc2e-5f44-427c-9ea8-de2398da430b'] = $pane;
  $display->panels['sidebar'][0] = 'new-d414fc2e-5f44-427c-9ea8-de2398da430b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_section_nodes_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'section_nodes';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Announcements of a Space',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'news',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
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
  $display->title = 'News';
  $display->uuid = '0eefe0a7-d41a-4d4b-9c29-411f5361d0f0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5a15afa1-6ec7-4e24-9c0c-b93b9ab93512';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_sections-panel_pane_space_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'field_published_date' => 1,
    ),
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a15afa1-6ec7-4e24-9c0c-b93b9ab93512';
  $display->content['new-5a15afa1-6ec7-4e24-9c0c-b93b9ab93512'] = $pane;
  $display->panels['contentmain'][0] = 'new-5a15afa1-6ec7-4e24-9c0c-b93b9ab93512';
  $pane = new stdClass();
  $pane->pid = 'new-d414fc2e-5f44-427c-9ea8-de2398da430b';
  $pane->panel = 'sidebar';
  $pane->type = 'iasc_configuration.section_menu';
  $pane->subtype = 'iasc_configuration.section_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd414fc2e-5f44-427c-9ea8-de2398da430b';
  $display->content['new-d414fc2e-5f44-427c-9ea8-de2398da430b'] = $pane;
  $display->panels['sidebar'][0] = 'new-d414fc2e-5f44-427c-9ea8-de2398da430b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['section_nodes'] = $page;

  return $pages;

}
