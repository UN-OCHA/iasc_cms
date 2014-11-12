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
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-a8210476-3ab0-4ab6-974e-f511ec91f54b"] = (object) array(
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
      'position' => 0,
      'locks' => array(),
      'uuid' => 'a8210476-3ab0-4ab6-974e-f511ec91f54b',
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-f7576cce-3df6-4498-89b5-77da59c5f99c"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|0"] = 'new-a8210476-3ab0-4ab6-974e-f511ec91f54b';
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
        'widget_title' => 'Contacts',
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
      'position' => 3,
      'locks' => array(),
      'uuid' => '003b40be-c976-41cd-9bcc-1fe83c4bd599',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|configuration|widget_title"] = 'Sections';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95|access|plugins"] = array(
    0 => array(
      'name' => 'role',
      'settings' => array(
        'rids' => array(
          0 => 3,
        ),
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  );
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
        'use_pager' => 0,
        'pager_id' => 0,
        'items_per_page' => 5,
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
        'use_pager' => 0,
        'pager_id' => 0,
        'items_per_page' => 5,
        'override_title' => '',
        'override_title_text' => '',
        'widget_title' => 'Recently Updated Documents',
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
      'position' => 5,
      'locks' => array(),
      'uuid' => '652e1d79-7e20-4a4b-8b66-4fc46244013e',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|configuration|form_build_id"] = 'form-3FQA4tBZPQkihFNHCCM-Jgim3cd7BezIpz98BxLohc8';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|configuration|form_token"] = 'Nf5nZu9dM638_eNJSxOmjWSlFaz-Pw9mWWrURCs-pOU';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|configuration|override_title_text"] = 'Security Level';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|style|style"] = 'secondary';
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
        'settings' => array(
          'secondary_options' => 'panel-primary',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'bf416e9c-7588-48cd-a156-db4e7d2a33ee',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|2"] = 'new-bf416e9c-7588-48cd-a156-db4e7d2a33ee';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|3"] = 'new-003b40be-c976-41cd-9bcc-1fe83c4bd599';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|4"] = 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|5"] = 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e';

  // Exported overrides for: panels_mini
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|style|style"] = 'secondary';
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-2b828bf5-01a6-4805-a95d-6c64c67317ef|access|plugins"] = array(
    0 => array(
      'name' => 'theme',
      'settings' => array(
        'theme' => 'iasc',
      ),
      'not' => TRUE,
    ),
  );
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-3bd6fb98-8bec-48c8-9777-cf8850617d9f|access|plugins"] = array(
    0 => array(
      'name' => 'theme',
      'settings' => array(
        'theme' => 'iasc',
      ),
      'not' => TRUE,
    ),
  );
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-70813a7e-2551-49da-bd7c-4acaff4cae42|access|plugins"] = array(
    0 => array(
      'name' => 'theme',
      'settings' => array(
        'theme' => 'iasc',
      ),
      'not' => TRUE,
    ),
  );
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-70813a7e-2551-49da-bd7c-4acaff4cae42|position"] = 5;
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-738df920-1380-4622-ba4c-21f486060818|access|plugins"] = array(
    0 => array(
      'name' => 'theme',
      'settings' => array(
        'theme' => 'iasc',
      ),
      'not' => TRUE,
    ),
  );
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252|access|plugins"] = array(
    0 => array(
      'name' => 'theme',
      'settings' => array(
        'theme' => 'iasc',
      ),
      'not' => TRUE,
    ),
  );
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-8392382b-5711-4749-96e6-48ae5a7dda23"]["DELETED"] = TRUE;
  $overrides["panels_mini.oa_toolbar_panel.display|content|new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41|access|plugins"] = array(
    0 => array(
      'name' => 'theme',
      'settings' => array(
        'theme' => 'iasc',
      ),
      'not' => TRUE,
    ),
  );
  $overrides["panels_mini.oa_toolbar_panel.display|panels|footer|5"] = 'new-70813a7e-2551-49da-bd7c-4acaff4cae42';
  $overrides["panels_mini.oa_toolbar_panel.display|panels|footer|6"]["DELETED"] = TRUE;

 return $overrides;
}
