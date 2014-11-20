<?php
/**
 * @file
 * iasc_group_login.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_group_login_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: og_features_permission
  $overrides["og_features_permission.node:oa_group:subscribe.roles|non-member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_group:unsubscribe.roles|member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_space:subscribe.roles|non-member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_space:unsubscribe.roles|member"]["DELETED"] = TRUE;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.user_view_panelizer.conf|access|logic"] = 'and';
  $overrides["page_manager_handlers.user_view_panelizer.conf|access|plugins"] = array(
    0 => array(
      'name' => 'compare_users',
      'settings' => array(
        'equality' => 1,
      ),
      'context' => array(
        0 => 'logged-in-user',
        1 => 'argument_entity_id:user_1',
      ),
      'not' => FALSE,
    ),
  );

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|content|new-3e710ae5-7960-4926-a739-1cdffc0b3826"] = (object) array(
      'pid' => 'new-3e710ae5-7960-4926-a739-1cdffc0b3826',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'oa_recent_activity-section_activity',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'type' => array(
            'announcement' => 'announcement',
            'panopoly_page' => 'panopoly_page',
            'oa_wiki_page' => 'oa_wiki_page',
            'oa_event' => 'oa_event',
          ),
          'realname' => '',
          'og_group_ref_target_id' => '',
          'og_group_ref_target_id_mine' => 1,
          'og_subspaces_view_all' => 0,
          'og_subspaces_view_parent' => 0,
          'oa_section_ref_target_id' => '',
        ),
        'show_exposed_form' => 0,
        'use_pager' => 1,
        'pager_id' => 1,
        'items_per_page' => 20,
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'full',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '3e710ae5-7960-4926-a739-1cdffc0b3826',
    );
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|content|new-7b3f16ff-6cf3-4870-8e7b-f435e5002ae0"] = (object) array(
      'pid' => 'new-7b3f16ff-6cf3-4870-8e7b-f435e5002ae0',
      'panel' => 'sidebar',
      'type' => 'iasc_group_login.create_user',
      'subtype' => 'iasc_group_login.create_user',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(
          0 => array(
            'name' => 'role',
            'settings' => array(
              'rids' => array(
                0 => 5,
              ),
            ),
            'context' => 'argument_entity_id:user_1',
            'not' => FALSE,
          ),
        ),
      ),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '7b3f16ff-6cf3-4870-8e7b-f435e5002ae0',
    );
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|content|new-85991598-3ade-462c-9153-b6828b5375ea"] = (object) array(
      'pid' => 'new-85991598-3ade-462c-9153-b6828b5375ea',
      'panel' => 'sidebar',
      'type' => 'oa_core_user_spaces',
      'subtype' => 'oa_core_user_spaces',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'tabs' => array(
          'All' => 'All',
          'Favorite' => 0,
          'Archived' => 0,
          'Subscribed' => 0,
          'Inherited' => 0,
        ),
        'image_size' => 'quarter',
        'show_description' => 0,
        'show_sections' => 0,
        'show_links' => 1,
        'link_class' => 'btn',
        'num_per_page' => 15,
        'types' => array(
          'oa_space' => 'oa_space',
          'oa_group' => 0,
        ),
        'context' => 'argument_entity_id:user_1',
        'override_title' => 1,
        'override_title_text' => 'Subscribed Spaces',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '85991598-3ade-462c-9153-b6828b5375ea',
    );
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|content|new-8ec62ea8-940b-4143-a050-3aa9de481a98|configuration|formatter_settings|image_style"] = 'bio_circled';
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|content|new-8ec62ea8-940b-4143-a050-3aa9de481a98|position"] = 1;
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|content|new-e8325655-b395-490f-bdd3-fe100bd92c0a"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|layout"] = 'burr_flipped';
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|panels|contentmain|1"] = 'new-3e710ae5-7960-4926-a739-1cdffc0b3826';
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|panels|footer"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|panels|sidebar|1"] = 'new-7b3f16ff-6cf3-4870-8e7b-f435e5002ae0';
  $overrides["page_manager_pages.user_actitivy.default_handlers|page_user_actitivy_panel_context|conf|display|panels|sidebar|2"] = 'new-85991598-3ade-462c-9153-b6828b5375ea';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|configuration|formatter_settings|image_style"] = 'bio_circled';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|panel"] = 'sidebar';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|position"] = 1;
  $overrides["panelizer_defaults.user:user:default.display|content|new-35f3ad75-2f58-4569-8d07-c9b6447f4a89"] = (object) array(
      'pid' => 'new-35f3ad75-2f58-4569-8d07-c9b6447f4a89',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_about',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '35f3ad75-2f58-4569-8d07-c9b6447f4a89',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-83fd80d2-c555-4d21-8766-73e164387ae6"] = (object) array(
      'pid' => 'new-83fd80d2-c555-4d21-8766-73e164387ae6',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'oa_recent_activity-section_activity',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'type' => array(
            'announcement' => 'announcement',
            'panopoly_page' => 'panopoly_page',
            'oa_wiki_page' => 'oa_wiki_page',
            'oa_event' => 'oa_event',
          ),
          'realname' => '',
          'og_group_ref_target_id' => 'All',
          'og_group_ref_target_id_mine' => 1,
          'og_subspaces_view_all' => 0,
          'og_subspaces_view_parent' => 0,
          'oa_section_ref_target_id' => 'All',
        ),
        'show_exposed_form' => 0,
        'use_pager' => 1,
        'pager_id' => 1,
        'items_per_page' => 20,
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'full',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '83fd80d2-c555-4d21-8766-73e164387ae6',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-87215791-2a09-4404-a4b4-1e83b673fb16"] = (object) array(
      'pid' => 'new-87215791-2a09-4404-a4b4-1e83b673fb16',
      'panel' => 'sidebar',
      'type' => 'iasc_group_login.create_user',
      'subtype' => 'iasc_group_login.create_user',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(
          0 => array(
            'name' => 'role',
            'settings' => array(
              'rids' => array(
                0 => 5,
              ),
            ),
            'context' => 'panelizer',
            'not' => FALSE,
          ),
        ),
      ),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '87215791-2a09-4404-a4b4-1e83b673fb16',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d76e85cd-4625-4a52-a17b-e5c65e1a0247"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-f5c25284-25f2-44f7-bbb2-86b140495aa6"] = (object) array(
      'pid' => 'new-f5c25284-25f2-44f7-bbb2-86b140495aa6',
      'panel' => 'sidebar',
      'type' => 'oa_core_user_spaces',
      'subtype' => 'oa_core_user_spaces',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'tabs' => array(
          'All' => 'All',
          'Favorite' => 0,
          'Archived' => 0,
          'Subscribed' => 0,
          'Inherited' => 0,
        ),
        'image_size' => 'quarter',
        'show_description' => 0,
        'show_sections' => 0,
        'show_links' => 1,
        'link_class' => 'btn',
        'num_per_page' => 15,
        'types' => array(
          'oa_space' => 'oa_space',
          'oa_group' => 0,
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Subscribed Spaces',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(),
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'f5c25284-25f2-44f7-bbb2-86b140495aa6',
    );
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'burr_flipped';
  $overrides["panelizer_defaults.user:user:default.display|panels|column1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|column2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|contentmain"] = array(
    0 => 'new-35f3ad75-2f58-4569-8d07-c9b6447f4a89',
    1 => 'new-83fd80d2-c555-4d21-8766-73e164387ae6',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar"] = array(
    0 => 'new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9',
    1 => 'new-87215791-2a09-4404-a4b4-1e83b673fb16',
    2 => 'new-f5c25284-25f2-44f7-bbb2-86b140495aa6',
  );
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-2e2e24f1-3d7f-48b0-a82b-449ffb9aab67"] = (object) array(
      'pid' => 'new-2e2e24f1-3d7f-48b0-a82b-449ffb9aab67',
      'panel' => 'contentmain',
      'type' => 'iasc_group_login.create_user',
      'subtype' => 'iasc_group_login.create_user',
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
      'uuid' => '2e2e24f1-3d7f-48b0-a82b-449ffb9aab67',
    );
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-7b58bea7-aa6f-4daa-9180-9eedc586bde2|position"] = 2;
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-a48325fb-5137-4640-8fe6-9228d15745b4|position"] = 3;
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-a48325fb-5137-4640-8fe6-9228d15745b4|shown"] = FALSE;
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-da014954-335f-4dba-9540-79c1c2ef5b2a|position"] = 1;
  $overrides["panelizer_defaults.user:user:default:default.display|panels|contentmain|3"] = 'new-2e2e24f1-3d7f-48b0-a82b-449ffb9aab67';

  // Exported overrides for: user_permission
  $overrides["user_permission.change layouts in place editing.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.download any document files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.download any image files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.download any video files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.use panels in place editing.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.use text format panopoly_html_text.roles|editor"]["DELETED"] = TRUE;
  $overrides["user_permission.view private files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.view private files.roles|editor"] = 'editor';
  $overrides["user_permission.view private files.roles|group login"] = 'group login';
  $overrides["user_permission.view private files.roles|viewer"] = 'viewer';

 return $overrides;
}
