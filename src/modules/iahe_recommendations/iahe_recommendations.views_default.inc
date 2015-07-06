<?php
/**
 * @file
 * iahe_recommendations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iahe_recommendations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_task_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IAHE Recommendations Database';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Filter';
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_evaluation_title' => 'field_evaluation_title',
    'field_date' => 'field_date',
    'nid' => 'nid',
    'field_recomendation' => 'field_recomendation',
    'field_worktracker_country' => 'field_worktracker_country',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_timeframe' => 'field_timeframe',
    'field_addressee' => 'field_addressee',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'field_summary_of_recommendat' => 'field_summary_of_recommendat',
    'field_description_implementation' => 'field_description_implementation',
  );
  $handler->display->display_options['style_options']['default'] = 'field_evaluation_title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_evaluation_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recomendation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_worktracker_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_timeframe' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_addressee' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summary_of_recommendat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description_implementation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Evaluation Title */
  $handler->display->display_options['fields']['field_evaluation_title']['id'] = 'field_evaluation_title';
  $handler->display->display_options['fields']['field_evaluation_title']['table'] = 'field_data_field_evaluation_title';
  $handler->display->display_options['fields']['field_evaluation_title']['field'] = 'field_evaluation_title';
  $handler->display->display_options['fields']['field_evaluation_title']['label'] = 'Evaluation';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Recommendation */
  $handler->display->display_options['fields']['field_recomendation']['id'] = 'field_recomendation';
  $handler->display->display_options['fields']['field_recomendation']['table'] = 'field_data_field_recomendation';
  $handler->display->display_options['fields']['field_recomendation']['field'] = 'field_recomendation';
  $handler->display->display_options['fields']['field_recomendation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_recomendation']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_worktracker_country']['id'] = 'field_worktracker_country';
  $handler->display->display_options['fields']['field_worktracker_country']['table'] = 'field_data_field_worktracker_country';
  $handler->display->display_options['fields']['field_worktracker_country']['field'] = 'field_worktracker_country';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Timeframe */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  /* Field: Content: Responsibility for Implementation */
  $handler->display->display_options['fields']['field_addressee']['id'] = 'field_addressee';
  $handler->display->display_options['fields']['field_addressee']['table'] = 'field_data_field_addressee';
  $handler->display->display_options['fields']['field_addressee']['field'] = 'field_addressee';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Summary of the Recommendation */
  $handler->display->display_options['fields']['field_summary_of_recommendat']['id'] = 'field_summary_of_recommendat';
  $handler->display->display_options['fields']['field_summary_of_recommendat']['table'] = 'field_data_field_summary_of_recommendat';
  $handler->display->display_options['fields']['field_summary_of_recommendat']['field'] = 'field_summary_of_recommendat';
  /* Field: Content: Activities Undertaken to Implement  */
  $handler->display->display_options['fields']['field_description_implementation']['id'] = 'field_description_implementation';
  $handler->display->display_options['fields']['field_description_implementation']['table'] = 'field_data_field_description_implementation';
  $handler->display->display_options['fields']['field_description_implementation']['field'] = 'field_description_implementation';
  /* Sort criterion: Content: Evaluation Title (field_evaluation_title) */
  $handler->display->display_options['sorts']['field_evaluation_title_value']['id'] = 'field_evaluation_title_value';
  $handler->display->display_options['sorts']['field_evaluation_title_value']['table'] = 'field_data_field_evaluation_title';
  $handler->display->display_options['sorts']['field_evaluation_title_value']['field'] = 'field_evaluation_title_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'year';
  /* Filter criterion: Content: Timeframe (field_timeframe) */
  $handler->display->display_options['filters']['field_timeframe_value']['id'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['filters']['field_timeframe_value']['field'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['group'] = 1;
  $handler->display->display_options['filters']['field_timeframe_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['operator_id'] = 'field_timeframe_value_op';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['label'] = 'Timeframe';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['operator'] = 'field_timeframe_value_op';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['identifier'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Country (field_worktracker_country) */
  $handler->display->display_options['filters']['field_worktracker_country_tid']['id'] = 'field_worktracker_country_tid';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['table'] = 'field_data_field_worktracker_country';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['field'] = 'field_worktracker_country_tid';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['value'] = '';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_worktracker_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_worktracker_country_tid']['expose']['operator_id'] = 'field_worktracker_country_tid_op';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['expose']['operator'] = 'field_worktracker_country_tid_op';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['expose']['identifier'] = 'field_worktracker_country_tid';
  $handler->display->display_options['filters']['field_worktracker_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_worktracker_country_tid']['vocabulary'] = 'country';
  /* Filter criterion: Content: Priority (field_oa_worktracker_priority) */
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['id'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['field'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['operator_id'] = 'field_oa_worktracker_priority_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['operator'] = 'field_oa_worktracker_priority_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['identifier'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type of Emergency';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Responsibility for Implementation (field_addressee) */
  $handler->display->display_options['filters']['field_addressee_value']['id'] = 'field_addressee_value';
  $handler->display->display_options['filters']['field_addressee_value']['table'] = 'field_data_field_addressee';
  $handler->display->display_options['filters']['field_addressee_value']['field'] = 'field_addressee_value';
  $handler->display->display_options['filters']['field_addressee_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_addressee_value']['group'] = 1;
  $handler->display->display_options['filters']['field_addressee_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_addressee_value']['expose']['operator_id'] = 'field_addressee_value_op';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['label'] = 'Responsibility for Implementation';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['operator'] = 'field_addressee_value_op';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['identifier'] = 'field_addressee_value';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_field'] = 'field_addressee';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Authoring Bodies (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Authoring Bodies (og_group_ref)';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Recommendations';
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
      'keys' => 'exposed',
      'field_date_value' => 'exposed',
      'field_timeframe_value' => 'exposed',
      'field_worktracker_country_tid' => 'exposed',
      'field_oa_worktracker_priority_value' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'og_group_ref_target_id' => '',
      'field_addressee_tid' => 'exposed',
      'field_addressee_value' => 'exposed',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['new_task_view'] = $view;

  return $export;
}
