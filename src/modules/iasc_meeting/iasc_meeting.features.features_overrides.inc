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

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_event-body.description"] = 'Please enter the public information about the meeting. <strong>Please note:</strong> This information will be made publicly available. Use the <em>Private Details</em> field to contain information that should remain private.';
  $overrides["field_instance.node-oa_event-body.label"] = 'Public Information';


  // Exported overrides for: node
  $overrides["node.oa_event.description"] = 'Create a Meeting to hold information about the next meeting event and to reference Agenda and the Meeting Notes Documents.';
  $overrides["node.oa_event.name"] = 'Meeting';

 return $overrides;
}
