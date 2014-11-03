<?php
/**
 * @file
 * iasc_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iasc_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info_alter().
 */
function iasc_configuration_node_info_alter(&$data) {
  if (isset($data['oa_space'])) {
    $data['oa_space']['title_label'] = 'Full Name'; /* WAS: 'Title' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_configuration_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_section:calendar_section'])) {
    $data['node:oa_section:calendar_section']->display->content['new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3']->position = 0; /* WAS: 1 */
    $data['node:oa_section:calendar_section']->display->content['new-72532a34-7123-45bb-88ef-b02e101c1bd4'] = (object) array(
          'pid' => 'new-72532a34-7123-45bb-88ef-b02e101c1bd4',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_upcoming_meetings',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'filter-field_oa_date_value' => array(
                'expose_to_visitor' => 1,
              ),
              'field_oa_date_value' => array(
                'value' => '2014-10-01',
              ),
              'filter-field_oa_date_value2' => array(
                'expose_to_visitor' => 1,
              ),
              'field_oa_date_value2' => array(
                'value' => NULL,
              ),
              'filter-field_city_value' => array(
                'expose_to_visitor' => 1,
              ),
              'field_city_value' => '',
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => '',
              'filter-keys' => array(
                'expose_to_visitor' => 1,
              ),
              'keys' => '',
            ),
            'items_per_page' => 10,
            'override_title' => '',
            'override_title_text' => '',
            'view_mode' => 'teaser',
            'widget_title' => 'Upcoming Meetings',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '72532a34-7123-45bb-88ef-b02e101c1bd4',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-9ea94d4c-567b-404f-9aec-386ae14a1aea'] = (object) array(
          'pid' => 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea',
          'panel' => 'contentmain',
          'type' => 'iasc_meeting.add_meeting',
          'subtype' => 'iasc_meeting.add_meeting',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '9ea94d4c-567b-404f-9aec-386ae14a1aea',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][0] = 'new-72532a34-7123-45bb-88ef-b02e101c1bd4'; /* WAS: 'new-39b87a40-e27c-45b0-8bdf-6a9c3f117695' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][1] = 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea'; /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['sidebar'][0] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3'; /* WAS: 'new-81942150-4ee9-4396-8371-b94f72b18f6a' */
    unset($data['node:oa_section:calendar_section']->display->content['new-39b87a40-e27c-45b0-8bdf-6a9c3f117695']);
    unset($data['node:oa_section:calendar_section']->display->content['new-81942150-4ee9-4396-8371-b94f72b18f6a']);
    unset($data['node:oa_section:calendar_section']->display->content['new-f7576cce-3df6-4498-89b5-77da59c5f99c']);
    unset($data['node:oa_section:calendar_section']->display->panels['sidebar'][1]);
    unset($data['node:oa_section:calendar_section']->display->panels['sidebar'][2]);
  }
}

/**
 * Implements hook_default_panels_mini_alter().
 */
function iasc_configuration_default_panels_mini_alter(&$data) {
  if (isset($data['default_section_sidebar'])) {
    $data['default_section_sidebar']->display->content['new-e88f722e-09b5-451c-b694-f6b79c2d8554']->style['settings']['secondary_options'] = 'panel-primary'; /* WAS: '' */
    $data['default_section_sidebar']->display->content['new-e88f722e-09b5-451c-b694-f6b79c2d8554']->style['style'] = 'secondary'; /* WAS: '' */
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function iasc_configuration_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured".
  $flags['featured'] = array(
    'content_type' => 'node',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(
      0 => 'oa_wiki_page',
    ),
    'flag_short' => 'Featured',
    'flag_long' => 'Mark as Featured',
    'flag_message' => 'Flagged as Featured!',
    'unflag_short' => 'Remove Featured flag',
    'unflag_long' => 'Remove item from Featured list',
    'unflag_message' => 'Removed Featured flag',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Show on Homepage".
  $flags['show_on_home'] = array(
    'content_type' => 'node',
    'title' => 'Show on Homepage',
    'global' => 1,
    'types' => array(
      0 => 'announcement',
    ),
    'flag_short' => 'Show on Homepage',
    'flag_long' => 'Mark to promote the content to the homepage.',
    'flag_message' => 'Marked to display on Home!',
    'unflag_short' => 'Remove display on homepage.',
    'unflag_long' => 'Unmark to remove the content from the homepage.',
    'unflag_message' => 'Removed from Home!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Special".
  $flags['special'] = array(
    'content_type' => 'node',
    'title' => 'Special',
    'global' => 1,
    'types' => array(
      0 => 'announcement',
    ),
    'flag_short' => 'Special',
    'flag_long' => 'Mark as Special',
    'flag_message' => 'Flagged as Special!',
    'unflag_short' => 'Remove Special',
    'unflag_long' => 'Unmark as Special',
    'unflag_message' => 'Removed Special flag!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
