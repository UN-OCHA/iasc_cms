<?php
/**
 * @file
 * iasc_taxonomy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iasc_taxonomy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'iasc_organizations';
  $view->description = 'Content panes and pages for organizations.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'IASC Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_membership_level',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Membership */
  $handler->display->display_options['fields']['field_membership_level']['id'] = 'field_membership_level';
  $handler->display->display_options['fields']['field_membership_level']['table'] = 'field_data_field_membership_level';
  $handler->display->display_options['fields']['field_membership_level']['field'] = 'field_membership_level';
  $handler->display->display_options['fields']['field_membership_level']['label'] = '';
  $handler->display->display_options['fields']['field_membership_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_membership_level']['element_label_colon'] = FALSE;
  /* Field: Field: Homepage URL */
  $handler->display->display_options['fields']['field_homepage']['id'] = 'field_homepage';
  $handler->display->display_options['fields']['field_homepage']['table'] = 'field_data_field_homepage';
  $handler->display->display_options['fields']['field_homepage']['field'] = 'field_homepage';
  $handler->display->display_options['fields']['field_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_homepage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_homepage']['type'] = 'link_absolute';
  /* Field: Taxonomy term: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_homepage]';
  $handler->display->display_options['fields']['field_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'organizations_logo',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'hosts' => 'hosts',
  );
  /* Filter criterion: Taxonomy term: Membership (field_membership_level) */
  $handler->display->display_options['filters']['field_membership_level_value']['id'] = 'field_membership_level_value';
  $handler->display->display_options['filters']['field_membership_level_value']['table'] = 'field_data_field_membership_level';
  $handler->display->display_options['filters']['field_membership_level_value']['field'] = 'field_membership_level_value';
  $handler->display->display_options['filters']['field_membership_level_value']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_membership_level_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_membership_level_value']['expose']['operator_id'] = 'field_membership_level_value_op';
  $handler->display->display_options['filters']['field_membership_level_value']['expose']['label'] = 'Membership Level';
  $handler->display->display_options['filters']['field_membership_level_value']['expose']['operator'] = 'field_membership_level_value_op';
  $handler->display->display_options['filters']['field_membership_level_value']['expose']['identifier'] = 'field_membership_level_value';
  $handler->display->display_options['filters']['field_membership_level_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_membership_level_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Full Member and Standing Invitees Logos */
  $handler = $view->new_display('panel_pane', 'Full Member and Standing Invitees Logos', 'panel_pane_membership_logos');
  $handler->display->display_options['display_description'] = 'Lists Member and Invitee organizations\' logos (linked to their homepage urls)';
  $handler->display->display_options['pane_category']['name'] = 'IASC';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_membership_level_value' => '',
    ),
  );
  $export['iasc_organizations'] = $view;

  $view = new view();
  $view->name = 'iasc_recent_activity_by_term';
  $view->description = 'A taxonomy driven recent activity widget';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IASC Recent Activity by Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no published content for this group at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'iasc_wysiwyg';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Published Date (field_published_date) */
  $handler->display->display_options['sorts']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['sorts']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_published_date_value']['expose']['label'] = 'Published Date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Authoring Bodies (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Authoring Bodies';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Section (oa_section_ref) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Document Type Term Dropdown */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['ui_name'] = 'Document Type Term Dropdown';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Document Type';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '0';
  /* Filter criterion: Hosts Term Dropdown */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'Hosts Term Dropdown';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Hosts';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'hosts';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  /* Filter criterion: Product Categories Term Dropdown */
  $handler->display->display_options['filters']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['ui_name'] = 'Product Categories Term Dropdown';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator_id'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['label'] = 'Product Categories';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['identifier'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_2']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['vocabulary'] = 'product_categories';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['depth'] = '0';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Recent Activity by Term */
  $handler = $view->new_display('panel_pane', 'Recent Activity by Term', 'panel_pane_iasc_recent_by_term');
  $handler->display->display_options['display_description'] = 'A taxonomy driven recent activity configurable widget';
  $handler->display->display_options['pane_category']['name'] = 'IASC';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'type' => '',
      'term_node_tid_depth_1' => '',
      'term_node_tid_depth' => '',
      'term_node_tid_depth_2' => '',
      'keys' => '',
    ),
  );
  $export['iasc_recent_activity_by_term'] = $view;

  return $export;
}
