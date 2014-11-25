<?php
/**
 * @file
 * iasc_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: apachesolr_environment
  $overrides["apachesolr_environment.solr.conf|apachesolr_direct_commit"] = 0;
  $overrides["apachesolr_environment.solr.conf|apachesolr_read_only"] = 0;
  $overrides["apachesolr_environment.solr.conf|apachesolr_soft_commit"] = 0;
  $overrides["apachesolr_environment.solr.index_bundles|file"] = array(
    0 => 'audio',
    1 => 'document',
    2 => 'image',
    3 => 'video',
  );
  $overrides["apachesolr_environment.solr.index_bundles|node|0"] = 'announcement';
  $overrides["apachesolr_environment.solr.index_bundles|node|10"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|3"] = 'oa_space';
  $overrides["apachesolr_environment.solr.index_bundles|node|4"] = 'oa_wiki_page';
  $overrides["apachesolr_environment.solr.index_bundles|node|5"] = 'panopoly_page';
  $overrides["apachesolr_environment.solr.index_bundles|node|6"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|7"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|8"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|9"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|user"]["DELETED"] = TRUE;

  // Exported overrides for: facetapi
  $overrides["facetapi.apachesolr@solr:block:created.enabled"] = FALSE;
  $overrides["facetapi.apachesolr@solr:block:sm_oa_section_ref.enabled"] = FALSE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_discussion_post-og_group_ref.display|bio_long"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-6724ddeb-08bf-4792-bcd9-6bb074e1b26d"] = (object) array(
      'pid' => 'new-6724ddeb-08bf-4792-bcd9-6bb074e1b26d',
      'panel' => 'sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-Twu0IoflQ0tCVFvfi2LFrGPGO28QTKg2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 1,
        'override_title_text' => 'Meeting Date',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '6724ddeb-08bf-4792-bcd9-6bb074e1b26d',
    );
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-693a6a4c-b829-490a-b985-ef3b1452bc62|configuration|context"] = 'argument_string_1';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-693a6a4c-b829-490a-b985-ef3b1452bc62|configuration|override_title_text"] = 'Authoring Body';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-693a6a4c-b829-490a-b985-ef3b1452bc62|position"] = 1;
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-7ed46a82-19a3-409e-b5bb-9b4036327874"] = (object) array(
      'pid' => 'new-7ed46a82-19a3-409e-b5bb-9b4036327874',
      'panel' => 'sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-4tlFBXQsusEWPvDYbaIuku11CSsa9PaJ',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 1,
        'override_title_text' => 'Published Date',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '7ed46a82-19a3-409e-b5bb-9b4036327874',
    );
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea"] = (object) array(
      'pid' => 'new-8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea',
      'panel' => 'sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 1,
        'override_title_text' => 'Product Category',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea',
    );
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-ac601488-2d1a-4098-b231-f9acd96ec8fc"] = (object) array(
      'pid' => 'new-ac601488-2d1a-4098-b231-f9acd96ec8fc',
      'panel' => 'sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-CoAiUJ4oF1m1W4ZI3N00oQL1yBDDz2zJ',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 1,
        'override_title_text' => 'Meeting Host',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => 'ac601488-2d1a-4098-b231-f9acd96ec8fc',
    );
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-d20db8aa-7a1c-4920-be9d-ebcdaa896b4b"] = (object) array(
      'pid' => 'new-d20db8aa-7a1c-4920-be9d-ebcdaa896b4b',
      'panel' => 'sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-rdivo01SKN5F1E4FueqZJl3JRX19bxQ4',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 1,
        'override_title_text' => 'Document Type',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'd20db8aa-7a1c-4920-be9d-ebcdaa896b4b',
    );
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-eed5638b-f350-4b54-b718-1ad25538945c"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|content|new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|panels|sidebar|1"] = 'new-693a6a4c-b829-490a-b985-ef3b1452bc62';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|panels|sidebar|2"] = 'new-6724ddeb-08bf-4792-bcd9-6bb074e1b26d';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|panels|sidebar|3"] = 'new-7ed46a82-19a3-409e-b5bb-9b4036327874';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|panels|sidebar|4"] = 'new-8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|panels|sidebar|5"] = 'new-ac601488-2d1a-4098-b231-f9acd96ec8fc';
  $overrides["page_manager_handlers.search_node_panel_context_apachesolr.conf|display|panels|sidebar|6"] = 'new-d20db8aa-7a1c-4920-be9d-ebcdaa896b4b';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|empty_override_format"] = 'iasc_wysiwyg';
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|empty_override_text|format"] = 'iasc_wysiwyg';
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|empty_override_text|value"] = '';
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|env_id"] = '';
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|path"] = '';
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|path_type"] = 'same';
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|rows"] = 10;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-5f9beaf3-4d74-4180-861f-74dba8b68bb3|configuration|title_override"] = 1;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|panel_settings|sidebar"] = array(
    'style' => 'oa_styles_well',
  );

 return $overrides;
}
