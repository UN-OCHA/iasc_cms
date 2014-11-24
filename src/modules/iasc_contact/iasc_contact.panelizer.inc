<?php
/**
 * @file
 * iasc_contact.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function iasc_contact_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:contact:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'contact';
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
  $display->layout = 'radix_burr';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => '0',
    ),
    'contentmain' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ffb2a8e0-5a7e-40f3-b88b-4990c371e6c7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd8e18d4-eeb4-47b7-bcbe-3f113d7d65f0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd8e18d4-eeb4-47b7-bcbe-3f113d7d65f0';
    $display->content['new-cd8e18d4-eeb4-47b7-bcbe-3f113d7d65f0'] = $pane;
    $display->panels['contentmain'][0] = 'new-cd8e18d4-eeb4-47b7-bcbe-3f113d7d65f0';
    $pane = new stdClass();
    $pane->pid = 'new-47e97ad0-1d03-46fe-a6b1-7a357248dff0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '47e97ad0-1d03-46fe-a6b1-7a357248dff0';
    $display->content['new-47e97ad0-1d03-46fe-a6b1-7a357248dff0'] = $pane;
    $display->panels['contentmain'][1] = 'new-47e97ad0-1d03-46fe-a6b1-7a357248dff0';
    $pane = new stdClass();
    $pane->pid = 'new-30c28cab-7000-4804-a671-23d531290f42';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_membership';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'add' => '',
        'delete' => '',
        'description' => 0,
        'edit' => '',
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'secondary_options' => 'panel-success',
        'linked_list' => 'none',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '30c28cab-7000-4804-a671-23d531290f42';
    $display->content['new-30c28cab-7000-4804-a671-23d531290f42'] = $pane;
    $display->panels['contentmain'][2] = 'new-30c28cab-7000-4804-a671-23d531290f42';
    $pane = new stdClass();
    $pane->pid = 'new-3b7da434-7b63-4cdd-ab10-53d947a0879a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_contacts-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'override_title' => '',
      'override_title_text' => '',
      'widget_title' => 'Organization Information',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'secondary_options' => 'panel-success',
        'linked_list' => 'none',
      ),
      'style' => 'secondary',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3b7da434-7b63-4cdd-ab10-53d947a0879a';
    $display->content['new-3b7da434-7b63-4cdd-ab10-53d947a0879a'] = $pane;
    $display->panels['contentmain'][3] = 'new-3b7da434-7b63-4cdd-ab10-53d947a0879a';
    $pane = new stdClass();
    $pane->pid = 'new-47fc6bdc-bcb0-4c7e-85c7-b6514a3ccc4a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'bio_circled',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47fc6bdc-bcb0-4c7e-85c7-b6514a3ccc4a';
    $display->content['new-47fc6bdc-bcb0-4c7e-85c7-b6514a3ccc4a'] = $pane;
    $display->panels['sidebar'][0] = 'new-47fc6bdc-bcb0-4c7e-85c7-b6514a3ccc4a';
    $pane = new stdClass();
    $pane->pid = 'new-ae67e373-7ef4-4005-bc6c-954def75b554';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ae67e373-7ef4-4005-bc6c-954def75b554';
    $display->content['new-ae67e373-7ef4-4005-bc6c-954def75b554'] = $pane;
    $display->panels['sidebar'][1] = 'new-ae67e373-7ef4-4005-bc6c-954def75b554';
    $pane = new stdClass();
    $pane->pid = 'new-94a903a3-2978-43d2-823f-59f80323f42a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '94a903a3-2978-43d2-823f-59f80323f42a';
    $display->content['new-94a903a3-2978-43d2-823f-59f80323f42a'] = $pane;
    $display->panels['sidebar'][2] = 'new-94a903a3-2978-43d2-823f-59f80323f42a';
    $pane = new stdClass();
    $pane->pid = 'new-6b2c6710-e8d6-47ab-90ef-77dcee37545d';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6b2c6710-e8d6-47ab-90ef-77dcee37545d';
    $display->content['new-6b2c6710-e8d6-47ab-90ef-77dcee37545d'] = $pane;
    $display->panels['sidebar'][3] = 'new-6b2c6710-e8d6-47ab-90ef-77dcee37545d';
    $pane = new stdClass();
    $pane->pid = 'new-d7f8f9df-c14b-4d83-a077-6f87b0c1a686';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_fax';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd7f8f9df-c14b-4d83-a077-6f87b0c1a686';
    $display->content['new-d7f8f9df-c14b-4d83-a077-6f87b0c1a686'] = $pane;
    $display->panels['sidebar'][4] = 'new-d7f8f9df-c14b-4d83-a077-6f87b0c1a686';
    $pane = new stdClass();
    $pane->pid = 'new-da03dfb5-5855-423e-b9f9-63e0782e9dd5';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'da03dfb5-5855-423e-b9f9-63e0782e9dd5';
    $display->content['new-da03dfb5-5855-423e-b9f9-63e0782e9dd5'] = $pane;
    $display->panels['sidebar'][5] = 'new-da03dfb5-5855-423e-b9f9-63e0782e9dd5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-47e97ad0-1d03-46fe-a6b1-7a357248dff0';
  $panelizer->display = $display;
  $export['node:contact:default'] = $panelizer;

  return $export;
}
