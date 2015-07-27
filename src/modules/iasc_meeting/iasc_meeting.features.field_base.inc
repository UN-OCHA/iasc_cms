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
        53 => '(UTC-12:00) International Date Line West',
        22 => '(UTC-11:00) Coordinated Universal Time-11',
        83 => '(UTC-11:00) Midway Island, Samoa',
        3 => '(UTC-10:00) Hawaii',
        4 => '(UTC-09:00) Alaska',
        5 => '(UTC-08:00) Alaska (Daylight Savings)',
        6 => '(UTC-08:00) Baja California',
        7 => '(UTC-08:00) Pacific Time (US and Canada); Tijuana',
        8 => '(UTC-07:00) Arizona',
        9 => '(UTC-07:00) Baja California (Daylight Savings)',
        10 => '(UTC-07:00) Chihuahua, La Paz, Mazatlan',
        11 => '(UTC-07:00) Mountain Time (US and Canada)',
        12 => '(UTC-07:00) Pacific Time (US and Canada); Tijuana (Daylight Savings)',
        13 => '(UTC-06:00) Chihuahua, La Paz, Mazatlan (Daylight Savings)',
        14 => '(UTC-06:00) Mountain Time (US and Canada) (Daylight Savings)',
        15 => '(UTC-06:00) Central America',
        16 => '(UTC-06:00) Central Time (US and Canada)',
        17 => '(UTC-06:00) Guadalajara, Mexico City, Monterrey',
        18 => '(UTC-06:00) Saskatchewan',
        19 => '(UTC-06:00) Central America',
        20 => '(UTC-05:00) Bogota, Lima, Quito',
        21 => '(UTC-05:00) Central Time (US and Canada) (Daylight Savings)',
        1 => '(UTC-05:00) Eastern Time (US and Canada)',
        23 => '(UTC-05:00) Guadalajara, Mexico City, Monterrey (Daylight Savings)',
        24 => '(UTC-05:00) Indiana (East)',
        25 => '(UTC-04:30) Caracas, La Paz',
        26 => '(UTC-04:00) Asuncion',
        27 => '(UTC-04:00) Atlantic Time (Canada)',
        28 => '(UTC-04:00) Cuiaba',
        29 => '(UTC-04:00) Eastern Time (US and Canada) (Daylight Savings)',
        30 => '(UTC-04:00) Georgetown, La Paz, Manaus, San Juan',
        31 => '(UTC-04:00) Indiana (East) (Daylight Savings)',
        32 => '(UTC-04:00) Santiago',
        33 => '(UTC-03:30) Newfoundland and Labrador',
        34 => '(UTC-03:00) Atlantic Time (Canada) (Daylight Savings)',
        35 => '(UTC-03:00) Brasilia',
        36 => '(UTC-03:00) Buenos Aires',
        37 => '(UTC-03:00) Cayenne, Fortaleza',
        38 => '(UTC-03:00) Greenland',
        39 => '(UTC-03:00) Montevideo',
        40 => '(UTC-02:30) Newfoundland and Labrador (Daylight Savings)',
        41 => '(UTC-02:00) Coordinated Universal Time-02',
        42 => '(UTC-02:00) Greenland (Daylight Savings)',
        43 => '(UTC-02:00) Mid-Atlantic',
        44 => '(UTC-01:00) Azores',
        45 => '(UTC-01:00) Cape Verde Islands',
        46 => '(UTC-01:00) Mid-Atlantic (Daylight Savings)',
        47 => '(UTC) Azores (Daylight Savings)',
        48 => '(UTC) Casablanca, Monrovia',
        49 => '(UTC) Coordinated Universal Time',
        50 => '(UTC) Greenwich Mean Time: Dublin, Edinburgh, Lisbon, London',
        51 => '(UTC) Monrovia, Reykjavik',
        52 => '(UTC+01:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna',
        0 => '(UTC+01:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague',
        54 => '(UTC+01:00) Brussels, Copenhagen, Madrid, Paris',
        55 => '(UTC+01:00) Greenwich Mean Time: Dublin, Edinburgh, Lisbon, London (Daylight Savings)',
        56 => '(UTC+01:00) Sarajevo, Skopje, Warsaw, Zagreb',
        57 => '(UTC+01:00) West Central Africa',
        58 => '(UTC+01:00) Windhoek',
        59 => '(UTC+02:00) Amman',
        60 => '(UTC+02:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna (Daylight Savings)',
        61 => '(UTC+02:00) Athens, Istanbul, Minsk',
        62 => '(UTC+02:00) Beirut',
        63 => '(UTC+02:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague (Daylight Savings)',
        64 => '(UTC+02:00) Brussels, Copenhagen, Madrid, Paris(Daylight Savings)',
        65 => '(UTC+02:00) Bucharest',
        66 => '(UTC+02:00) Cairo',
        67 => '(UTC+02:00) Damascus',
        68 => '(UTC+02:00) Harare, Pretoria',
        69 => '(UTC+02:00) Helsinki, Kiev, Riga, Sofia, Tallinn, Vilnius',
        70 => '(UTC+02:00) Jerusalem',
        71 => '(UTC+03:00) Minsk (Daylight Savings)',
        72 => '(UTC+02:00) Sarajevo, Skopje, Warsaw, Zagreb (Daylight Savings)',
        73 => '(UTC+03:00) Amman (Daylight Savings)',
        74 => '(UTC+03:00) Athens, Istanbul, Minsk (Daylight Savings)',
        75 => '(UTC+03:00) Baghdad',
        76 => '(UTC+03:00) Beirut (Daylight Savings)',
        77 => '(UTC+03:00) Cairo (Daylight Savings)',
        78 => '(UTC+03:00) Damascus (Daylight Savings)',
        79 => '(UTC+03:00) Helsinki, Kiev, Riga, Sofia, Tallinn, Vilnius (Daylight Savings)',
        80 => '(UTC+03:00) Jerusalem (Daylight Savings)',
        81 => '(UTC+03:00) Kuwait, Riyadh',
        82 => '(UTC+03:00) Moscow, St. Petersburg, Volgograd',
        2 => '(UTC+03:00) Nairobi',
        84 => '(UTC+03:00) Baghdad',
        85 => '(UTC+03:30) Tehran',
        86 => '(UTC+04:00) Abu Dhabi, Muscat',
        87 => '(UTC+04:00) Baku',
        88 => '(UTC+04:00) Moscow, St. Petersburg, Volgograd (Daylight Savings)',
        89 => '(UTC+04:00) Port Louis',
        90 => '(UTC+04:00) Tbilisi',
        91 => '(UTC+04:00) Yerevan',
        92 => '(UTC+04:30) Kabul',
        93 => '(UTC+04:30) Tehran (Daylight Savings)',
        94 => '(UTC+05:00) Baku (Daylight Savings)',
        95 => '(UTC+05:00) Ekaterinburg',
        96 => '(UTC+05:00) Islamabad, Karachi',
        97 => '(UTC+05:00) Tashkent',
        98 => '(UTC+05:00) Yerevan (Daylight Savings)',
        99 => '(UTC+05:30) Chennai, Kolkata, Mumbai, New Delhi',
        100 => '(UTC+05:30) Sri Jayawardenepura',
        101 => '(UTC+05:45) Kathmandu',
        102 => '(UTC+06:00) Astana',
        103 => '(UTC+06:00) Dhaka',
        104 => '(UTC+06:00) Ekaterinburg (Daylight Savings)',
        105 => '(UTC+06:00) Sri Jayawardenepura',
        106 => '(UTC+06:00) Novosibirsk',
        107 => '(UTC+06:30) Yangon Rangoon',
        108 => '(UTC+07:00) Bangkok, Hanoi, Jakarta',
        109 => '(UTC+07:00) Krasnoyarsk',
        110 => '(UTC+07:00) Novosibirsk (Daylight Savings)',
        111 => '(UTC+08:00) Beijing, Chongqing, Hong Kong SAR, Urumqi',
        112 => '(UTC+08:00) Irkutsk',
        113 => '(UTC+08:00) Krasnoyarsk (Daylight Savings)',
        114 => '(UTC+08:00) Kuala Lumpur, Singapore',
        115 => '(UTC+08:00) Perth',
        116 => '(UTC+08:00) Taipei',
        117 => '(UTC+08:00) Ulaanbaatar',
        118 => '(UTC+09:00) Irkutsk (Daylight Savings)',
        119 => '(UTC+09:00) Osaka, Sapporo, Tokyo',
        120 => '(UTC+09:00) Seoul',
        121 => '(UTC+09:00) Yakutsk',
        122 => '(UTC+09:30) Adelaide',
        123 => '(UTC+09:30) Darwin',
        124 => '(UTC+10:00) Brisbane',
        125 => '(UTC+10:00) Canberra, Melbourne, Sydney',
        126 => '(UTC+10:00) Guam, Port Moresby',
        127 => '(UTC+10:00) Hobart',
        128 => '(UTC+10:00) Vladivostok',
        129 => '(UTC+10:00) Yakutsk (Daylight Savings)',
        130 => '(UTC+11:00) Magadan',
        131 => '(UTC+11:00) Solomon Is., New Caledonia',
        132 => '(UTC+11:00) Vladivostok (Daylight Savings)',
        133 => '(UTC+12:00) Auckland, Wellington',
        134 => '(UTC+12:00) Coordinated Universal Time+12',
        135 => '(UTC+12:00) Fiji',
        136 => '(UTC+12:00) Magadan (Daylight Savings)',
        137 => '(UTC+13:00) Nuku\'alofa',
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
