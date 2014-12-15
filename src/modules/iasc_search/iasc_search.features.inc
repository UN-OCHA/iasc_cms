<?php
/**
 * @file
 * iasc_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_apachesolr_environments_alter().
 */
function iasc_search_apachesolr_environments_alter(&$data) {
  if (isset($data['solr'])) {
    $data['solr']->conf['apachesolr_direct_commit'] = 1; /* WAS: '' */
    $data['solr']->conf['apachesolr_read_only'] = 0; /* WAS: '' */
    $data['solr']->conf['apachesolr_soft_commit'] = 1; /* WAS: '' */
    $data['solr']->index_bundles['node'][0] = 'announcement'; /* WAS: 'oa_discussion_post' */
    $data['solr']->index_bundles['node'][3] = 'oa_space'; /* WAS: 'oa_ical_importer' */
    $data['solr']->index_bundles['node'][4] = 'oa_wiki_page'; /* WAS: 'oa_section' */
    $data['solr']->index_bundles['node'][5] = 'panopoly_page'; /* WAS: 'oa_space' */
    unset($data['solr']->index_bundles['node'][10]);
    unset($data['solr']->index_bundles['node'][6]);
    unset($data['solr']->index_bundles['node'][7]);
    unset($data['solr']->index_bundles['node'][8]);
    unset($data['solr']->index_bundles['node'][9]);
    unset($data['solr']->index_bundles['user']);
  }
}

/**
 * Implements hook_facetapi_default_facet_settings_alter().
 */
function iasc_search_facetapi_default_facet_settings_alter(&$data) {
  if (isset($data['apachesolr@solr:block:created'])) {
    $data['apachesolr@solr:block:created']->enabled = FALSE; /* WAS: TRUE */
  }
  if (isset($data['apachesolr@solr:block:sm_oa_section_ref'])) {
    $data['apachesolr@solr:block:sm_oa_section_ref']->enabled = FALSE; /* WAS: TRUE */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_search_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_discussion_post-og_group_ref'])) {
    $data['node-oa_discussion_post-og_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function iasc_search_default_page_manager_handlers_alter(&$data) {
  if (isset($data['search_node_panel_context_apachesolr'])) {
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-6724ddeb-08bf-4792-bcd9-6bb074e1b26d'] = (object) array(
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
        ); /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-693a6a4c-b829-490a-b985-ef3b1452bc62']->configuration['context'] = 'argument_string_1'; /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-693a6a4c-b829-490a-b985-ef3b1452bc62']->configuration['override_title_text'] = 'Authoring Body'; /* WAS: 'Space' */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-693a6a4c-b829-490a-b985-ef3b1452bc62']->position = 1; /* WAS: 3 */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-7ed46a82-19a3-409e-b5bb-9b4036327874'] = (object) array(
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
        ); /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea'] = (object) array(
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
        ); /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-ac601488-2d1a-4098-b231-f9acd96ec8fc'] = (object) array(
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
        ); /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->content['new-d20db8aa-7a1c-4920-be9d-ebcdaa896b4b'] = (object) array(
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
        ); /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][1] = 'new-693a6a4c-b829-490a-b985-ef3b1452bc62'; /* WAS: 'new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][2] = 'new-6724ddeb-08bf-4792-bcd9-6bb074e1b26d'; /* WAS: 'new-eed5638b-f350-4b54-b718-1ad25538945c' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][3] = 'new-7ed46a82-19a3-409e-b5bb-9b4036327874'; /* WAS: 'new-693a6a4c-b829-490a-b985-ef3b1452bc62' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][4] = 'new-8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea'; /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][5] = 'new-ac601488-2d1a-4098-b231-f9acd96ec8fc'; /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][6] = 'new-d20db8aa-7a1c-4920-be9d-ebcdaa896b4b'; /* WAS: '' */
    unset($data['search_node_panel_context_apachesolr']->conf['display']->content['new-eed5638b-f350-4b54-b718-1ad25538945c']);
    unset($data['search_node_panel_context_apachesolr']->conf['display']->content['new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d']);
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function iasc_search_default_page_manager_pages_alter(&$data) {
  if (isset($data['solr'])) {
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-15c4fdb7-8600-4bf7-a414-2ecea16a27f4']->position = 2; /* WAS: 1 */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-5f9beaf3-4d74-4180-861f-74dba8b68bb3']->position = 3; /* WAS: 2 */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-7d3aea5e-9724-4903-9f51-d9131ff68bf9'] = (object) array(
          'pid' => 'new-7d3aea5e-9724-4903-9f51-d9131ff68bf9',
          'panel' => 'contentmain',
          'type' => 'fieldable_panels_pane',
          'subtype' => 'fpid:10',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'full',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '7d3aea5e-9724-4903-9f51-d9131ff68bf9',
        ); /* WAS: '' */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->panels['contentmain'][1] = 'new-7d3aea5e-9724-4903-9f51-d9131ff68bf9'; /* WAS: 'new-15c4fdb7-8600-4bf7-a414-2ecea16a27f4' */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->panels['contentmain'][2] = 'new-15c4fdb7-8600-4bf7-a414-2ecea16a27f4'; /* WAS: 'new-5f9beaf3-4d74-4180-861f-74dba8b68bb3' */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->panels['contentmain'][3] = 'new-5f9beaf3-4d74-4180-861f-74dba8b68bb3'; /* WAS: '' */
  }
}
