<?php
/**
 * @file
 * iasc_meeting.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_meeting_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_event-body'])) {
    $data['node-oa_event-body']['description'] = 'Please enter the public information about the meeting. <strong>Please note:</strong> This information will be made publicly available. Use the <em>Private Details</em> field to contain information that should remain private.'; /* WAS: 'Describe the Event' */
    $data['node-oa_event-body']['label'] = 'Public Information'; /* WAS: 'Description' */
  }
  if (isset($data['node-oa_event-field_oa_address'])) {
    $data['node-oa_event-field_oa_address']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_event-field_oa_address']['description'] = '<p>To add a physical location for the meeting, please enter the address. A map widget will automatically populate with the correct coordinates when you save the node. For example:<br />
            1600 Pennsylvania Avenue, NW<br />
            Washington, DC 20500</p>
            <p>If you need to add additional information such as a virtual location for the meeting (meeting call/dial-in information), please insert a break after your physical address and enter your additional details</p>'; /* WAS: 'Location Address and/or link, i.e.,
    1600 Pennsylvania Avenue, NW
    Washington, DC 20500
    http://www.whitehouse.gov/' */
    $data['node-oa_event-field_oa_address']['widget']['weight'] = 7; /* WAS: 3 */
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
    $data['node_edit_panel_context_7']->conf['display']->content['new-0b869cc5-d419-48ed-bcd1-4e6ec0d15a34']->access['plugins'] = array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer content types',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ); /* WAS: '' */
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
