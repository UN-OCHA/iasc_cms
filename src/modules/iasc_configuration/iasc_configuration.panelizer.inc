<?php
/**
 * @file
 * iasc_configuration.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function iasc_configuration_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_section:document_section';
  $panelizer->title = 'Document Section';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4da17148-a7a9-4da8-a9bf-ef168121174a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c4dd840-ad97-4b85-9c82-84aee3c81846';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_document-panel_pane_filterable_docs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_published_date_value' => array(
          'value' => NULL,
        ),
        'field_published_date_value_1' => array(
          'value' => NULL,
        ),
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 1,
        'field_category_tid' => '',
        'field_document_type_tid' => array(
          1 => '1',
          2 => '2',
          3 => '3',
        ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c4dd840-ad97-4b85-9c82-84aee3c81846';
    $display->content['new-1c4dd840-ad97-4b85-9c82-84aee3c81846'] = $pane;
    $display->panels['contentmain'][0] = 'new-1c4dd840-ad97-4b85-9c82-84aee3c81846';
    $pane = new stdClass();
    $pane->pid = 'new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'form_build_id' => 'form-AHJUfpYPcZ4fsSHUHIFy0Adu0CXy4e79Kcslz2yLodI',
      'form_token' => 'BzH8uxEwTjsQGuqkcXBIlcjCxMTFGGufXWz-7ckhC2M',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc';
    $display->content['new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc'] = $pane;
    $display->panels['sidebar'][0] = 'new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_section:document_section'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_space:principals_wg_weekly_default';
  $panelizer->title = 'Principals, Working Group, Weekly';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_space';
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
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0e3fa956-fb7b-4e52-82aa-b79a16b2e38c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bad26267-d6d3-468b-bb62-48dbb49667a8';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'bad26267-d6d3-468b-bb62-48dbb49667a8';
    $display->content['new-bad26267-d6d3-468b-bb62-48dbb49667a8'] = $pane;
    $display->panels['contentmain'][0] = 'new-bad26267-d6d3-468b-bb62-48dbb49667a8';
    $pane = new stdClass();
    $pane->pid = 'new-93022d25-a41c-4fb0-b7e7-84d54b472396';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_responsibilities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '93022d25-a41c-4fb0-b7e7-84d54b472396';
    $display->content['new-93022d25-a41c-4fb0-b7e7-84d54b472396'] = $pane;
    $display->panels['contentmain'][1] = 'new-93022d25-a41c-4fb0-b7e7-84d54b472396';
    $pane = new stdClass();
    $pane->pid = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-section_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'view_mode' => 'full',
      'widget_title' => NULL,
      'items_per_page' => '5',
      'exposed' => array(
        'type' => array(),
        'realname' => '',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'use_pager' => 0,
      'pager_id' => '',
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'show_exposed_form' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de'] = $pane;
    $display->panels['contentmain'][2] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $pane = new stdClass();
    $pane->pid = 'new-fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_calendar_month';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
        'flagged' => '0',
      ),
      'items_per_page' => '10',
      'include_attachments' => 1,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b';
    $display->content['new-fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b'] = $pane;
    $display->panels['contentmain'][3] = 'new-fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b';
    $pane = new stdClass();
    $pane->pid = 'new-0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
        'flagged' => '0',
      ),
      'items_per_page' => '10',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $display->content['new-0d484813-4380-4e64-bb7f-8710b7c7eeb8'] = $pane;
    $display->panels['contentmain'][4] = 'new-0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $pane = new stdClass();
    $pane->pid = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'form_build_id' => 'form-nfdmNUC5N1Z1lUluljqjL18jF_bVcdlU1-H470dZv94',
      'form_token' => 'eF5y_k-Sqs_hlOO917E4wjO8454L4ZYTryjMSnll_X8',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '801d2668-fa45-4031-83ba-e7d47830a8a6';
    $display->content['new-801d2668-fa45-4031-83ba-e7d47830a8a6'] = $pane;
    $display->panels['sidebar'][0] = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
    $pane = new stdClass();
    $pane->pid = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $display->content['new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95'] = $pane;
    $display->panels['sidebar'][1] = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $pane = new stdClass();
    $pane->pid = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_section_pages-section_pages_within_spaces';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'fields_override' => array(
        'title' => 1,
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => '',
      'exposed' => array(
        'flagged' => '0',
      ),
      'offset' => NULL,
      'link_to_view' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
    $display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54'] = $pane;
    $display->panels['sidebar'][2] = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_space:principals_wg_weekly_default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_space:subsidiary_bodies_default';
  $panelizer->title = 'Subsidiary Bodies';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_space';
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
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0e3fa956-fb7b-4e52-82aa-b79a16b2e38c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bad26267-d6d3-468b-bb62-48dbb49667a8';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'bad26267-d6d3-468b-bb62-48dbb49667a8';
    $display->content['new-bad26267-d6d3-468b-bb62-48dbb49667a8'] = $pane;
    $display->panels['contentmain'][0] = 'new-bad26267-d6d3-468b-bb62-48dbb49667a8';
    $pane = new stdClass();
    $pane->pid = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-section_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'view_mode' => 'full',
      'widget_title' => NULL,
      'items_per_page' => '5',
      'exposed' => array(
        'type' => array(),
        'realname' => '',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'use_pager' => 0,
      'pager_id' => '',
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'show_exposed_form' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de'] = $pane;
    $display->panels['contentmain'][1] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $pane = new stdClass();
    $pane->pid = 'new-fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_calendar_month';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
        'flagged' => '0',
      ),
      'items_per_page' => '10',
      'include_attachments' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b';
    $display->content['new-fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b'] = $pane;
    $display->panels['contentmain'][2] = 'new-fc9a5ced-e22c-49aa-9d2b-f8b2135a3a4b';
    $pane = new stdClass();
    $pane->pid = 'new-0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
        'flagged' => '0',
      ),
      'items_per_page' => '10',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $display->content['new-0d484813-4380-4e64-bb7f-8710b7c7eeb8'] = $pane;
    $display->panels['contentmain'][3] = 'new-0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $pane = new stdClass();
    $pane->pid = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'form_build_id' => 'form-nfdmNUC5N1Z1lUluljqjL18jF_bVcdlU1-H470dZv94',
      'form_token' => 'eF5y_k-Sqs_hlOO917E4wjO8454L4ZYTryjMSnll_X8',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '801d2668-fa45-4031-83ba-e7d47830a8a6';
    $display->content['new-801d2668-fa45-4031-83ba-e7d47830a8a6'] = $pane;
    $display->panels['sidebar'][0] = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
    $pane = new stdClass();
    $pane->pid = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $display->content['new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95'] = $pane;
    $display->panels['sidebar'][1] = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $pane = new stdClass();
    $pane->pid = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_section_pages-section_pages_within_spaces';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'fields_override' => array(
        'title' => 1,
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => '',
      'exposed' => array(
        'flagged' => '0',
      ),
      'offset' => NULL,
      'link_to_view' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
    $display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54'] = $pane;
    $display->panels['sidebar'][2] = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_space:subsidiary_bodies_default'] = $panelizer;

  return $export;
}
