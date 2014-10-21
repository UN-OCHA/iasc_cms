<?php
/**
 * @file
 * iasc_meeting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_meeting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function iasc_meeting_field_default_field_bases_alter(&$data) {
  if (isset($data['field_oa_address'])) {
    unset($data['field_oa_address']);
  }
  if (isset($data['field_oa_geo_location'])) {
    unset($data['field_oa_geo_location']);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function iasc_meeting_field_group_info_alter(&$data) {
  if (isset($data['group_oa_access|node|oa_event|form'])) {
    $data['group_oa_access|node|oa_event|form']->data['children'][0] = 'oa_other_spaces_ref'; /* WAS: 'oa_section_ref' */
    $data['group_oa_access|node|oa_event|form']->data['children'][1] = 'oa_section_ref'; /* WAS: 'og_group_ref' */
    $data['group_oa_access|node|oa_event|form']->data['children'][2] = 'og_group_ref'; /* WAS: 'oa_other_spaces_ref' */
    $data['group_oa_access|node|oa_event|form']->data['weight'] = 8; /* WAS: 7 */
  }
  if (isset($data['group_oa_event_location|node|oa_event|form'])) {
    $data['group_oa_event_location|node|oa_event|form']->data['weight'] = 4; /* WAS: 5 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_meeting_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_event-body'])) {
    $data['node-oa_event-body']['description'] = 'Please enter the public information about the meeting. <strong>Please note:</strong> This information will be made publicly available. Use the <em>Private Details</em> field to contain information that should remain private.'; /* WAS: 'Describe the Event' */
    $data['node-oa_event-body']['label'] = 'Public Information'; /* WAS: 'Description' */
  }
  if (isset($data['node-oa_event-field_oa_address'])) {
    unset($data['node-oa_event-field_oa_address']);
  }
  if (isset($data['node-oa_event-field_oa_geo_location'])) {
    unset($data['node-oa_event-field_oa_geo_location']);
  }
  if (isset($data['node-oa_event-field_oa_media'])) {
    unset($data['node-oa_event-field_oa_media']);
  }
  if (isset($data['node-oa_event-og_vocabulary'])) {
    $data['node-oa_event-og_vocabulary']['widget']['weight'] = 14; /* WAS: 9 */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function iasc_meeting_node_info_alter(&$data) {
  if (isset($data['oa_event'])) {
    $data['oa_event']['description'] = 'Create a Meeting to hold information about the next meeting event and to reference Agenda and the Meeting Notes Documents.'; /* WAS: 'An Open Atrium Event' */
    $data['oa_event']['name'] = 'Meeting'; /* WAS: 'Event' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function iasc_meeting_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context_7'])) {
    $data['node_edit_panel_context_7']->conf['display']->content['new-457a0b07-9259-4092-a16e-f542822ee2af'] = (object) array(
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
          'position' => 0,
          'locks' => array(),
          'uuid' => '457a0b07-9259-4092-a16e-f542822ee2af',
        ); /* WAS: '' */
    $data['node_edit_panel_context_7']->conf['display']->content['new-73af3f62-dd48-400c-bfff-26be3ede3b36']->position = 2; /* WAS: 0 */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][2] = 'new-c1b47a87-02a0-4882-a02f-5dd40ec016bb'; /* WAS: 'new-30f4398c-9f13-4195-b392-3f34ab0ddcee' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][3] = 'new-84b3bfce-f79b-4397-8b67-d97d1b61347c'; /* WAS: 'new-c1b47a87-02a0-4882-a02f-5dd40ec016bb' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][4] = 'new-020f676b-0f7d-4a37-93e2-44aa23df3980'; /* WAS: 'new-84b3bfce-f79b-4397-8b67-d97d1b61347c' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][5] = 'new-0b869cc5-d419-48ed-bcd1-4e6ec0d15a34'; /* WAS: 'new-020f676b-0f7d-4a37-93e2-44aa23df3980' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][6] = 'new-68f32ccd-0cec-45db-9ecd-112683c079ae'; /* WAS: 'new-0b869cc5-d419-48ed-bcd1-4e6ec0d15a34' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][7] = 'new-457a0b07-9259-4092-a16e-f542822ee2af'; /* WAS: 'new-68f32ccd-0cec-45db-9ecd-112683c079ae' */
    unset($data['node_edit_panel_context_7']->conf['display']->content['new-30f4398c-9f13-4195-b392-3f34ab0ddcee']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_meeting_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_event:default'])) {
    $data['node:oa_event:default']->display->content['new-19fe4e19-0d90-4acf-9c80-e1ffdf773880'] = (object) array(
          'pid' => 'new-19fe4e19-0d90-4acf-9c80-e1ffdf773880',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_meeting_agendas',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
            'formatter' => 'entityreference_label',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => 0,
            'formatter_settings' => array(
              'link' => 1,
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
          'uuid' => '19fe4e19-0d90-4acf-9c80-e1ffdf773880',
        ); /* WAS: '' */
    $data['node:oa_event:default']->display->content['new-213e8d65-ffde-47b2-bad5-b54b3f97dcfd'] = (object) array(
          'pid' => 'new-213e8d65-ffde-47b2-bad5-b54b3f97dcfd',
          'panel' => 'sidebar',
          'type' => 'entity_field',
          'subtype' => 'node:field_meeting_notes',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
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
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '213e8d65-ffde-47b2-bad5-b54b3f97dcfd',
        ); /* WAS: '' */
    $data['node:oa_event:default']->display->content['new-2832cb36-53a3-484e-bbf0-05b7084ea8f4'] = (object) array(
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
          'position' => 5,
          'locks' => array(),
          'uuid' => '2832cb36-53a3-484e-bbf0-05b7084ea8f4',
        ); /* WAS: '' */
    $data['node:oa_event:default']->display->content['new-554e3ff8-5ae2-47d4-944e-53903613b9f5'] = (object) array(
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
          'position' => 1,
          'locks' => array(),
          'uuid' => '554e3ff8-5ae2-47d4-944e-53903613b9f5',
        ); /* WAS: '' */
    $data['node:oa_event:default']->display->content['new-64975a0b-8b8d-4816-8d78-0a066a557a04'] = (object) array(
          'pid' => 'new-64975a0b-8b8d-4816-8d78-0a066a557a04',
          'panel' => 'sidebar',
          'type' => 'entity_field',
          'subtype' => 'node:field_contact',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
            'formatter' => 'entityreference_label',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => 0,
            'formatter_settings' => array(
              'view_mode' => 'teaser',
              'links' => 1,
              'link' => 0,
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
          'position' => 2,
          'locks' => array(),
          'uuid' => '64975a0b-8b8d-4816-8d78-0a066a557a04',
        ); /* WAS: '' */
    $data['node:oa_event:default']->display->content['new-ba879f23-61fc-4869-a081-d6663e9d1523'] = (object) array(
          'pid' => 'new-ba879f23-61fc-4869-a081-d6663e9d1523',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_host',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
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
          'position' => 2,
          'locks' => array(),
          'uuid' => 'ba879f23-61fc-4869-a081-d6663e9d1523',
        ); /* WAS: '' */
    $data['node:oa_event:default']->display->content['new-cf81af22-ac8b-4147-8462-a5fce1b76471']->position = 4; /* WAS: 2 */
    $data['node:oa_event:default']->display->panels['contentmain'][1] = 'new-19fe4e19-0d90-4acf-9c80-e1ffdf773880'; /* WAS: '' */
    $data['node:oa_event:default']->display->panels['contentmain'][2] = 'new-2832cb36-53a3-484e-bbf0-05b7084ea8f4'; /* WAS: '' */
    $data['node:oa_event:default']->display->panels['contentmain'][3] = 'new-554e3ff8-5ae2-47d4-944e-53903613b9f5'; /* WAS: '' */
    $data['node:oa_event:default']->display->panels['contentmain'][4] = 'new-ba879f23-61fc-4869-a081-d6663e9d1523'; /* WAS: '' */
    $data['node:oa_event:default']->display->panels['sidebar'][3] = 'new-213e8d65-ffde-47b2-bad5-b54b3f97dcfd'; /* WAS: '' */
    $data['node:oa_event:default']->display->panels['sidebar'][4] = 'new-64975a0b-8b8d-4816-8d78-0a066a557a04'; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function iasc_meeting_views_default_views_alter(&$data) {
  if (isset($data['oa_event_detail'])) {
    $data['oa_event_detail']->display['default']->display_options['fields']['field_time_zone'] = array(
      'id' => 'field_time_zone',
      'table' => 'field_data_field_time_zone',
      'field' => 'field_time_zone',
      'element_type' => 0,
      'element_label_type' => 0,
      'element_default_classes' => FALSE,
    ); /* WAS: '' */
    unset($data['oa_event_detail']->display['default']->display_options['fields']['term_node_tid']);
  }
}
