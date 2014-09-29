<?php
/**
 * @file
 * iasc_event.features.inc
 */

/**
 * Implements hook_views_api().
 */
function iasc_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_command_button().
 */
function iasc_event_default_command_button() {
 $items = array();
 $items['iasc_event'] = entity_import('command_button', '{
   "bundle" : "node_add",
   "name" : "iasc_event",
   "title" : "Create Meeting",
   "created" : "1411928557",
   "changed" : "1411951353",
   "language" : "und",
   "field_command_link" : { "und" : [
       {
         "url" : "node\\/add\\/oa-event",
         "title" : "Create Meeting",
         "attributes" : []
       }
     ]
   }
 }');
 return $items;
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_event_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_event-body'])) {
    $data['node-oa_event-body']['description'] = 'Please enter the public information about the meeting. <strong>Please note:</strong> This information will be made publicly available. Use the <em>Private Details</em> field to contain information that should remain private.'; /* WAS: 'Describe the Event' */
    $data['node-oa_event-body']['label'] = 'Public Information'; /* WAS: 'Description' */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function iasc_event_node_info_alter(&$data) {
  if (isset($data['oa_event'])) {
    $data['oa_event']['description'] = 'Create a Meeting to hold information about the next meeting event and to reference Agenda and the Meeting Notes Documents.'; /* WAS: 'An Open Atrium Event' */
    $data['oa_event']['name'] = 'Meeting'; /* WAS: 'Event' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function iasc_event_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context_7'])) {
    $data['node_edit_panel_context_7']->conf['display']->content['new-08f897a0-7ee5-4c24-856e-e5d6e0aa8bb3']->position = 2; /* WAS: 1 */
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
    $data['node_edit_panel_context_7']->conf['display']->content['new-73af3f62-dd48-400c-bfff-26be3ede3b36']->position = 1; /* WAS: 0 */
    $data['node_edit_panel_context_7']->conf['display']->content['new-f7a163dd-9aed-4cbd-8b32-ff66cbce798d'] = (object) array(
      'pid' => 'new-f7a163dd-9aed-4cbd-8b32-ff66cbce798d',
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
      'uuid' => 'f7a163dd-9aed-4cbd-8b32-ff66cbce798d',
    ); /* WAS: '' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][0] = 'new-f7a163dd-9aed-4cbd-8b32-ff66cbce798d'; /* WAS: 'new-73af3f62-dd48-400c-bfff-26be3ede3b36' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][1] = 'new-73af3f62-dd48-400c-bfff-26be3ede3b36'; /* WAS: 'new-08f897a0-7ee5-4c24-856e-e5d6e0aa8bb3' */
    $data['node_edit_panel_context_7']->conf['display']->panels['sidebar'][2] = 'new-08f897a0-7ee5-4c24-856e-e5d6e0aa8bb3'; /* WAS: 'new-30f4398c-9f13-4195-b392-3f34ab0ddcee' */
    unset($data['node_edit_panel_context_7']->conf['display']->content['new-30f4398c-9f13-4195-b392-3f34ab0ddcee']);
  }
}
