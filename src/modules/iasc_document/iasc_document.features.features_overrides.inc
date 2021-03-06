<?php
/**
 * @file
 * iasc_document.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_document_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_wiki_page-body.comment_alter"] = 0;
  $overrides["field_instance.node-oa_wiki_page-body.description"] = 'Enter a description of the product.';
  $overrides["field_instance.node-oa_wiki_page-body.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-body.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-body.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-body.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 11,
  );
  $overrides["field_instance.node-oa_wiki_page-body.display|teaser|weight"] = 6;
  $overrides["field_instance.node-oa_wiki_page-body.label"] = 'Description';
  $overrides["field_instance.node-oa_wiki_page-body.widget|weight"] = 5;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.comment_alter"] = 0;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.display|link_to_document"] = array(
    'label' => 'hidden',
    'module' => 'file_entity',
    'settings' => array(
      'text' => '[file:name]',
    ),
    'type' => 'file_download_link',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.display|teaser|weight"] = 11;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.label"] = 'File(s)';
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.settings|file_extensions"] = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm zip tgz gz key dotx';
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|browser_plugins|youtube"] = 0;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_crop_info"] = 1;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_default_crop_area"] = 1;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_enable"] = 0;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_inline_crop"] = 0;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_instant_preview"] = 1;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_keyboard"] = 1;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_maximize_default_crop_area"] = 0;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|manualcrop_thumblist"] = 0;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|settings|progress_indicator"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|weight"] = 8;
  $overrides["field_instance.node-oa_wiki_page-field_oa_wiki_page_no_redirect.default_value|0|value"] = 1;
  $overrides["field_instance.node-oa_wiki_page-field_oa_wiki_page_no_redirect.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_wiki_page_no_redirect.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_wiki_page_no_redirect.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_wiki_page_no_redirect.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_other_spaces_ref.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_other_spaces_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_other_spaces_ref.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_other_spaces_ref.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.comment_alter"] = 0;
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|default|weight"] = 2;
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 8,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|teaser|weight"] = 10;
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.options_limit_fields|oa_section_ref"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.comment_alter"] = 0;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|default|weight"] = 1;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 9,
  );
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|teaser|label"] = 'inline';
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|teaser|module"] = 'entityreference';
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|teaser|settings|link"] = 1;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|teaser|type"] = 'entityreference_label';
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|teaser|weight"] = 4;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.label"] = 'Authoring Bodies';
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.options_limit"] = 0;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.options_limit_empty_behaviour"] = 0;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.options_limit_fields"] = array(
    'body' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.required"] = 0;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.settings|behaviors|og_widget|access_override"] = 0;
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.widget|active"] = 0;
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 10,
  );
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|teaser|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|teaser|settings|concatenate"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|teaser|type"] = 'hidden';
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|teaser|weight"] = 8;
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.widget|weight"] = 9;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8|position"] = 2;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-250cd2f8-caf7-437c-9177-3babe6738d57|position"] = 5;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-316932d4-d342-45ef-8ddd-3aee5f75adc2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-3e512c5d-c078-4846-80be-8af3e1542958|position"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-9393082c-61cd-4cc5-801f-bfe809fcbd43|access|plugins"] = array(
    0 => array(
      'name' => 'perm',
      'settings' => array(
        'perm' => 'administer content types',
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  );
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-9393082c-61cd-4cc5-801f-bfe809fcbd43|position"] = 4;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-ff7df286-18fd-4ab0-bd53-1102821bc86f|position"] = 3;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|1"] = 'new-3e512c5d-c078-4846-80be-8af3e1542958';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|2"] = 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|3"] = 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|4"] = 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|5"] = 'new-82008dc7-eac3-4985-92d9-0cc6e48cc729';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|6"] = 'new-250cd2f8-caf7-437c-9177-3babe6738d57';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|7"]["DELETED"] = TRUE;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-05a2ca63-14bd-45a1-bab5-147952670034"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-32c308fc-ae57-43df-a4fa-8667a747ea6f"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-436ee688-6d0a-4114-addd-12f3bd8d8131"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-61664bae-1939-49e7-a25e-f958bf7a99f6|configuration|formatter"] = 'file_default';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-61664bae-1939-49e7-a25e-f958bf7a99f6|configuration|formatter_settings|text"] = '[file:name]';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-61664bae-1939-49e7-a25e-f958bf7a99f6|configuration|label"] = 'above';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-61664bae-1939-49e7-a25e-f958bf7a99f6|panel"] = 'contentmain';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-61664bae-1939-49e7-a25e-f958bf7a99f6|position"] = 4;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-726f799f-b273-4c70-bb8e-8fa078660e60"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-75a6ef87-6704-432f-90cf-62f15ce2ec6c|position"] = 1;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7680596e-9c34-431d-9d73-701c4d44c350"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|formatter_settings|collapseTimer"] = '';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|formatter_settings|expandPrefix"] = '...';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|formatter_settings|expandText"] = 'More';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|formatter_settings|slicePoint"] = 50;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|formatter_settings|userCollapsePrefix"] = '';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|formatter_settings|userCollapseText"] = 'Less';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|override_title_heading"] = 'h2';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|position"] = 3;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7ddbd76b-3d46-436a-b91b-5078220845a8|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7ddbd76b-3d46-436a-b91b-5078220845a8|configuration|override_title_text"] = 'Security Level';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7ddbd76b-3d46-436a-b91b-5078220845a8|position"] = 2;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7ddbd76b-3d46-436a-b91b-5078220845a8|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7ddbd76b-3d46-436a-b91b-5078220845a8|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-e46086d2-3bda-405b-b9b1-6d44d79ea78e"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-eac5d508-0b43-4e80-ac21-cb302bdcb050"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-ef8dc734-ed19-4641-be3f-38031e611432"] = (object) array(
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
      'position' => 2,
      'locks' => array(),
      'uuid' => 'ef8dc734-ed19-4641-be3f-38031e611432',
    );
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-fd50a4cf-8298-4584-8504-b21e0e215e78"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|0"] = 'new-436ee688-6d0a-4114-addd-12f3bd8d8131';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|1"] = 'new-75a6ef87-6704-432f-90cf-62f15ce2ec6c';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|2"] = 'new-ef8dc734-ed19-4641-be3f-38031e611432';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|3"] = 'new-7746f122-1e4b-445f-8cf4-d15ef627d71f';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|4"] = 'new-61664bae-1939-49e7-a25e-f958bf7a99f6';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|sidebar|0"] = 'new-7680596e-9c34-431d-9d73-701c4d44c350';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|sidebar|1"] = 'new-eac5d508-0b43-4e80-ac21-cb302bdcb050';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|sidebar|2"] = 'new-7ddbd76b-3d46-436a-b91b-5078220845a8';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|sidebar|3"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.dhtml_menu_settings.value|filter|list|menu-iasc-body-categories"] = 'menu-iasc-body-categories';
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|extra_fields|form|flag"] = array(
    'weight' => 12,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|bio_full"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|bio_long"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|bio_short"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.node_submitted_oa_wiki_page.value"] = 0;
  $overrides["variable.panelizer_defaults_node_oa_wiki_page.value|view modes|teaser|default"] = 1;
  $overrides["variable.panelizer_defaults_node_oa_wiki_page.value|view modes|teaser|status"] = 1;

 return $overrides;
}
