<?php
/**
 * @file
 * iasc_action_points.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function iasc_action_points_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'actions_points';
  $feeds_importer->config = array(
    'name' => 'Actions Points',
    'description' => 'Import action points from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Meeting Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Meeting Start Date',
            'target' => 'field_ap_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Meeting End Date',
            'target' => 'field_ap_date:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Topic',
            'target' => 'field_ap_topic',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Action Point',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Lead',
            'target' => 'field_ap_responsibility:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Deadline',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Status',
            'target' => 'field_ap_status',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Focal point',
            'target' => 'field_contact:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Comments',
            'target' => 'field_ap_progress_overview',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'action_point',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['actions_points'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ap_responsibles';
  $feeds_importer->config = array(
    'name' => 'Responsibles',
    'description' => 'Import responsibles from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ap_responsibility',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ap_responsibles'] = $feeds_importer;

  return $export;
}
