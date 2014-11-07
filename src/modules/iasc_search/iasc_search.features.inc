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
}

/**
 * Implements hook_apachesolr_environments_alter().
 */
function iasc_search_apachesolr_environments_alter(&$data) {
  if (isset($data['solr'])) {
    $data['solr']->conf['apachesolr_direct_commit'] = 1; /* WAS: '' */
    $data['solr']->conf['apachesolr_index_last']['file'] = array(
      'last_changed' => 1415114184,
      'last_entity_id' => 751,
    ); /* WAS: '' */
    $data['solr']->conf['apachesolr_index_last']['node']['last_changed'] = 1415307892; /* WAS: 1397566114 */
    $data['solr']->conf['apachesolr_index_last']['node']['last_entity_id'] = 2803; /* WAS: 49 */
    $data['solr']->conf['apachesolr_index_last']['user']['last_changed'] = 1415213596; /* WAS: 1397566114 */
    $data['solr']->conf['apachesolr_index_last']['user']['last_entity_id'] = 42; /* WAS: 6 */
    $data['solr']->conf['apachesolr_index_updated'] = 0; /* WAS: 1397574334 */
    $data['solr']->conf['apachesolr_last_optimize'] = 1415323886; /* WAS: 1397574334 */
    $data['solr']->conf['apachesolr_read_only'] = 0; /* WAS: '' */
    $data['solr']->conf['apachesolr_soft_commit'] = 1; /* WAS: '' */
    $data['solr']->index_bundles['file'] = array(
      0 => 'audio',
      1 => 'document',
      2 => 'image',
      3 => 'video',
    ); /* WAS: '' */
    $data['solr']->index_bundles['node'][0] = 'oa_event'; /* WAS: 'oa_discussion_post' */
    $data['solr']->index_bundles['node'][1] = 'oa_space'; /* WAS: 'oa_event' */
    $data['solr']->index_bundles['node'][2] = 'oa_wiki_page'; /* WAS: 'oa_group' */
    $data['solr']->index_bundles['node'][3] = 'panopoly_page'; /* WAS: 'oa_ical_importer' */
    unset($data['solr']->index_bundles['node'][10]);
    unset($data['solr']->index_bundles['node'][4]);
    unset($data['solr']->index_bundles['node'][5]);
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
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][2] = 'new-d20db8aa-7a1c-4920-be9d-ebcdaa896b4b'; /* WAS: 'new-eed5638b-f350-4b54-b718-1ad25538945c' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][3] = 'new-8a7e45ba-2ffc-4ec8-84f0-20bbd6ca08ea'; /* WAS: 'new-693a6a4c-b829-490a-b985-ef3b1452bc62' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][4] = 'new-7ed46a82-19a3-409e-b5bb-9b4036327874'; /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][5] = 'new-6724ddeb-08bf-4792-bcd9-6bb074e1b26d'; /* WAS: '' */
    $data['search_node_panel_context_apachesolr']->conf['display']->panels['sidebar'][6] = 'new-ac601488-2d1a-4098-b231-f9acd96ec8fc'; /* WAS: '' */
    unset($data['search_node_panel_context_apachesolr']->conf['display']->content['new-eed5638b-f350-4b54-b718-1ad25538945c']);
    unset($data['search_node_panel_context_apachesolr']->conf['display']->content['new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d']);
  }
}
