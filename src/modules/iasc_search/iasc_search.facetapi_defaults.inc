<?php
/**
 * @file
 * iasc_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function iasc_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::dm_field_oa_date';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'dm_field_oa_date';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => 50,
    'dependencies' => array(
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'announcement' => 0,
        'contact' => 0,
        'panopoly_page' => 0,
        'oa_discussion_post' => 0,
        'oa_wiki_page' => 0,
        'oa_group' => 0,
        'oa_event' => 0,
        'oa_section' => 0,
        'oa_space' => 0,
        'oa_worktracker_task' => 0,
        'oa_team' => 0,
        'oa_ical_importer' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
        'user' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'date',
  );
  $export['apachesolr@solr::dm_field_oa_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::dm_field_published_date';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'dm_field_published_date';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => 50,
    'dependencies' => array(
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'announcement' => 0,
        'contact' => 0,
        'panopoly_page' => 0,
        'oa_discussion_post' => 0,
        'oa_wiki_page' => 0,
        'oa_group' => 0,
        'oa_event' => 0,
        'oa_section' => 0,
        'oa_space' => 0,
        'oa_worktracker_task' => 0,
        'oa_team' => 0,
        'oa_ical_importer' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
        'user' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'date',
  );
  $export['apachesolr@solr::dm_field_published_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::im_field_category';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'im_field_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => 50,
    'dependencies' => array(
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'announcement' => 0,
        'contact' => 0,
        'panopoly_page' => 0,
        'oa_discussion_post' => 0,
        'oa_wiki_page' => 0,
        'oa_group' => 0,
        'oa_event' => 0,
        'oa_section' => 0,
        'oa_space' => 0,
        'oa_worktracker_task' => 0,
        'oa_team' => 0,
        'oa_ical_importer' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
        'user' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'term',
  );
  $export['apachesolr@solr::im_field_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::im_field_document_type';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'im_field_document_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => 50,
    'dependencies' => array(
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'announcement' => 0,
        'contact' => 0,
        'panopoly_page' => 0,
        'oa_discussion_post' => 0,
        'oa_wiki_page' => 0,
        'oa_group' => 0,
        'oa_event' => 0,
        'oa_section' => 0,
        'oa_space' => 0,
        'oa_worktracker_task' => 0,
        'oa_team' => 0,
        'oa_ical_importer' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
        'user' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'term',
  );
  $export['apachesolr@solr::im_field_document_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::im_field_host';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'im_field_host';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => 50,
    'dependencies' => array(
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'announcement' => 0,
        'contact' => 0,
        'panopoly_page' => 0,
        'oa_discussion_post' => 0,
        'oa_wiki_page' => 0,
        'oa_group' => 0,
        'oa_event' => 0,
        'oa_section' => 0,
        'oa_space' => 0,
        'oa_worktracker_task' => 0,
        'oa_team' => 0,
        'oa_ical_importer' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
        'user' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'term',
  );
  $export['apachesolr@solr::im_field_host'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:dm_field_oa_date';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_oa_date';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['apachesolr@solr:block:dm_field_oa_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:dm_field_published_date';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_published_date';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['apachesolr@solr:block:dm_field_published_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:im_field_category';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'im_field_category';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['apachesolr@solr:block:im_field_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:im_field_document_type';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'im_field_document_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['apachesolr@solr:block:im_field_document_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:im_field_host';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'im_field_host';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['apachesolr@solr:block:im_field_host'] = $facet;

  return $export;
}
