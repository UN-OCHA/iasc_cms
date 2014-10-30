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
  $overrides["field_instance.node-oa_wiki_page-body.display|link_only"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.display|link_only"] = array(
    'label' => 'hidden',
    'module' => 'file_entity',
    'settings' => array(
      'text' => 'Download [file:name]',
    ),
    'type' => 'file_download_link',
    'weight' => 0,
  );
  $overrides["field_instance.node-oa_wiki_page-oa_section_ref.display|link_only"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field_instance.node-oa_wiki_page-og_group_ref.display|link_only"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|link_only"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 5,
  );

  // Exported overrides for: node
  $overrides["node.oa_wiki_page.description"] = 'A Document or Product page.';
  $overrides["node.oa_wiki_page.name"] = 'Document/Product';

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
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|5"] = 'new-250cd2f8-caf7-437c-9177-3babe6738d57';
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|panels|sidebar|6"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|extra_fields|form|path|weight"] = 1;
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|bio_full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|bio_long"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|bio_short"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|link_only"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.node_submitted_oa_wiki_page.value"] = 0;

 return $overrides;
}
