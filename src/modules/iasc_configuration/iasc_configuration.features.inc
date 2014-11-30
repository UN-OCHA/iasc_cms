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
 * Implements hook_default_page_manager_pages_alter().
 */
function iasc_configuration_default_page_manager_pages_alter(&$data) {
  if (isset($data['panels_customerror_404'])) {
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-11c7782e-baf7-4383-8a84-80f416b02190'] = (object) array(
          'pid' => 'new-11c7782e-baf7-4383-8a84-80f416b02190',
          'panel' => 'contentmain',
          'type' => 'apachesolr_form',
          'subtype' => 'apachesolr_form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'path_type' => 'same',
            'path' => '',
            'override_prompt' => 0,
            'prompt' => '',
            'show_keys' => 1,
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '11c7782e-baf7-4383-8a84-80f416b02190',
        ); /* WAS: '' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-73bbb29a-d366-4f5d-84a6-c9276b139c51'] = (object) array(
          'pid' => 'new-73bbb29a-d366-4f5d-84a6-c9276b139c51',
          'panel' => 'contentmain',
          'type' => 'fieldable_panels_pane',
          'subtype' => 'fpid:7',
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
          'position' => 0,
          'locks' => array(),
          'uuid' => '73bbb29a-d366-4f5d-84a6-c9276b139c51',
        ); /* WAS: '' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-c2b62bd5-89d0-45c6-85f7-9560a772726c']->panel = 'contentmain'; /* WAS: 'middle' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-c2b62bd5-89d0-45c6-85f7-9560a772726c']->position = 1; /* WAS: 0 */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-c2b62bd5-89d0-45c6-85f7-9560a772726c']->shown = FALSE; /* WAS: TRUE */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->layout = 'radix_boxton'; /* WAS: 'onecol' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->panel_settings['style_settings']['contentmain'] = NULL; /* WAS: '' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->panels['contentmain'] = array(
      0 => 'new-73bbb29a-d366-4f5d-84a6-c9276b139c51',
      1 => 'new-c2b62bd5-89d0-45c6-85f7-9560a772726c',
      2 => 'new-11c7782e-baf7-4383-8a84-80f416b02190',
    ); /* WAS: '' */
    unset($data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->panels['middle']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_configuration_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_section:calendar_section'])) {
    $data['node:oa_section:calendar_section']->display->content['new-078ef339-4031-483a-8dfb-8837db7d7d95'] = (object) array(
          'pid' => 'new-078ef339-4031-483a-8dfb-8837db7d7d95',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => '',
              'flagged' => 0,
            ),
            'items_per_page' => 10,
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Past Meetings',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '078ef339-4031-483a-8dfb-8837db7d7d95',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3']->position = 0; /* WAS: 1 */
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
          'position' => 0,
          'locks' => array(),
          'uuid' => '9ea94d4c-567b-404f-9aec-386ae14a1aea',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-a8210476-3ab0-4ab6-974e-f511ec91f54b'] = (object) array(
          'pid' => 'new-a8210476-3ab0-4ab6-974e-f511ec91f54b',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_upcoming_meetings_filterable',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'field_oa_date_value' => array(
                'value' => '2014-11-01',
              ),
              'field_oa_date_value_1' => array(
                'value' => NULL,
              ),
              'field_city_value' => '',
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => '',
              'keys' => '',
            ),
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 10,
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'a8210476-3ab0-4ab6-974e-f511ec91f54b',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][0] = 'new-078ef339-4031-483a-8dfb-8837db7d7d95'; /* WAS: 'new-39b87a40-e27c-45b0-8bdf-6a9c3f117695' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][1] = 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea'; /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][2] = 'new-a8210476-3ab0-4ab6-974e-f511ec91f54b'; /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['sidebar'][0] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3'; /* WAS: 'new-81942150-4ee9-4396-8371-b94f72b18f6a' */
    unset($data['node:oa_section:calendar_section']->display->content['new-39b87a40-e27c-45b0-8bdf-6a9c3f117695']);
    unset($data['node:oa_section:calendar_section']->display->content['new-81942150-4ee9-4396-8371-b94f72b18f6a']);
    unset($data['node:oa_section:calendar_section']->display->content['new-f7576cce-3df6-4498-89b5-77da59c5f99c']);
    unset($data['node:oa_section:calendar_section']->display->panels['sidebar'][1]);
    unset($data['node:oa_section:calendar_section']->display->panels['sidebar'][2]);
  }
  if (isset($data['node:oa_space:default'])) {
    $data['node:oa_space:default']->display->content['new-02b7adcf-d6d0-41cc-9e74-71ce68194477'] = (object) array(
          'pid' => 'new-02b7adcf-d6d0-41cc-9e74-71ce68194477',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_upcoming_meetings_filterable',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'field_oa_date_value' => array(
                'value' => '2014-11-01',
              ),
              'field_oa_date_value_1' => array(
                'value' => NULL,
              ),
              'field_city_value' => '',
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'keys' => '',
            ),
            'show_exposed_form' => 0,
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 10,
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '02b7adcf-d6d0-41cc-9e74-71ce68194477',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->configuration['widget_title'] = 'Sections'; /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->position = 0; /* WAS: 2 */
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->style['settings']['secondary_options'] = 'panel-primary'; /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->style['style'] = 'secondary'; /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-231a7676-b37f-4d85-bd32-996525f4e9d2'] = (object) array(
          'pid' => 'new-231a7676-b37f-4d85-bd32-996525f4e9d2',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'search_contacts-panel_pane_contacts',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 0,
            'fields_override' => array(
              'field_photo' => 1,
              'title' => 1,
              'field_homepage' => 0,
              'field_organisation' => 1,
              'field_position' => 0,
              'field_body_membership' => 0,
              'field_org_address_locality' => 0,
              'field_email' => 0,
              'field_phone' => 0,
            ),
            'exposed' => array(
              'title' => '',
              'field_body_membership_target_id' => array(),
              'field_organisation_tid' => array(),
              'field_department_value' => '',
              'field_position_value' => 'Chair Co-Chairs Members Secondary',
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Members',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '231a7676-b37f-4d85-bd32-996525f4e9d2',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974'] = (object) array(
          'pid' => 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'iasc_document-panel_pane_featured_products',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'featured',
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 0,
            'override_title' => '',
            'override_title_text' => '',
            'widget_title' => 'Featured Products',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-success',
              'linked_list' => 'doc-icon',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '35ab60ac-d6d7-41b2-a57e-21ca28e5e974',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-652e1d79-7e20-4a4b-8b66-4fc46244013e'] = (object) array(
          'pid' => 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'iasc_document-panel_pane_recent_docs',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'featured',
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 5,
            'override_title' => '',
            'override_title_text' => '',
            'widget_title' => 'Recent Documents',
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
            ),
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-success',
              'linked_list' => 'doc-icon',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '652e1d79-7e20-4a4b-8b66-4fc46244013e',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-b1dbb2ba-786d-47d1-a861-30c45ad473d4'] = (object) array(
          'pid' => 'new-b1dbb2ba-786d-47d1-a861-30c45ad473d4',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'search_contacts-panel_pane_contacts',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 0,
            'fields_override' => array(
              'field_photo' => 0,
              'title' => 1,
              'field_homepage' => 0,
              'field_organisation' => 1,
              'field_position' => 0,
              'field_body_membership' => 0,
              'field_org_address_locality' => 1,
              'field_email' => 1,
              'field_phone' => 1,
            ),
            'exposed' => array(
              'title' => '',
              'field_body_membership_target_id' => array(),
              'field_organisation_tid' => array(),
              'field_department_value' => '',
              'field_position_value' => 'Contact',
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => 'b1dbb2ba-786d-47d1-a861-30c45ad473d4',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-ef209430-cd92-42f8-ab1a-66dd810461e2'] = (object) array(
          'pid' => 'new-ef209430-cd92-42f8-ab1a-66dd810461e2',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'flagged' => 0,
            ),
            'items_per_page' => 10,
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Past Meetings',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'ef209430-cd92-42f8-ab1a-66dd810461e2',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->layout = 'burr_flipped'; /* WAS: 'radix_bryant_flipped' */
    $data['node:oa_space:default']->display->panels['contentmain'][1] = 'new-02b7adcf-d6d0-41cc-9e74-71ce68194477'; /* WAS: 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de' */
    $data['node:oa_space:default']->display->panels['contentmain'][2] = 'new-ef209430-cd92-42f8-ab1a-66dd810461e2'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['sidebar'][0] = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54'; /* WAS: 'new-801d2668-fa45-4031-83ba-e7d47830a8a6' */
    $data['node:oa_space:default']->display->panels['sidebar'][1] = 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974'; /* WAS: 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95' */
    $data['node:oa_space:default']->display->panels['sidebar'][2] = 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e'; /* WAS: 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54' */
    $data['node:oa_space:default']->display->panels['sidebar'][3] = 'new-231a7676-b37f-4d85-bd32-996525f4e9d2'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['sidebar'][4] = 'new-b1dbb2ba-786d-47d1-a861-30c45ad473d4'; /* WAS: '' */
    unset($data['node:oa_space:default']->display->content['new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95']);
    unset($data['node:oa_space:default']->display->content['new-801d2668-fa45-4031-83ba-e7d47830a8a6']);
    unset($data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']);
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
  if (isset($data['oa_toolbar_panel'])) {
    $data['oa_toolbar_panel']->display->content['new-2b828bf5-01a6-4805-a95d-6c64c67317ef']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-3bd6fb98-8bec-48c8-9777-cf8850617d9f']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-70813a7e-2551-49da-bd7c-4acaff4cae42']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-70813a7e-2551-49da-bd7c-4acaff4cae42']->position = 5; /* WAS: 6 */
    $data['oa_toolbar_panel']->display->content['new-738df920-1380-4622-ba4c-21f486060818']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->panels['footer'][5] = 'new-70813a7e-2551-49da-bd7c-4acaff4cae42'; /* WAS: 'new-8392382b-5711-4749-96e6-48ae5a7dda23' */
    unset($data['oa_toolbar_panel']->display->content['new-8392382b-5711-4749-96e6-48ae5a7dda23']);
    unset($data['oa_toolbar_panel']->display->panels['footer'][6]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function iasc_configuration_strongarm_alter(&$data) {
  if (isset($data['bootstrap_library_settings'])) {
    $data['bootstrap_library_settings']->value['theme']['themes']['iasc'] = 'iasc'; /* WAS: '' */
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
    'show_on_teaser' => 0,
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
    'show_on_teaser' => 0,
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
    'show_on_teaser' => 0,
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
