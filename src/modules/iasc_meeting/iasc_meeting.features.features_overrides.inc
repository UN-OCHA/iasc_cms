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
  $overrides["field_instance.node-oa_event-field_oa_address.comment_alter"] = 0;
  $overrides["field_instance.node-oa_event-field_oa_address.description"] = '<p>To add a physical location for the meeting, please enter the address. A map widget will automatically populate with the correct coordinates when you save the node. For example:<br />
      1600 Pennsylvania Avenue, NW<br />
      Washington, DC 20500</p>
      <p>If you need to add additional information such as a virtual location for the meeting (meeting call/dial-in information), please insert a break after your physical address and enter your additional details</p>';
  $overrides["field_instance.node-oa_event-field_oa_address.widget|weight"] = 7;

  // Exported overrides for: node
  $overrides["node.oa_event.description"] = 'Create a Meeting to hold information about the next meeting event and to reference Agenda and the Meeting Notes Documents.';
  $overrides["node.oa_event.name"] = 'Meeting';

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|content|new-0b869cc5-d419-48ed-bcd1-4e6ec0d15a34|access|plugins"] = array(
    0 => array(
      'name' => 'perm',
      'settings' => array(
        'perm' => 'administer content types',
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  );
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
      'position' => 0,
      'locks' => array(),
      'uuid' => '457a0b07-9259-4092-a16e-f542822ee2af',
    );
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|content|new-73af3f62-dd48-400c-bfff-26be3ede3b36|position"] = 2;
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|2"] = 'new-c1b47a87-02a0-4882-a02f-5dd40ec016bb';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|3"] = 'new-84b3bfce-f79b-4397-8b67-d97d1b61347c';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|4"] = 'new-020f676b-0f7d-4a37-93e2-44aa23df3980';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|5"] = 'new-0b869cc5-d419-48ed-bcd1-4e6ec0d15a34';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|6"] = 'new-68f32ccd-0cec-45db-9ecd-112683c079ae';
  $overrides["page_manager_handlers.node_edit_panel_context_7.conf|display|panels|sidebar|7"] = 'new-457a0b07-9259-4092-a16e-f542822ee2af';

 return $overrides;
}
