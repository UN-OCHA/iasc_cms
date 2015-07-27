<?php
/**
 * @file
 * iasc_document.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_document_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iasc_document_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_document_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_wiki_page-body'])) {
    $data['node-oa_wiki_page-body']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-body']['description'] = 'Enter a description of the product.'; /* WAS: 'Enter the content of the document or wiki here.' */
    $data['node-oa_wiki_page-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 11,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-body']['display']['teaser']['weight'] = 6; /* WAS: 0 */
    $data['node-oa_wiki_page-body']['label'] = 'Description'; /* WAS: 'Body' */
    $data['node-oa_wiki_page-body']['widget']['weight'] = 5; /* WAS: 2 */
  }
  if (isset($data['node-oa_wiki_page-field_oa_media'])) {
    $data['node-oa_wiki_page-field_oa_media']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['display']['link_to_document'] = array(
      'label' => 'hidden',
      'module' => 'file_entity',
      'settings' => array(
        'text' => '[file:name]',
      ),
      'type' => 'file_download_link',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['display']['teaser']['weight'] = 11; /* WAS: 4 */
    $data['node-oa_wiki_page-field_oa_media']['label'] = 'File(s)'; /* WAS: 'Attachments' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['browser_plugins']['youtube'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_crop_info'] = 1; /* WAS: TRUE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_default_crop_area'] = 1; /* WAS: TRUE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_enable'] = 0; /* WAS: FALSE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_inline_crop'] = 0; /* WAS: FALSE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_instant_preview'] = 1; /* WAS: TRUE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_keyboard'] = 1; /* WAS: TRUE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_maximize_default_crop_area'] = 0; /* WAS: FALSE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_thumblist'] = 0; /* WAS: FALSE */
    $data['node-oa_wiki_page-field_oa_media']['widget']['weight'] = 8; /* WAS: 5 */
    unset($data['node-oa_wiki_page-field_oa_media']['widget']['settings']['progress_indicator']);
  }
  if (isset($data['node-oa_wiki_page-field_oa_wiki_page_no_redirect'])) {
    $data['node-oa_wiki_page-field_oa_wiki_page_no_redirect']['default_value'][0]['value'] = 1; /* WAS: 0 */
    $data['node-oa_wiki_page-field_oa_wiki_page_no_redirect']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_wiki_page_no_redirect']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_wiki_page_no_redirect']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_wiki_page_no_redirect']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_wiki_page-oa_other_spaces_ref'])) {
    $data['node-oa_wiki_page-oa_other_spaces_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_other_spaces_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_other_spaces_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_other_spaces_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_wiki_page-oa_section_ref'])) {
    $data['node-oa_wiki_page-oa_section_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-oa_section_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_section_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_section_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_section_ref']['display']['default']['weight'] = 2; /* WAS: 3 */
    $data['node-oa_wiki_page-oa_section_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 8,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-oa_section_ref']['display']['teaser']['weight'] = 10; /* WAS: 3 */
    unset($data['node-oa_wiki_page-oa_section_ref']['options_limit_fields']['oa_section_ref']);
  }
  if (isset($data['node-oa_wiki_page-og_group_ref'])) {
    $data['node-oa_wiki_page-og_group_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['node-oa_wiki_page-og_group_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['teaser']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-oa_wiki_page-og_group_ref']['display']['teaser']['module'] = 'entityreference'; /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['teaser']['settings']['link'] = 1; /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['display']['teaser']['type'] = 'entityreference_label'; /* WAS: 'hidden' */
    $data['node-oa_wiki_page-og_group_ref']['display']['teaser']['weight'] = 4; /* WAS: 2 */
    $data['node-oa_wiki_page-og_group_ref']['label'] = 'Authoring Bodies'; /* WAS: 'Groups audience' */
    $data['node-oa_wiki_page-og_group_ref']['options_limit'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['options_limit_empty_behaviour'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['options_limit_fields'] = array(
      'body' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['required'] = 0; /* WAS: FALSE */
    $data['node-oa_wiki_page-og_group_ref']['settings']['behaviors']['og_widget']['access_override'] = 0; /* WAS: 1 */
    $data['node-oa_wiki_page-og_group_ref']['widget']['active'] = 0; /* WAS: '' */
  }
  if (isset($data['node-oa_wiki_page-og_vocabulary'])) {
    $data['node-oa_wiki_page-og_vocabulary']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['teaser']['type'] = 'hidden'; /* WAS: 'og_vocab' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['teaser']['weight'] = 8; /* WAS: 1 */
    $data['node-oa_wiki_page-og_vocabulary']['widget']['weight'] = 9; /* WAS: 6 */
    unset($data['node-oa_wiki_page-og_vocabulary']['display']['teaser']['module']);
    unset($data['node-oa_wiki_page-og_vocabulary']['display']['teaser']['settings']['concatenate']);
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function iasc_document_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context_6'])) {
    $data['node_edit_panel_context_6']->conf['display']->content['new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8']->position = 2; /* WAS: 3 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-250cd2f8-caf7-437c-9177-3babe6738d57']->position = 5; /* WAS: 7 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-3e512c5d-c078-4846-80be-8af3e1542958']->position = 1; /* WAS: 2 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-9393082c-61cd-4cc5-801f-bfe809fcbd43']->access['plugins'] = array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer content types',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ); /* WAS: '' */
    $data['node_edit_panel_context_6']->conf['display']->content['new-9393082c-61cd-4cc5-801f-bfe809fcbd43']->position = 4; /* WAS: 5 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-ff7df286-18fd-4ab0-bd53-1102821bc86f']->position = 3; /* WAS: 4 */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][1] = 'new-3e512c5d-c078-4846-80be-8af3e1542958'; /* WAS: 'new-316932d4-d342-45ef-8ddd-3aee5f75adc2' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][2] = 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8'; /* WAS: 'new-3e512c5d-c078-4846-80be-8af3e1542958' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][3] = 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f'; /* WAS: 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][4] = 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43'; /* WAS: 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][5] = 'new-82008dc7-eac3-4985-92d9-0cc6e48cc729'; /* WAS: 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][6] = 'new-250cd2f8-caf7-437c-9177-3babe6738d57'; /* WAS: 'new-82008dc7-eac3-4985-92d9-0cc6e48cc729' */
    unset($data['node_edit_panel_context_6']->conf['display']->content['new-316932d4-d342-45ef-8ddd-3aee5f75adc2']);
    unset($data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][7]);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_document_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_wiki_page:default'])) {
    $data['node:oa_wiki_page:default']->display->content['new-436ee688-6d0a-4114-addd-12f3bd8d8131'] = (object) array(
          'pid' => 'new-436ee688-6d0a-4114-addd-12f3bd8d8131',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'h1',
            'id' => '',
            'class' => '',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '436ee688-6d0a-4114-addd-12f3bd8d8131',
        ); /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-61664bae-1939-49e7-a25e-f958bf7a99f6']->configuration['label'] = 'above'; /* WAS: 'title' */
    $data['node:oa_wiki_page:default']->display->content['new-61664bae-1939-49e7-a25e-f958bf7a99f6']->panel = 'contentmain'; /* WAS: 'sidebar' */
    $data['node:oa_wiki_page:default']->display->content['new-61664bae-1939-49e7-a25e-f958bf7a99f6']->position = 3; /* WAS: 2 */
    $data['node:oa_wiki_page:default']->display->content['new-7680596e-9c34-431d-9d73-701c4d44c350'] = (object) array(
          'pid' => 'new-7680596e-9c34-431d-9d73-701c4d44c350',
          'panel' => 'sidebar',
          'type' => 'entity_field',
          'subtype' => 'node:field_category',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'taxonomy_term_reference_plain',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '7680596e-9c34-431d-9d73-701c4d44c350',
        ); /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-7746f122-1e4b-445f-8cf4-d15ef627d71f']->position = 2; /* WAS: 0 */
    $data['node:oa_wiki_page:default']->display->content['new-7ddbd76b-3d46-436a-b91b-5078220845a8']->configuration['override_title'] = 1; /* WAS: 0 */
    $data['node:oa_wiki_page:default']->display->content['new-7ddbd76b-3d46-436a-b91b-5078220845a8']->configuration['override_title_text'] = 'Security Level'; /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-7ddbd76b-3d46-436a-b91b-5078220845a8']->position = 2; /* WAS: 0 */
    $data['node:oa_wiki_page:default']->display->content['new-7ddbd76b-3d46-436a-b91b-5078220845a8']->style['settings']['secondary_options'] = 'panel-primary'; /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-7ddbd76b-3d46-436a-b91b-5078220845a8']->style['style'] = 'secondary'; /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-eac5d508-0b43-4e80-ac21-cb302bdcb050'] = (object) array(
          'pid' => 'new-eac5d508-0b43-4e80-ac21-cb302bdcb050',
          'panel' => 'sidebar',
          'type' => 'entity_field',
          'subtype' => 'node:og_group_ref',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'entityreference_label',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'link' => 1,
            ),
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'eac5d508-0b43-4e80-ac21-cb302bdcb050',
        ); /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-ef8dc734-ed19-4641-be3f-38031e611432'] = (object) array(
          'pid' => 'new-ef8dc734-ed19-4641-be3f-38031e611432',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_published_date',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'date_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'format_type' => 'panopoly_day',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
              'show_repeat_rule' => 'show',
            ),
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'style' => 'default',
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'ef8dc734-ed19-4641-be3f-38031e611432',
        ); /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][1] = 'new-61664bae-1939-49e7-a25e-f958bf7a99f6'; /* WAS: 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][2] = 'new-436ee688-6d0a-4114-addd-12f3bd8d8131'; /* WAS: 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][3] = 'new-ef8dc734-ed19-4641-be3f-38031e611432'; /* WAS: 'new-fd50a4cf-8298-4584-8504-b21e0e215e78' */
    $data['node:oa_wiki_page:default']->display->panels['sidebar'][1] = 'new-7680596e-9c34-431d-9d73-701c4d44c350'; /* WAS: 'new-05a2ca63-14bd-45a1-bab5-147952670034' */
    $data['node:oa_wiki_page:default']->display->panels['sidebar'][2] = 'new-eac5d508-0b43-4e80-ac21-cb302bdcb050'; /* WAS: 'new-61664bae-1939-49e7-a25e-f958bf7a99f6' */
    unset($data['node:oa_wiki_page:default']->display->content['new-05a2ca63-14bd-45a1-bab5-147952670034']);
    unset($data['node:oa_wiki_page:default']->display->content['new-32c308fc-ae57-43df-a4fa-8667a747ea6f']);
    unset($data['node:oa_wiki_page:default']->display->content['new-726f799f-b273-4c70-bb8e-8fa078660e60']);
    unset($data['node:oa_wiki_page:default']->display->content['new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d']);
    unset($data['node:oa_wiki_page:default']->display->content['new-e46086d2-3bda-405b-b9b1-6d44d79ea78e']);
    unset($data['node:oa_wiki_page:default']->display->content['new-fd50a4cf-8298-4584-8504-b21e0e215e78']);
    unset($data['node:oa_wiki_page:default']->display->panels['contentmain'][4]);
    unset($data['node:oa_wiki_page:default']->display->panels['sidebar'][3]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function iasc_document_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__oa_wiki_page'])) {
    $data['field_bundle_settings_node__oa_wiki_page']->value['extra_fields']['form']['flag'] = array(
      'weight' => 12,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__oa_wiki_page']->value['view_modes']['bio_full'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__oa_wiki_page']->value['view_modes']['bio_long'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__oa_wiki_page']->value['view_modes']['bio_short'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['node_submitted_oa_wiki_page'])) {
    $data['node_submitted_oa_wiki_page']->value = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function iasc_document_image_default_styles() {
  $styles = array();

  // Exported image style: featured_product_thumbnail.
  $styles['featured_product_thumbnail'] = array(
    'label' => 'Featured Product Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 122,
          'height' => 185,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
