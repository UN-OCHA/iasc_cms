<?php
/**
 * @file
 * iasc_meeting.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_meeting_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_oa_address.field_oa_address"]["DELETED"] = TRUE;
  $overrides["field_base.field_oa_geo_location.field_oa_geo_location"]["DELETED"] = TRUE;

  // Exported overrides for: field_group
  $overrides["field_group.group_oa_access|node|oa_event|form.data|children|0"] = 'oa_other_spaces_ref';
  $overrides["field_group.group_oa_access|node|oa_event|form.data|children|1"] = 'oa_section_ref';
  $overrides["field_group.group_oa_access|node|oa_event|form.data|children|2"] = 'og_group_ref';
  $overrides["field_group.group_oa_access|node|oa_event|form.data|weight"] = 8;
  $overrides["field_group.group_oa_event_location|node|oa_event|form.data|weight"] = 4;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_event-body.description"] = 'Please enter the public information about the meeting. <strong>Please note:</strong> This information will be made publicly available. Use the <em>Private Details</em> field to contain information that should remain private.';
  $overrides["field_instance.node-oa_event-body.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-body.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-body.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-body.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-body.display|teaser|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_event-body.display|teaser|settings|trim_length"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_event-body.display|teaser|type"] = 'hidden';
  $overrides["field_instance.node-oa_event-body.display|teaser|weight"] = 9;
  $overrides["field_instance.node-oa_event-body.label"] = 'Public Information';
  $overrides["field_instance.node-oa_event-field_oa_address.node-oa_event-field_oa_address"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_event-field_oa_date.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-field_oa_date.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-field_oa_date.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-field_oa_date.display|default|module"] = 'iasc_meeting';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|module"] = 'date';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|settings|format_type"] = 'long';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|settings|fromto"] = 'both';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|settings|multiple_from"] = '';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|settings|multiple_number"] = '';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|settings|multiple_to"] = '';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|settings|show_repeat_rule"] = 'show';
  $overrides["field_instance.node-oa_event-field_oa_date.display|teaser|type"] = 'date_default';
  $overrides["field_instance.node-oa_event-field_oa_geo_location.node-oa_event-field_oa_geo_location"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_event-field_oa_media.node-oa_event-field_oa_media"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_event-oa_other_spaces_ref.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_other_spaces_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_other_spaces_ref.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_other_spaces_ref.display|teaser|weight"] = 7;
  $overrides["field_instance.node-oa_event-oa_section_ref.comment_alter"] = 0;
  $overrides["field_instance.node-oa_event-oa_section_ref.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_section_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_section_ref.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_section_ref.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-oa_section_ref.display|teaser|weight"] = 16;
  $overrides["field_instance.node-oa_event-oa_section_ref.label"] = 'Section';
  $overrides["field_instance.node-oa_event-oa_section_ref.options_limit_fields|oa_section_ref"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_event-og_group_ref.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_group_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_group_ref.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_group_ref.display|link_to_document"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_group_ref.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-oa_event-og_group_ref.display|teaser|module"] = 'entityreference';
  $overrides["field_instance.node-oa_event-og_group_ref.display|teaser|settings|link"] = 1;
  $overrides["field_instance.node-oa_event-og_group_ref.display|teaser|type"] = 'entityreference_label';
  $overrides["field_instance.node-oa_event-og_group_ref.display|teaser|weight"] = 5;
  $overrides["field_instance.node-oa_event-og_group_ref.label"] = 'Authoring Bodies';
  $overrides["field_instance.node-oa_event-og_group_ref.settings|behaviors|og_widget|access_override"] = 0;
  $overrides["field_instance.node-oa_event-og_vocabulary.display|bio_full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_vocabulary.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_vocabulary.display|bio_short"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_event-og_vocabulary.display|teaser|weight"] = 6;
  $overrides["field_instance.node-oa_event-og_vocabulary.widget|weight"] = 14;

  // Exported overrides for: node
  $overrides["node.oa_event.description"] = 'Create a Meeting to hold information about the next meeting event and to reference Agenda and the Meeting Notes Documents.';
  $overrides["node.oa_event.name"] = 'Meeting';

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|content|new-08f897a0-7ee5-4c24-856e-e5d6e0aa8bb3|position"] = 2;
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|content|new-30f4398c-9f13-4195-b392-3f34ab0ddcee"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|content|new-457a0b07-9259-4092-a16e-f542822ee2af"] = (object) array(
      'pid' => 'new-457a0b07-9259-4092-a16e-f542822ee2af',
      'panel' => 'sidebar',
      'type' => 'entity_form_field',
      'subtype' => 'node:field_time_zone',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => '',
        'formatter' => '',
        'context' => 'argument_node_edit_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '457a0b07-9259-4092-a16e-f542822ee2af',
    );
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|2"] = 'new-c1b47a87-02a0-4882-a02f-5dd40ec016bb';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|3"] = 'new-84b3bfce-f79b-4397-8b67-d97d1b61347c';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|4"] = 'new-020f676b-0f7d-4a37-93e2-44aa23df3980';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|5"] = 'new-0b869cc5-d419-48ed-bcd1-4e6ec0d15a34';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|6"] = 'new-68f32ccd-0cec-45db-9ecd-112683c079ae';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|7"] = 'new-457a0b07-9259-4092-a16e-f542822ee2af';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-024f971a-f875-4063-bf25-63926a5c9092"] = (object) array(
      'pid' => 'new-024f971a-f875-4063-bf25-63926a5c9092',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_room',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(
          0 => array(
            'name' => 'role',
            'settings' => array(
              'rids' => array(
                0 => 2,
              ),
            ),
            'context' => 'logged-in-user',
            'not' => FALSE,
          ),
        ),
      ),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'text_plain',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '024f971a-f875-4063-bf25-63926a5c9092',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-19fe4e19-0d90-4acf-9c80-e1ffdf773880"] = (object) array(
      'pid' => 'new-19fe4e19-0d90-4acf-9c80-e1ffdf773880',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_meeting_agendas',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'entityreference_label',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'link' => 1,
        ),
        'context' => array(),
        'override_title' => 1,
        'override_title_text' => 'Meeting Agenda',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-success',
          'linked_list' => 'arrow',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => '19fe4e19-0d90-4acf-9c80-e1ffdf773880',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-213e8d65-ffde-47b2-bad5-b54b3f97dcfd"] = (object) array(
      'pid' => 'new-213e8d65-ffde-47b2-bad5-b54b3f97dcfd',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_meeting_notes',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'entityreference_label',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'link' => 1,
        ),
        'context' => array(),
        'override_title' => 1,
        'override_title_text' => 'Meeting Notes',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-success',
          'linked_list' => 'arrow',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 7,
      'locks' => array(),
      'uuid' => '213e8d65-ffde-47b2-bad5-b54b3f97dcfd',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-231244a5-ffbc-4013-a01e-cc85b4feeff0|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-231244a5-ffbc-4013-a01e-cc85b4feeff0|configuration|override_title_text"] = 'Security Level';
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-231244a5-ffbc-4013-a01e-cc85b4feeff0|position"] = 8;
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-231244a5-ffbc-4013-a01e-cc85b4feeff0|shown"] = FALSE;
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-231244a5-ffbc-4013-a01e-cc85b4feeff0|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-231244a5-ffbc-4013-a01e-cc85b4feeff0|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-2832cb36-53a3-484e-bbf0-05b7084ea8f4"] = (object) array(
      'pid' => 'new-2832cb36-53a3-484e-bbf0-05b7084ea8f4',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:field_agenda_items',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'above',
        'formatter' => 'field_collection_fields',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'view_mode' => 'full',
        ),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '2832cb36-53a3-484e-bbf0-05b7084ea8f4',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-29d974b8-bef0-4ff8-af8c-38b369433a5c"] = (object) array(
      'pid' => 'new-29d974b8-bef0-4ff8-af8c-38b369433a5c',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:field_referenced_docs',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'entityreference_entity_view',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'view_mode' => 'link_to_document',
          'links' => 1,
        ),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '29d974b8-bef0-4ff8-af8c-38b369433a5c',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-554e3ff8-5ae2-47d4-944e-53903613b9f5"] = (object) array(
      'pid' => 'new-554e3ff8-5ae2-47d4-944e-53903613b9f5',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:field_info_private',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(
          0 => array(
            'name' => 'role',
            'settings' => array(
              'rids' => array(
                0 => 2,
              ),
            ),
            'context' => 'logged-in-user',
            'not' => FALSE,
          ),
        ),
      ),
      'configuration' => array(
        'label' => 'above',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '554e3ff8-5ae2-47d4-944e-53903613b9f5',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-64975a0b-8b8d-4816-8d78-0a066a557a04"] = (object) array(
      'pid' => 'new-64975a0b-8b8d-4816-8d78-0a066a557a04',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_contact',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'entityreference_entity_view',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'view_mode' => 'bio_short',
          'links' => 1,
          'link' => 1,
        ),
        'context' => array(),
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
      'position' => 5,
      'locks' => array(),
      'uuid' => '64975a0b-8b8d-4816-8d78-0a066a557a04',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-677802ea-6c46-4806-9759-35191c9cf1a8"] = (object) array(
      'pid' => 'new-677802ea-6c46-4806-9759-35191c9cf1a8',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_venue',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'text_plain',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '677802ea-6c46-4806-9759-35191c9cf1a8',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-721e6db6-a312-4742-8dd2-d7d879654919"] = (object) array(
      'pid' => 'new-721e6db6-a312-4742-8dd2-d7d879654919',
      'panel' => 'sidebar',
      'type' => 'panels_mini',
      'subtype' => 'iasc_location',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-primary',
          'linked_list' => 'none',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '721e6db6-a312-4742-8dd2-d7d879654919',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-9035b3e7-28dc-478f-a595-e89dca69718a|position"] = 1;
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-9c1552e9-6b59-4811-ac8f-8278030a8f11"] = (object) array(
      'pid' => 'new-9c1552e9-6b59-4811-ac8f-8278030a8f11',
      'panel' => 'contentmain',
      'type' => 'node_body',
      'subtype' => 'node_body',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Description',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '9c1552e9-6b59-4811-ac8f-8278030a8f11',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-b556a608-6c09-4e8b-99bb-f7cee89c1756"] = (object) array(
      'pid' => 'new-b556a608-6c09-4e8b-99bb-f7cee89c1756',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_city',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'text_plain',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'b556a608-6c09-4e8b-99bb-f7cee89c1756',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-ba879f23-61fc-4869-a081-d6663e9d1523"] = (object) array(
      'pid' => 'new-ba879f23-61fc-4869-a081-d6663e9d1523',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_host',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'taxonomy_term_reference_link',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => 'ba879f23-61fc-4869-a081-d6663e9d1523',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-c84bd896-6873-41ab-89ea-5d0f2e0c2c7f"] = (object) array(
      'pid' => 'new-c84bd896-6873-41ab-89ea-5d0f2e0c2c7f',
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
      'uuid' => 'c84bd896-6873-41ab-89ea-5d0f2e0c2c7f',
    );
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-cf81af22-ac8b-4147-8462-a5fce1b76471|position"] = 9;
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-cf81af22-ac8b-4147-8462-a5fce1b76471|style|style"] = 'default';
  $overrides["panelizer_defaults.node:oa_event:default.display|content|new-e0f02a5b-dd4e-4ab9-8479-06a195d86fd0"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_event:default.display|hide_title"] = 1;
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|contentmain|0"] = 'new-c84bd896-6873-41ab-89ea-5d0f2e0c2c7f';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|contentmain|1"] = 'new-9035b3e7-28dc-478f-a595-e89dca69718a';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|contentmain|2"] = 'new-9c1552e9-6b59-4811-ac8f-8278030a8f11';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|contentmain|3"] = 'new-554e3ff8-5ae2-47d4-944e-53903613b9f5';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|contentmain|4"] = 'new-2832cb36-53a3-484e-bbf0-05b7084ea8f4';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|contentmain|5"] = 'new-29d974b8-bef0-4ff8-af8c-38b369433a5c';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|0"] = 'new-721e6db6-a312-4742-8dd2-d7d879654919';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|1"] = 'new-b556a608-6c09-4e8b-99bb-f7cee89c1756';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|2"] = 'new-677802ea-6c46-4806-9759-35191c9cf1a8';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|3"] = 'new-024f971a-f875-4063-bf25-63926a5c9092';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|4"] = 'new-ba879f23-61fc-4869-a081-d6663e9d1523';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|5"] = 'new-64975a0b-8b8d-4816-8d78-0a066a557a04';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|6"] = 'new-19fe4e19-0d90-4acf-9c80-e1ffdf773880';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|7"] = 'new-213e8d65-ffde-47b2-bad5-b54b3f97dcfd';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|8"] = 'new-231244a5-ffbc-4013-a01e-cc85b4feeff0';
  $overrides["panelizer_defaults.node:oa_event:default.display|panels|sidebar|9"] = 'new-cf81af22-ac8b-4147-8462-a5fce1b76471';

  // Exported overrides for: variable
  $overrides["variable.node_submitted_oa_event.value"] = 0;

  // Exported overrides for: views_view
  $overrides["views_view.oa_event_detail.display|default|display_options|fields|field_oa_address"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_detail.display|default|display_options|fields|field_oa_date|element_type"] = 'span';
  $overrides["views_view.oa_event_detail.display|default|display_options|fields|field_time_zone"] = array(
    'id' => 'field_time_zone',
    'table' => 'field_data_field_time_zone',
    'field' => 'field_time_zone',
    'element_type' => 0,
    'element_label_type' => 0,
    'element_default_classes' => FALSE,
  );
  $overrides["views_view.oa_event_detail.display|default|display_options|fields|term_node_tid"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|default|display_options|cache|output_lifespan"] = 3600;
  $overrides["views_view.oa_event_list.display|default|display_options|cache|output_lifespan_custom"] = 0;
  $overrides["views_view.oa_event_list.display|default|display_options|cache|results_lifespan"] = 3600;
  $overrides["views_view.oa_event_list.display|default|display_options|cache|results_lifespan_custom"] = 0;
  $overrides["views_view.oa_event_list.display|default|display_options|cache|type"] = 'time';
  $overrides["views_view.oa_event_list.display|default|display_options|empty"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'empty' => TRUE,
      'content' => 'There are no upcoming events at this time.',
      'format' => 'iasc_wysiwyg',
    ),
  );
  $overrides["views_view.oa_event_list.display|default|display_options|exposed_form|options"] = array(
    'submit_button' => 'Filter',
    'collapsed_filter' => 0,
  );
  $overrides["views_view.oa_event_list.display|default|display_options|exposed_form|type"] = 'oa_form';
  $overrides["views_view.oa_event_list.display|default|display_options|fields|field_oa_address"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|oa_calendar_month|display_options|allow|exposed_form_configure"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|oa_calendar_month|display_options|exposed_form_overrides"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|oa_events_ical|display_options|defaults|empty"] = FALSE;
  $overrides["views_view.oa_event_list.display|oa_events_upcoming_small|display_options|allow|exposed_form_configure"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|oa_events_upcoming_small|display_options|exposed_form_overrides"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|page_calendar"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:9:{s:5:"title";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:8:"Calendar";s:12:"style_plugin";s:7:"default";s:13:"style_options";a:1:{s:17:"row_class_special";b:0;}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:22:"default_field_elements";b:0;}s:6:"fields";a:6:{s:13:"field_oa_date";a:9:{s:2:"id";s:13:"field_oa_date";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:13:"field_oa_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:4:"type";s:24:"oa_events_date_formatter";s:8:"settings";a:6:{s:11:"format_type";s:4:"long";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:16:"show_repeat_rule";s:4:"hide";}s:10:"group_rows";b:0;s:12:"delta_offset";s:1:"0";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h4";s:13:"element_class";s:5:"title";s:19:"element_label_colon";b:0;}s:12:"og_group_ref";a:9:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:12:"element_type";s:6:"strong";s:19:"element_label_colon";b:0;s:20:"element_wrapper_type";s:3:"div";s:10:"hide_empty";b:1;s:8:"settings";a:1:{s:4:"link";i:0;}}s:10:"field_city";a:6:{s:2:"id";s:10:"field_city";s:5:"table";s:21:"field_data_field_city";s:5:"field";s:10:"field_city";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:20:"element_wrapper_type";s:3:"div";}s:15:"field_time_zone";a:6:{s:2:"id";s:15:"field_time_zone";s:5:"table";s:26:"field_data_field_time_zone";s:5:"field";s:15:"field_time_zone";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:15:"field_oa_date_1";a:9:{s:2:"id";s:15:"field_oa_date_1";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:13:"field_oa_date";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:37:"[field_oa_date_1] ([field_time_zone])";}s:19:"element_label_colon";b:0;s:8:"settings";a:6:{s:11:"format_type";s:13:"panopoly_time";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:16:"show_repeat_rule";s:4:"hide";}s:10:"group_rows";b:0;s:12:"delta_offset";s:1:"0";}}s:7:"filters";a:6:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:8:"oa_event";s:8:"oa_event";}s:5:"group";i:1;}s:19:"field_oa_date_value";a:10:{s:2:"id";s:19:"field_oa_date_value";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";s:7:"ui_name";s:16:"Start Date Limit";s:8:"operator";s:2:">=";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:22:"field_oa_date_value_op";s:5:"label";s:10:"Date Range";s:8:"operator";s:22:"field_oa_date_value_op";s:10:"identifier";s:19:"field_oa_date_value";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}s:9:"form_type";s:10:"date_popup";s:12:"default_date";s:23:"first day of this month";}s:21:"field_oa_date_value_1";a:9:{s:2:"id";s:21:"field_oa_date_value_1";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";s:7:"ui_name";s:14:"End Date Limit";s:8:"operator";s:2:"<=";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:4:{s:11:"operator_id";s:24:"field_oa_date_value_1_op";s:8:"operator";s:24:"field_oa_date_value_1_op";s:10:"identifier";s:21:"field_oa_date_value_1";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}s:9:"form_type";s:10:"date_popup";}s:22:"og_group_ref_target_id";a:6:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:16:"Authoring Bodies";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:4:"keys";a:5:{s:2:"id";s:4:"keys";s:5:"table";s:12:"search_index";s:5:"field";s:4:"keys";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"keys_op";s:5:"label";s:6:"Search";s:8:"operator";s:7:"keys_op";s:10:"identifier";s:4:"keys";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}}s:4:"path";s:8:"calendar";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:13:"page_calendar";s:13:"display_title";s:8:"Calendar";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}');
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|allow|exposed_form_configure"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|defaults|empty"] = FALSE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|defaults|fields"] = FALSE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|defaults|row_options"] = FALSE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|defaults|row_plugin"] = FALSE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|defaults|style_options"] = FALSE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|defaults|style_plugin"] = FALSE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|empty"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'empty' => TRUE,
      'content' => 'There are no past events at this time.',
      'format' => 'iasc_wysiwyg',
    ),
  );
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|exposed_form_overrides"]["DELETED"] = TRUE;
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|fields"] = array(
    'field_oa_date' => array(
      'id' => 'field_oa_date',
      'table' => 'field_data_field_oa_date',
      'field' => 'field_oa_date',
      'label' => '',
      'element_label_colon' => FALSE,
      'type' => 'oa_events_date_formatter',
      'settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'hide',
      ),
      'group_rows' => FALSE,
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'alter' => array(
        'word_boundary' => FALSE,
        'ellipsis' => FALSE,
      ),
      'element_type' => 'h4',
      'element_class' => 'title',
      'element_label_colon' => FALSE,
    ),
    'og_group_ref' => array(
      'id' => 'og_group_ref',
      'table' => 'og_membership',
      'field' => 'og_group_ref',
      'label' => '',
      'element_type' => 'strong',
      'element_label_colon' => FALSE,
      'hide_empty' => TRUE,
      'settings' => array(
        'link' => 0,
      ),
    ),
    'field_city' => array(
      'id' => 'field_city',
      'table' => 'field_data_field_city',
      'field' => 'field_city',
      'label' => '',
      'element_label_colon' => FALSE,
    ),
    'field_time_zone' => array(
      'id' => 'field_time_zone',
      'table' => 'field_data_field_time_zone',
      'field' => 'field_time_zone',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ),
    'field_oa_date_1' => array(
      'id' => 'field_oa_date_1',
      'table' => 'field_data_field_oa_date',
      'field' => 'field_oa_date',
      'label' => '',
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '[field_oa_date_1] ([field_time_zone])',
      ),
      'element_label_colon' => FALSE,
      'settings' => array(
        'format_type' => 'panopoly_time',
        'fromto' => 'both',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'hide',
      ),
      'group_rows' => FALSE,
    ),
  );
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|pane_category|name"] = 'IASC';
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|row_plugin"] = 'fields';
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|style_options"] = array(
    'row_class_special' => FALSE,
  );
  $overrides["views_view.oa_event_list.display|panel_pane_1|display_options|style_plugin"] = 'default';
  $overrides["views_view.oa_event_list.display|panel_pane_upcoming_meetings"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:13:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:17:"Upcoming Meetings";s:19:"display_description";s:56:"A panel pane list of upcoming events (no calendar icons)";s:12:"style_plugin";s:4:"list";s:13:"style_options";a:3:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:13:"wrapper_class";s:0:"";}s:10:"row_plugin";s:6:"fields";s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:42:"There are no upcoming events at this time.";s:6:"format";s:12:"iasc_wysiwyg";}}s:6:"fields";a:4:{s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:3:{s:4:"text";s:19:"[title] [timestamp]";s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h4";s:13:"element_class";s:5:"title";s:19:"element_label_colon";b:0;}s:15:"field_oa_date_1";a:9:{s:2:"id";s:15:"field_oa_date_1";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:13:"field_oa_date";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;s:8:"settings";a:6:{s:11:"format_type";s:4:"long";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:16:"show_repeat_rule";s:4:"hide";}s:10:"group_rows";b:0;s:12:"delta_offset";s:1:"0";}s:15:"field_time_zone";a:6:{s:2:"id";s:15:"field_time_zone";s:5:"table";s:26:"field_data_field_time_zone";s:5:"field";s:15:"field_time_zone";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:37:"[field_oa_date_1] ([field_time_zone])";}s:19:"element_label_colon";b:0;}s:12:"og_group_ref";a:8:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:12:"element_type";s:6:"strong";s:19:"element_label_colon";b:0;s:10:"hide_empty";b:1;s:8:"settings";a:1:{s:4:"link";i:0;}}}s:5:"sorts";a:1:{s:19:"field_oa_date_value";a:3:{s:2:"id";s:19:"field_oa_date_value";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";}}s:7:"filters";a:8:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:8:"oa_event";s:8:"oa_event";}s:5:"group";i:1;}s:19:"field_oa_date_value";a:10:{s:2:"id";s:19:"field_oa_date_value";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";s:7:"ui_name";s:16:"Start Date Limit";s:8:"operator";s:2:">=";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:22:"field_oa_date_value_op";s:5:"label";s:10:"Date Range";s:8:"operator";s:22:"field_oa_date_value_op";s:10:"identifier";s:19:"field_oa_date_value";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}s:9:"form_type";s:10:"date_popup";s:12:"default_date";s:23:"first day of this month";}s:20:"field_oa_date_value2";a:9:{s:2:"id";s:20:"field_oa_date_value2";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:20:"field_oa_date_value2";s:7:"ui_name";s:14:"Date End Limit";s:8:"operator";s:2:"<=";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:4:{s:11:"operator_id";s:23:"field_oa_date_value2_op";s:8:"operator";s:23:"field_oa_date_value2_op";s:10:"identifier";s:20:"field_oa_date_value2";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}s:9:"form_type";s:10:"date_popup";}s:16:"field_city_value";a:7:{s:2:"id";s:16:"field_city_value";s:5:"table";s:21:"field_data_field_city";s:5:"field";s:16:"field_city_value";s:8:"operator";s:4:"word";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:10:{s:11:"operator_id";s:19:"field_city_value_op";s:5:"label";s:4:"City";s:8:"operator";s:19:"field_city_value_op";s:10:"identifier";s:16:"field_city_value";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}s:18:"autocomplete_items";s:2:"10";s:22:"autocomplete_min_chars";s:1:"0";s:27:"autocomplete_raw_suggestion";i:1;s:25:"autocomplete_raw_dropdown";i:1;s:22:"autocomplete_dependent";i:0;}}s:22:"og_group_ref_target_id";a:6:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:16:"Authoring Bodies";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:4:"keys";a:6:{s:2:"id";s:4:"keys";s:5:"table";s:12:"search_index";s:5:"field";s:4:"keys";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"keys_op";s:5:"label";s:6:"Filter";s:8:"operator";s:7:"keys_op";s:10:"identifier";s:4:"keys";s:14:"remember_roles";a:6:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;i:5;i:0;i:6;i:0;}}}s:24:"oa_section_ref_target_id";a:5:{s:2:"id";s:24:"oa_section_ref_target_id";s:5:"table";s:25:"field_data_oa_section_ref";s:5:"field";s:24:"oa_section_ref_target_id";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:27:"oa_section_ref_target_id_op";s:5:"label";s:7:"Section";s:8:"operator";s:27:"oa_section_ref_target_id_op";s:10:"identifier";s:24:"oa_section_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}}s:13:"pane_category";a:2:{s:4:"name";s:4:"IASC";s:6:"weight";s:1:"0";}s:5:"allow";a:9:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:15:"fields_override";i:0;}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:28:"panel_pane_upcoming_meetings";s:13:"display_title";s:28:"Upcoming Meetings - No Icons";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.oa_event_list.display|panel_pane_upcoming_meetings_filterable"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:15:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:12:"exposed_form";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:17:"Upcoming Meetings";s:19:"display_description";s:79:"A panel pane list of upcoming events (icons) with an optionally exposed filter.";s:12:"exposed_form";a:2:{s:4:"type";s:7:"oa_form";s:7:"options";a:2:{s:13:"submit_button";s:6:"Filter";s:16:"collapsed_filter";i:1;}}s:12:"style_plugin";s:7:"default";s:13:"style_options";a:1:{s:17:"row_class_special";b:0;}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:10:"hide_empty";b:1;}s:6:"fields";a:6:{s:13:"field_oa_date";a:8:{s:2:"id";s:13:"field_oa_date";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:13:"field_oa_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:4:"type";s:24:"oa_events_date_formatter";s:8:"settings";a:6:{s:11:"format_type";s:4:"long";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:16:"show_repeat_rule";s:4:"show";}s:12:"delta_offset";s:1:"0";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:3:{s:4:"text";s:19:"[title] [timestamp]";s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h4";s:13:"element_class";s:5:"title";s:19:"element_label_colon";b:0;}s:12:"og_group_ref";a:8:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:12:"element_type";s:6:"strong";s:19:"element_label_colon";b:0;s:10:"hide_empty";b:1;s:8:"settings";a:1:{s:4:"link";i:0;}}s:10:"field_city";a:5:{s:2:"id";s:10:"field_city";s:5:"table";s:21:"field_data_field_city";s:5:"field";s:10:"field_city";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;}s:15:"field_time_zone";a:7:{s:2:"id";s:15:"field_time_zone";s:5:"table";s:26:"field_data_field_time_zone";s:5:"field";s:15:"field_time_zone";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:1:{s:4:"text";s:35:"[field_oa_date] ([field_time_zone])";}s:19:"element_label_colon";b:0;}s:15:"field_oa_date_1";a:8:{s:2:"id";s:15:"field_oa_date_1";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:13:"field_oa_date";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:37:"[field_oa_date_1] ([field_time_zone])";}s:19:"element_label_colon";b:0;s:8:"settings";a:6:{s:11:"format_type";s:13:"panopoly_time";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:16:"show_repeat_rule";s:4:"show";}s:12:"delta_offset";s:1:"0";}}s:5:"sorts";a:1:{s:19:"field_oa_date_value";a:3:{s:2:"id";s:19:"field_oa_date_value";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";}}s:7:"filters";a:8:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:8:"oa_event";s:8:"oa_event";}s:5:"group";i:1;}s:19:"field_oa_date_value";a:10:{s:2:"id";s:19:"field_oa_date_value";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";s:7:"ui_name";s:16:"Start Date Limit";s:8:"operator";s:2:">=";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:22:"field_oa_date_value_op";s:5:"label";s:10:"Date Range";s:8:"operator";s:22:"field_oa_date_value_op";s:10:"identifier";s:19:"field_oa_date_value";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}s:9:"form_type";s:10:"date_popup";s:12:"default_date";s:23:"first day of this month";}s:21:"field_oa_date_value_1";a:9:{s:2:"id";s:21:"field_oa_date_value_1";s:5:"table";s:24:"field_data_field_oa_date";s:5:"field";s:19:"field_oa_date_value";s:7:"ui_name";s:14:"End Date Limit";s:8:"operator";s:2:"<=";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:4:{s:11:"operator_id";s:24:"field_oa_date_value_1_op";s:8:"operator";s:24:"field_oa_date_value_1_op";s:10:"identifier";s:21:"field_oa_date_value_1";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}s:9:"form_type";s:10:"date_popup";}s:16:"field_city_value";a:7:{s:2:"id";s:16:"field_city_value";s:5:"table";s:21:"field_data_field_city";s:5:"field";s:16:"field_city_value";s:8:"operator";s:4:"word";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:10:{s:11:"operator_id";s:19:"field_city_value_op";s:5:"label";s:4:"City";s:8:"operator";s:19:"field_city_value_op";s:10:"identifier";s:16:"field_city_value";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}s:18:"autocomplete_items";s:2:"10";s:22:"autocomplete_min_chars";s:1:"0";s:27:"autocomplete_raw_suggestion";i:1;s:25:"autocomplete_raw_dropdown";i:1;s:22:"autocomplete_dependent";i:0;}}s:22:"og_group_ref_target_id";a:6:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:16:"Authoring Bodies";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:24:"oa_section_ref_target_id";a:6:{s:2:"id";s:24:"oa_section_ref_target_id";s:5:"table";s:25:"field_data_oa_section_ref";s:5:"field";s:24:"oa_section_ref_target_id";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:27:"oa_section_ref_target_id_op";s:5:"label";s:7:"Section";s:8:"operator";s:27:"oa_section_ref_target_id_op";s:10:"identifier";s:24:"oa_section_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:4:"keys";a:6:{s:2:"id";s:4:"keys";s:5:"table";s:12:"search_index";s:5:"field";s:4:"keys";s:5:"group";i:1;s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"keys_op";s:5:"label";s:6:"Filter";s:8:"operator";s:7:"keys_op";s:10:"identifier";s:4:"keys";s:14:"remember_roles";a:6:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;i:5;i:0;i:6;i:0;}}}}s:13:"pane_category";a:2:{s:4:"name";s:4:"IASC";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";i:0;s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";s:22:"exposed_form_configure";s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:6:{s:19:"field_oa_date_value";s:16:"pane_and_exposed";s:21:"field_oa_date_value_1";s:16:"pane_and_exposed";s:16:"field_city_value";s:16:"pane_and_exposed";s:22:"og_group_ref_target_id";s:0:"";s:24:"oa_section_ref_target_id";s:0:"";s:4:"keys";s:16:"pane_and_exposed";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:39:"panel_pane_upcoming_meetings_filterable";s:13:"display_title";s:25:"Upcoming Meetings (Icons)";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');

 return $overrides;
}
