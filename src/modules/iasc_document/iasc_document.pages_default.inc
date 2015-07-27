<?php
/**
 * @file
 * iasc_document.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iasc_document_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Product category taxonomy term pages',
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
              'product_categories' => 'product_categories',
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
  $pane->pid = 'new-b2cb5d27-2c10-4043-b64f-12092b744039';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_document-panel_pane_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'og_group_ref_target_id_op' => 'or',
      'og_group_ref_target_id' => 'All',
      'og_group_ref_target_id_mine' => 0,
      'og_subspaces_view_all' => 0,
      'og_subspaces_view_parent' => 0,
      'field_document_type_tid' => array(
        205 => '205',
      ),
    ),
    'more_link' => 0,
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b2cb5d27-2c10-4043-b64f-12092b744039';
  $display->content['new-b2cb5d27-2c10-4043-b64f-12092b744039'] = $pane;
  $display->panels['contentmain'][1] = 'new-b2cb5d27-2c10-4043-b64f-12092b744039';
  $pane = new stdClass();
  $pane->pid = 'new-c9d24668-995f-4e70-865f-502988cce28a';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-product-catalogue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c9d24668-995f-4e70-865f-502988cce28a';
  $display->content['new-c9d24668-995f-4e70-865f-502988cce28a'] = $pane;
  $display->panels['sidebar'][0] = 'new-c9d24668-995f-4e70-865f-502988cce28a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c9d24668-995f-4e70-865f-502988cce28a';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function iasc_document_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product_catalog';
  $page->task = 'page';
  $page->admin_title = 'Product Catalog';
  $page->admin_description = '';
  $page->path = 'resources/%input';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Resources2',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'input' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
      'keyword' => 'input',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_catalog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'IASC Products',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'other-products',
        'keyword' => 'other-products',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'resources/iasc-products',
          ),
          'context' => 'empty',
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
  $display->title = 'IASC Products';
  $display->uuid = 'e7f1952d-055b-4bcc-be42-33a133d33308';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d09ceeaf-83ca-48cd-bfb5-3a57b11e44df';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'block-16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'd09ceeaf-83ca-48cd-bfb5-3a57b11e44df';
  $display->content['new-d09ceeaf-83ca-48cd-bfb5-3a57b11e44df'] = $pane;
  $display->panels['contentmain'][0] = 'new-d09ceeaf-83ca-48cd-bfb5-3a57b11e44df';
  $pane = new stdClass();
  $pane->pid = 'new-8df54764-9af0-416b-8be0-61436a9df013';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_document-panel_pane_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'og_group_ref_target_id_op' => 'not empty',
      'og_group_ref_target_id' => '2608',
      'og_group_ref_target_id_mine' => 0,
      'og_subspaces_view_all' => 0,
      'og_subspaces_view_parent' => 0,
      'field_document_type_tid' => array(
        205 => '205',
      ),
    ),
    'more_link' => 0,
    'use_pager' => 1,
    'pager_id' => '1',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
    'context' => array(
      0 => 'empty',
    ),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8df54764-9af0-416b-8be0-61436a9df013';
  $display->content['new-8df54764-9af0-416b-8be0-61436a9df013'] = $pane;
  $display->panels['contentmain'][1] = 'new-8df54764-9af0-416b-8be0-61436a9df013';
  $pane = new stdClass();
  $pane->pid = 'new-37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-product-catalogue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $display->content['new-37e6c907-6684-4e72-84b7-1a02e74cb74f'] = $pane;
  $display->panels['sidebar'][0] = 'new-37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_catalog_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Non-IASC Products',
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
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'other-products',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
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
  $display->title = 'Other Products';
  $display->uuid = 'e7f1952d-055b-4bcc-be42-33a133d33308';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7137b198-c74b-4d17-94c7-915081b11390';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'block-17';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '7137b198-c74b-4d17-94c7-915081b11390';
  $display->content['new-7137b198-c74b-4d17-94c7-915081b11390'] = $pane;
  $display->panels['contentmain'][0] = 'new-7137b198-c74b-4d17-94c7-915081b11390';
  $pane = new stdClass();
  $pane->pid = 'new-b96d8dc0-0fae-4cec-9ecc-4fab09fd44a5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_document-panel_pane_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'og_group_ref_target_id_op' => 'or',
      'og_group_ref_target_id' => '2608',
      'og_group_ref_target_id_mine' => 0,
      'og_subspaces_view_all' => 0,
      'og_subspaces_view_parent' => 0,
      'field_document_type_tid' => array(
        205 => '205',
      ),
    ),
    'link_to_view' => 0,
    'use_pager' => 1,
    'pager_id' => '1',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
    'more_link' => 0,
    'context' => array(
      0 => 'empty',
    ),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b96d8dc0-0fae-4cec-9ecc-4fab09fd44a5';
  $display->content['new-b96d8dc0-0fae-4cec-9ecc-4fab09fd44a5'] = $pane;
  $display->panels['contentmain'][1] = 'new-b96d8dc0-0fae-4cec-9ecc-4fab09fd44a5';
  $pane = new stdClass();
  $pane->pid = 'new-37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-product-catalogue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $display->content['new-37e6c907-6684-4e72-84b7-1a02e74cb74f'] = $pane;
  $display->panels['sidebar'][0] = 'new-37e6c907-6684-4e72-84b7-1a02e74cb74f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product_catalog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resource_pages';
  $page->task = 'page';
  $page->admin_title = 'Resource Pages';
  $page->admin_description = '';
  $page->path = 'resources';
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
  $handler->name = 'page_resource_pages__panel_context_c2f92df9-4199-407b-9a36-c11ad65e3f3e';
  $handler->task = 'page';
  $handler->subtask = 'resource_pages';
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
  $display->uuid = '543e79e6-1299-4e12-b28c-41ef40d6c5bb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-785a83cf-266f-498c-9293-61610f4954c7';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'iasc_document-panel_pane_resources';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '785a83cf-266f-498c-9293-61610f4954c7';
  $display->content['new-785a83cf-266f-498c-9293-61610f4954c7'] = $pane;
  $display->panels['contentmain'][0] = 'new-785a83cf-266f-498c-9293-61610f4954c7';
  $pane = new stdClass();
  $pane->pid = 'new-87156a3b-89d0-48a1-8cf1-a46e9d86e68d';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-product-catalogue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '87156a3b-89d0-48a1-8cf1-a46e9d86e68d';
  $display->content['new-87156a3b-89d0-48a1-8cf1-a46e9d86e68d'] = $pane;
  $display->panels['sidebar'][0] = 'new-87156a3b-89d0-48a1-8cf1-a46e9d86e68d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resource_pages'] = $page;

  return $pages;

}
