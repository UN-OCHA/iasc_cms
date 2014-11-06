<?php
/**
 * @file
 * iasc_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: node
  $overrides["node.oa_space.title_label"] = 'Full Name';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-39b87a40-e27c-45b0-8bdf-6a9c3f117695"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3|position"] = 0;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-72532a34-7123-45bb-88ef-b02e101c1bd4"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-81942150-4ee9-4396-8371-b94f72b18f6a"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-9ea94d4c-567b-404f-9aec-386ae14a1aea"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-f7576cce-3df6-4498-89b5-77da59c5f99c"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|0"] = 'new-72532a34-7123-45bb-88ef-b02e101c1bd4';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|1"] = 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|0"] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-003b40be-c976-41cd-9bcc-1fe83c4bd599"] = (object) array(
      'pid' => 'new-003b40be-c976-41cd-9bcc-1fe83c4bd599',
      'panel' => 'sidebar',
      'type' => 'views_panes',
      'subtype' => 'search_contacts-panel_pane_contacts',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'use_pager' => 1,
        'pager_id' => 0,
        'items_per_page' => 10,
        'exposed' => array(
          'title' => '',
          'field_body_membership_target_id' => array(),
          'field_organisation_tid' => array(),
          'field_department_value' => '',
          'field_position_value' => '',
          'sort_order' => 'ASC',
          'sort_by' => 'title',
        ),
        'override_title' => '',
        'override_title_text' => '',
        'view_mode' => 'bio_short',
        'widget_title' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-primary',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '003b40be-c976-41cd-9bcc-1fe83c4bd599',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974"] = (object) array(
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
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-success',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '35ab60ac-d6d7-41b2-a57e-21ca28e5e974',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-652e1d79-7e20-4a4b-8b66-4fc46244013e"] = (object) array(
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
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-success',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '652e1d79-7e20-4a4b-8b66-4fc46244013e',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|configuration|form_build_id"] = 'form-3FQA4tBZPQkihFNHCCM-Jgim3cd7BezIpz98BxLohc8';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|configuration|form_token"] = 'Nf5nZu9dM638_eNJSxOmjWSlFaz-Pw9mWWrURCs-pOU';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|configuration|override_title_text"] = 'Security Level';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|position"] = 2;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-bf416e9c-7588-48cd-a156-db4e7d2a33ee"] = (object) array(
      'pid' => 'new-bf416e9c-7588-48cd-a156-db4e7d2a33ee',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'oa_event_list-panel_pane_upcoming_meetings',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'field_oa_date_value' => array(
            'value' => '2014-11-01',
          ),
          'field_oa_date_value2' => array(
            'value' => NULL,
          ),
          'field_city_value' => '',
          'og_group_ref_target_id' => '',
          'og_group_ref_target_id_mine' => 0,
          'og_subspaces_view_all' => 1,
          'og_subspaces_view_parent' => 0,
          'keys' => '',
        ),
        'use_pager' => 1,
        'pager_id' => 0,
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
      'position' => 1,
      'locks' => array(),
      'uuid' => 'bf416e9c-7588-48cd-a156-db4e7d2a33ee',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|1"] = 'new-bf416e9c-7588-48cd-a156-db4e7d2a33ee';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|2"] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|3"] = 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|4"] = 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|5"] = 'new-003b40be-c976-41cd-9bcc-1fe83c4bd599';

  // Exported overrides for: panels_mini
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|style|style"] = 'secondary';

 return $overrides;
}
