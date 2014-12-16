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

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.panels_customerror_404.default_handlers|page_panels_customerror_404_panel_context|conf|display|content|new-11c7782e-baf7-4383-8a84-80f416b02190"] = (object) array(
      'pid' => 'new-11c7782e-baf7-4383-8a84-80f416b02190',
      'panel' => 'contentmain',
      'type' => 'apachesolr_form',
      'subtype' => 'apachesolr_form',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'path_type' => 'custom',
        'path' => 'site/search',
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
      'position' => 1,
      'locks' => array(),
      'uuid' => '11c7782e-baf7-4383-8a84-80f416b02190',
    );
  $overrides["page_manager_pages.panels_customerror_404.default_handlers|page_panels_customerror_404_panel_context|conf|display|content|new-c2b62bd5-89d0-45c6-85f7-9560a772726c|panel"] = 'contentmain';
  $overrides["page_manager_pages.panels_customerror_404.default_handlers|page_panels_customerror_404_panel_context|conf|display|layout"] = 'radix_boxton';
  $overrides["page_manager_pages.panels_customerror_404.default_handlers|page_panels_customerror_404_panel_context|conf|display|panel_settings|style_settings|contentmain"] = NULL;
  $overrides["page_manager_pages.panels_customerror_404.default_handlers|page_panels_customerror_404_panel_context|conf|display|panels|contentmain"] = array(
    0 => 'new-c2b62bd5-89d0-45c6-85f7-9560a772726c',
    1 => 'new-11c7782e-baf7-4383-8a84-80f416b02190',
  );
  $overrides["page_manager_pages.panels_customerror_404.default_handlers|page_panels_customerror_404_panel_context|conf|display|panels|middle"]["DELETED"] = TRUE;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-078ef339-4031-483a-8dfb-8837db7d7d95"] = (object) array(
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
    );
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
      'position' => 0,
      'locks' => array(),
      'uuid' => 'a8210476-3ab0-4ab6-974e-f511ec91f54b',
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-f7576cce-3df6-4498-89b5-77da59c5f99c"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|0"] = 'new-a8210476-3ab0-4ab6-974e-f511ec91f54b';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|1"] = 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|2"] = 'new-078ef339-4031-483a-8dfb-8837db7d7d95';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|0"] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-16ff2951-2241-4d47-b6d0-1ad702a78848"] = (object) array(
      'pid' => 'new-16ff2951-2241-4d47-b6d0-1ad702a78848',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'og_group_ref_target_id' => '',
          'og_group_ref_target_id_mine' => 0,
          'og_subspaces_view_all' => 1,
          'og_subspaces_view_parent' => 0,
          'oa_section_ref_target_id' => '',
          'type' => 'announcement',
          'term_node_tid_depth_1' => 'All',
          'term_node_tid_depth' => 'All',
          'term_node_tid_depth_2' => 'All',
          'keys' => '',
          'sort_order' => 'DESC',
          'sort_by' => 'field_published_date_value',
        ),
        'use_pager' => 1,
        'pager_id' => 0,
        'items_per_page' => 10,
        'override_title' => '',
        'override_title_text' => '',
        'view_settings' => 'rendered_entity',
        'header_type' => 'none',
        'view_mode' => 'teaser',
        'widget_title' => '',
        'fields_override' => array(
          'title' => 1,
          'field_published_date' => 1,
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '16ff2951-2241-4d47-b6d0-1ad702a78848',
    );
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-60eba777-8bd7-4984-aefb-7777899f42d9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-a1345e0e-4ffb-4445-b615-b8922b7dba10"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-d2e48391-04fd-4e47-a3ee-9442c060a4e8"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|contentmain|0"] = 'new-16ff2951-2241-4d47-b6d0-1ad702a78848';
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|contentmain|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|contentmain|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|sidebar"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-02b7adcf-d6d0-41cc-9e74-71ce68194477"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|configuration|widget_title"] = 'Sections';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|position"] = 0;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|style|style"] = 'secondary';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-231a7676-b37f-4d85-bd32-996525f4e9d2"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95"]["DELETED"] = TRUE;
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
        'items_per_page' => 0,
        'override_title' => '',
        'override_title_text' => '',
        'widget_title' => 'Featured Products',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'secondary_options' => 'panel-success',
          'linked_list' => 'none',
        ),
        'style' => 'secondary',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
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
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-b1dbb2ba-786d-47d1-a861-30c45ad473d4"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-ef209430-cd92-42f8-ab1a-66dd810461e2"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|layout"] = 'burr_flipped';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|1"] = 'new-02b7adcf-d6d0-41cc-9e74-71ce68194477';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|2"] = 'new-ef209430-cd92-42f8-ab1a-66dd810461e2';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|0"] = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|1"] = 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|2"] = 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|3"] = 'new-231a7676-b37f-4d85-bd32-996525f4e9d2';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|4"] = 'new-b1dbb2ba-786d-47d1-a861-30c45ad473d4';

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

  // Exported overrides for: variable
  $overrides["variable.bootstrap_library_settings.value|theme|themes|iasc"] = 'iasc';

 return $overrides;
}
