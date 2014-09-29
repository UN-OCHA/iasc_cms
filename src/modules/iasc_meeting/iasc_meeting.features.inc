<?php
/**
 * @file
 * iasc_meeting.features.inc
 */

/**
 * Implements hook_views_api().
 */
function iasc_meeting_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_meeting_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_event-body'])) {
    $data['node-oa_event-body']['description'] = 'Please enter the public information about the meeting. <strong>Please note:</strong> This information will be made publicly available. Use the <em>Private Details</em> field to contain information that should remain private.'; /* WAS: 'Describe the Event' */
    $data['node-oa_event-body']['label'] = 'Public Information'; /* WAS: 'Description' */
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