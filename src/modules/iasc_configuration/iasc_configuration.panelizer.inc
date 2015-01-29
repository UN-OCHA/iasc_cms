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
  $display->title = 'Documents';
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
        'og_subspaces_view_parent' => 0,
        'field_category_tid' => '',
        'field_document_type_tid' => array(),
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
    $pane->pid = 'new-716125fd-8938-4b64-b1ca-076d3b55c7b8';
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
    $pane->uuid = '716125fd-8938-4b64-b1ca-076d3b55c7b8';
    $display->content['new-716125fd-8938-4b64-b1ca-076d3b55c7b8'] = $pane;
    $display->panels['sidebar'][0] = 'new-716125fd-8938-4b64-b1ca-076d3b55c7b8';
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
  $display->layout = 'burr_flipped';
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
    $pane->pid = 'new-6fdbb280-55b9-4670-9a6c-2caf75dfdfc0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-panel_pane_upcoming_meetings_filterable';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_oa_date_value' => array(
          'value' => '2014-11-01',
        ),
        'field_oa_date_value_1' => array(
          'value' => NULL,
        ),
        'field_city_value' => '',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'keys' => '',
      ),
      'show_exposed_form' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '6',
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
    $pane->uuid = '6fdbb280-55b9-4670-9a6c-2caf75dfdfc0';
    $display->content['new-6fdbb280-55b9-4670-9a6c-2caf75dfdfc0'] = $pane;
    $display->panels['contentmain'][2] = 'new-6fdbb280-55b9-4670-9a6c-2caf75dfdfc0';
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
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'flagged' => '0',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'override_title' => '',
      'override_title_text' => '',
      'widget_title' => 'Past Meetings',
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
    $pane->pid = 'new-ed641e95-c651-402c-8fd0-249c0a1beb65';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'type' => 'announcement',
        'term_node_tid_depth_1' => 'All',
        'term_node_tid_depth' => 'All',
        'term_node_tid_depth_2' => 'All',
        'keys' => '',
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '6',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'secondary_options' => 'panel-info',
        'linked_list' => 'none',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ed641e95-c651-402c-8fd0-249c0a1beb65';
    $display->content['new-ed641e95-c651-402c-8fd0-249c0a1beb65'] = $pane;
    $display->panels['contentmain'][4] = 'new-ed641e95-c651-402c-8fd0-249c0a1beb65';
    $pane = new stdClass();
    $pane->pid = 'new-44535534-31ad-4a2f-be9e-c791ab663a89';
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
    $pane->uuid = '44535534-31ad-4a2f-be9e-c791ab663a89';
    $display->content['new-44535534-31ad-4a2f-be9e-c791ab663a89'] = $pane;
    $display->panels['sidebar'][0] = 'new-44535534-31ad-4a2f-be9e-c791ab663a89';
    $pane = new stdClass();
    $pane->pid = 'new-e68594bd-bdcf-4510-b73c-fe78ae7a7c30';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_document-panel_pane_recent_docs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recently Published Documents',
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'sort_order' => 'DESC',
        'sort_by' => 'field_published_date_value',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'secondary_options' => 'panel-success',
        'linked_list' => 'doc-icon',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e68594bd-bdcf-4510-b73c-fe78ae7a7c30';
    $display->content['new-e68594bd-bdcf-4510-b73c-fe78ae7a7c30'] = $pane;
    $display->panels['sidebar'][1] = 'new-e68594bd-bdcf-4510-b73c-fe78ae7a7c30';
    $pane = new stdClass();
    $pane->pid = 'new-36245c7e-59f9-46bc-ac31-d01c99c4836a';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_contacts-panel_pane_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'fields_override' => array(
        'field_photo' => 1,
        'title' => 1,
        'field_homepage' => 0,
        'field_organisation' => 1,
        'field_position' => 0,
        'field_body_membership' => 0,
        'field_org_address_locality' => 0,
        'field_email' => 0,
        'field_phone' => 0,
      ),
      'exposed' => array(
        'title' => '',
        'field_body_membership_target_id' => array(),
        'field_organisation_tid' => array(),
        'field_department_value' => '',
        'field_position_value' => 'Chair Co-Chairs Members Secondary',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Members',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '36245c7e-59f9-46bc-ac31-d01c99c4836a';
    $display->content['new-36245c7e-59f9-46bc-ac31-d01c99c4836a'] = $pane;
    $display->panels['sidebar'][2] = 'new-36245c7e-59f9-46bc-ac31-d01c99c4836a';
    $pane = new stdClass();
    $pane->pid = 'new-41f70bbc-1472-4fd8-a2d9-0496014c521f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_contacts-panel_pane_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'fields_override' => array(
        'field_photo' => 0,
        'title' => 1,
        'field_homepage' => 0,
        'field_organisation' => 1,
        'field_position' => 0,
        'field_body_membership' => 0,
        'field_org_address_locality' => 1,
        'field_email' => 1,
        'field_phone' => 1,
      ),
      'exposed' => array(
        'title' => '',
        'field_body_membership_target_id' => array(),
        'field_organisation_tid' => array(),
        'field_department_value' => '',
        'field_position_value' => 'Contact',
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
      'settings' => array(
        'secondary_options' => 'panel-primary',
        'linked_list' => 'none',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '41f70bbc-1472-4fd8-a2d9-0496014c521f';
    $display->content['new-41f70bbc-1472-4fd8-a2d9-0496014c521f'] = $pane;
    $display->panels['sidebar'][3] = 'new-41f70bbc-1472-4fd8-a2d9-0496014c521f';
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
  $display->layout = 'burr_flipped';
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
    $pane->pid = 'new-c8217405-c922-4aa5-8bda-7d9b1cbb08dc';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-panel_pane_upcoming_meetings_filterable';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_oa_date_value' => array(
          'value' => '2014-11-01',
        ),
        'field_oa_date_value_1' => array(
          'value' => NULL,
        ),
        'field_city_value' => '',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'keys' => '',
      ),
      'show_exposed_form' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '6',
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
    $pane->uuid = 'c8217405-c922-4aa5-8bda-7d9b1cbb08dc';
    $display->content['new-c8217405-c922-4aa5-8bda-7d9b1cbb08dc'] = $pane;
    $display->panels['contentmain'][1] = 'new-c8217405-c922-4aa5-8bda-7d9b1cbb08dc';
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
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'flagged' => '0',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'override_title' => '',
      'override_title_text' => '',
      'widget_title' => 'Past Meetings',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $display->content['new-0d484813-4380-4e64-bb7f-8710b7c7eeb8'] = $pane;
    $display->panels['contentmain'][2] = 'new-0d484813-4380-4e64-bb7f-8710b7c7eeb8';
    $pane = new stdClass();
    $pane->pid = 'new-2c554cb3-739b-4362-8356-eed1a51fc172';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'type' => 'announcement',
        'term_node_tid_depth_1' => 'All',
        'term_node_tid_depth' => 'All',
        'term_node_tid_depth_2' => 'All',
        'keys' => '',
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '6',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'secondary_options' => 'panel-info',
        'linked_list' => 'none',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2c554cb3-739b-4362-8356-eed1a51fc172';
    $display->content['new-2c554cb3-739b-4362-8356-eed1a51fc172'] = $pane;
    $display->panels['contentmain'][3] = 'new-2c554cb3-739b-4362-8356-eed1a51fc172';
    $pane = new stdClass();
    $pane->pid = 'new-8592579d-4c14-42dd-883c-20ff7719bd79';
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
    $pane->uuid = '8592579d-4c14-42dd-883c-20ff7719bd79';
    $display->content['new-8592579d-4c14-42dd-883c-20ff7719bd79'] = $pane;
    $display->panels['sidebar'][0] = 'new-8592579d-4c14-42dd-883c-20ff7719bd79';
    $pane = new stdClass();
    $pane->pid = 'new-f1a74d4d-ba83-4ac2-860d-7d09b4a49696';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_document-panel_pane_recent_docs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recently Published Documents',
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'sort_order' => 'DESC',
        'sort_by' => 'field_published_date_value',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'secondary_options' => 'panel-success',
        'linked_list' => 'doc-icon',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1a74d4d-ba83-4ac2-860d-7d09b4a49696';
    $display->content['new-f1a74d4d-ba83-4ac2-860d-7d09b4a49696'] = $pane;
    $display->panels['sidebar'][1] = 'new-f1a74d4d-ba83-4ac2-860d-7d09b4a49696';
    $pane = new stdClass();
    $pane->pid = 'new-2f150ed5-c4cc-4f00-8a5b-4e7b4dc654fe';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'type' => 'oa_wiki_page',
        'term_node_tid_depth_1' => '205',
        'term_node_tid_depth' => 'All',
        'term_node_tid_depth_2' => 'All',
        'keys' => '',
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '4',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Products',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2f150ed5-c4cc-4f00-8a5b-4e7b4dc654fe';
    $display->content['new-2f150ed5-c4cc-4f00-8a5b-4e7b4dc654fe'] = $pane;
    $display->panels['sidebar'][2] = 'new-2f150ed5-c4cc-4f00-8a5b-4e7b4dc654fe';
    $pane = new stdClass();
    $pane->pid = 'new-92cb13b2-eea9-43b5-bcca-3eecbc940b0d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'type' => 'oa_wiki_page',
        'term_node_tid_depth_1' => '239',
        'term_node_tid_depth' => 'All',
        'term_node_tid_depth_2' => 'All',
        'keys' => '',
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '4',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Terms of Reference',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '92cb13b2-eea9-43b5-bcca-3eecbc940b0d';
    $display->content['new-92cb13b2-eea9-43b5-bcca-3eecbc940b0d'] = $pane;
    $display->panels['sidebar'][3] = 'new-92cb13b2-eea9-43b5-bcca-3eecbc940b0d';
    $pane = new stdClass();
    $pane->pid = 'new-b7c206cc-5e8a-48d3-ac90-9fc6e666d0f3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => 'All',
        'type' => 'oa_wiki_page',
        'term_node_tid_depth_1' => '240',
        'term_node_tid_depth' => 'All',
        'term_node_tid_depth_2' => 'All',
        'keys' => '',
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '4',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Work Plans and Progress Reports',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b7c206cc-5e8a-48d3-ac90-9fc6e666d0f3';
    $display->content['new-b7c206cc-5e8a-48d3-ac90-9fc6e666d0f3'] = $pane;
    $display->panels['sidebar'][4] = 'new-b7c206cc-5e8a-48d3-ac90-9fc6e666d0f3';
    $pane = new stdClass();
    $pane->pid = 'new-335e5662-a92a-46a9-b492-406700a0ef03';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_contacts-panel_pane_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'fields_override' => array(
        'field_photo' => 0,
        'title' => 1,
        'field_homepage' => 0,
        'field_position' => 0,
        'field_organisation' => 1,
        'field_body_membership' => 0,
        'field_address_locality' => 1,
        'field_email' => 1,
        'field_phone' => 1,
      ),
      'exposed' => array(
        'title' => '',
        'field_body_membership_target_id' => array(),
        'field_organisation_tid' => array(),
        'field_department_value' => '',
        'field_position_value' => 'Co-Chair',
        'field_membership_level_value' => 'All',
        'sort_order' => 'ASC',
        'sort_by' => 'field_last_name_value',
      ),
      'override_title' => '',
      'override_title_text' => '',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '335e5662-a92a-46a9-b492-406700a0ef03';
    $display->content['new-335e5662-a92a-46a9-b492-406700a0ef03'] = $pane;
    $display->panels['sidebar'][5] = 'new-335e5662-a92a-46a9-b492-406700a0ef03';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_space:subsidiary_bodies_default'] = $panelizer;

  return $export;
}
