<?php
/**
 * @file
 * oa_apachesolr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function oa_apachesolr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1397566114',
        'last_entity_id' => '49',
      ),
      'user' => array(
        'last_changed' => '1397566114',
        'last_entity_id' => '6',
      ),
    ),
    'apachesolr_index_updated' => 1397574334,
    'apachesolr_last_optimize' => 1397574334,
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'oa_discussion_post',
      1 => 'oa_event',
      2 => 'oa_group',
      3 => 'oa_ical_importer',
      4 => 'oa_section',
      5 => 'oa_space',
      6 => 'oa_team',
      7 => 'oa_wiki_page',
      8 => 'oa_worktracker_task',
      9 => 'panopoly_page',
      10 => 'poll',
    ),
    'user' => array(
      0 => 'user',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
