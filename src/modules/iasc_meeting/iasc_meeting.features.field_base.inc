<?php
/**
 * @file
 * iasc_meeting.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function iasc_meeting_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_agenda_items'
  $field_bases['field_agenda_items'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_agenda_items',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_ai_description'
  $field_bases['field_ai_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ai_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_ai_title'
  $field_bases['field_ai_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ai_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_city'
  $field_bases['field_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact'
  $field_bases['field_contact'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'contact' => 'contact',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_host'
  $field_bases['field_host'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_host',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'hosts',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_info_private'
  $field_bases['field_info_private'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_info_private',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_meeting_agendas'
  $field_bases['field_meeting_agendas'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meeting_agendas',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'oa_wiki_page' => 'oa_wiki_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_meeting_notes'
  $field_bases['field_meeting_notes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meeting_notes',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'oa_wiki_page' => 'oa_wiki_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_presenter_external'
  $field_bases['field_presenter_external'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_presenter_external',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_referenced_docs'
  $field_bases['field_referenced_docs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_referenced_docs',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'oa_wiki_page' => 'oa_wiki_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_room'
  $field_bases['field_room'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_room',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_time_zone'
  $field_bases['field_time_zone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_time_zone',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Central Europe Standard Time (GMT+01:00)',
        1 => 'US Eastern Standard Time (GMT-05:00)',
        2 => 'E. Africa Standard Time (GMT+03:00)',
        3 => 'Greenwich Standard Time (GMT)',
        4 => 'GMT Standard Time (GMT)',
        5 => 'Morocco Standard Time (GMT)',
        6 => 'W. Europe Standard Time (GMT+01:00)',
        7 => 'Romance Standard Time (GMT+01:00)',
        8 => 'Central European Standard Time (GMT+01:00)',
        9 => 'W. Central Africa Standard Time (GMT+01:00)',
        10 => 'GTB Standard Time (GMT+02:00)',
        11 => 'E. Europe Standard Time (GMT+02:00)',
        12 => 'Egypt Standard Time (GMT+02:00)',
        13 => 'South Africa Standard Time (GMT+02:00)',
        14 => 'FLE Standard Time (GMT+02:00)',
        15 => 'Israel Standard Time (GMT+02:00)',
        16 => 'Jordan Standard Time (GMT+02:00)',
        17 => 'Middle East Standard Time (GMT+02:00)',
        18 => 'Namibia Standard Time (GMT+02:00)',
        19 => 'Arabic Standard Time (GMT+03:00)',
        20 => 'Arab Standard Time (GMT+03:00)',
        21 => 'Russian Standard Time (GMT+03:00)',
        22 => 'Georgian Standard Time (GMT+03:00)',
        23 => 'Iran Standard Time (GMT+03:30)',
        24 => 'Arabian Standard Time (GMT+04:00)',
        25 => 'Caucasus Standard Time (GMT+04:00)',
        26 => 'Azerbaijan Standard Time (GMT+04:00)',
        27 => 'Mauritius Standard Time (GMT+04:00)',
        28 => 'Armenian Standard Time (GMT+04:00)',
        29 => 'Afghanistan Standard Time (GMT+04:30)',
        30 => 'Ekaterinburg Standard Time (GMT+05:00)',
        31 => 'West Asia Standard Time (GMT+05:00)',
        32 => 'Pakistan Standard Time GMT+05:00)',
        33 => 'India Standard Time (GMT+05:30)',
        34 => 'Nepal Standard Time (GMT+05:45)',
        35 => 'N. Central Asia Standard Time (GMT+06:00)',
        36 => 'Central Asia Standard Time (GMT+06:00)',
        37 => 'Sri Lanka Standard Time (GMT+06:00)',
        38 => 'Myanmar Standard Time (GMT+06:30)',
        39 => 'SE Asia Standard Time (GMT+07:00)',
        40 => 'North Asia Standard Time (GMT+07:00)',
        41 => 'China Standard Time (GMT+08:00)',
        42 => 'North Asia East Standard Time (GMT+08:00)',
        43 => 'Singapore Standard Time (GMT+08:00)',
        44 => 'W. Australia Standard Time (GMT+08:00)',
        45 => 'Taipei Standard Time (GMT+08:00)',
        46 => 'Tokyo Standard Time (GMT+09:00)',
        47 => 'Korea Standard Time (GMT+09:00)',
        48 => 'Yakutsk Standard Time (GMT+09:00)',
        49 => 'Cen. Australia Standard Time (GMT+09:30)',
        50 => 'AUS Central Standard Time (GMT+09:30)',
        51 => 'E. Australia Standard Time (GMT+10:00)',
        52 => 'AUS Eastern Standard Time (GMT+10:00)',
        53 => 'West Pacific Standard Time (GMT+10:00)',
        54 => 'Tasmania Standard Time (GMT+10:00)',
        55 => 'Vladivostok Standard Time (GMT+10:00)',
        56 => 'Central Pacific Standard Time (GMT+11:00)',
        57 => 'New Zealand Standard Time (GMT+12:00)',
        58 => 'Fiji Standard Time (GMT+12:00)',
        59 => 'Tonga Standard Time (GMT+13:00)',
        60 => 'Azores Standard Time (GMT-01:00)',
        61 => 'Cape Verde Standard Time (GMT-01:00)',
        62 => 'Mid-Atlantic Standard Time (GMT-02:00)',
        63 => 'Argentina Standard Time (GMT-03:00)',
        64 => 'E. South America Standard Time (GMT-03:00)',
        65 => 'SA Eastern Standard Time (GMT-03:00)',
        66 => 'Greenland Standard Time (GMT-03:00)',
        67 => 'Montevideo Standard Time (GMT-03:00)',
        68 => 'Newfoundland Standard Time (GMT-03:30)',
        69 => 'Atlantic Standard Time (GMT-04:00)',
        70 => 'Central Brazilian Standard Time (GMT-04:00)',
        71 => 'SA Western Standard Time (GMT-04:00)',
        72 => 'Pacific SA Standard Time (GMT-04:00)',
        73 => 'Venezuela Standard Time (GMT-04:30)',
        74 => 'SA Pacific Standard Time (GMT-05:00)',
        75 => 'Eastern Standard Time (GMT-05:00)',
        76 => 'Central America Standard Time (GMT-06:00)',
        77 => 'Central Standard Time (GMT-06:00)',
        78 => 'Central Standard Time (Mexico) (GMT-06:00)',
        79 => 'Mexico Standard Time (GMT-06:00)',
        80 => 'Canada Central Standard Time (GMT-06:00)',
        81 => 'US Mountain Standard Time (GMT-07:00)',
        82 => 'Mexico Standard Time 2 (GMT-07:00)',
        83 => 'Mountain Standard Time (GMT-07:00)',
        84 => 'Mountain Standard Time (Mexico) (GMT-07:00)',
        85 => 'Pacific Standard Time (GMT-08:00)',
        86 => 'Pacific Standard Time (Mexico) (GMT-08:00)',
        87 => 'Alaskan Standard Time (GMT-09:00)',
        88 => 'Hawaiian Standard Time (GMT-10:00)',
        89 => 'Samoa Standard Time (GMT-11:00)',
        90 => 'Dateline Standard Time (GMT-12:00)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_venue'
  $field_bases['field_venue'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_venue',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
