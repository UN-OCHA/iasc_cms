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
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_recomendation' => 'field_recomendation',
    'field_date' => 'field_date',
    'field_country3' => 'field_country3',
    'field_type2' => 'field_type2',
    'field_addressee' => 'field_addressee',
    'field_st2' => 'field_st2',
    'field_summary_of_the_recommendat' => 'field_summary_of_the_recommendat',
    'field_priority' => 'field_priority',
    'field_timeframe' => 'field_timeframe',
    'field_description_implementation' => 'field_description_implementation',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
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
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type2' => array(
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
    'field_st2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summary_of_the_recommendat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_priority' => array(
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
    'field_description_implementation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Recommendation */
  $handler->display->display_options['fields']['field_recomendation']['id'] = 'field_recomendation';
  $handler->display->display_options['fields']['field_recomendation']['table'] = 'field_data_field_recomendation';
  $handler->display->display_options['fields']['field_recomendation']['field'] = 'field_recomendation';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country3']['id'] = 'field_country3';
  $handler->display->display_options['fields']['field_country3']['table'] = 'field_data_field_country3';
  $handler->display->display_options['fields']['field_country3']['field'] = 'field_country3';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type2']['id'] = 'field_type2';
  $handler->display->display_options['fields']['field_type2']['table'] = 'field_data_field_type2';
  $handler->display->display_options['fields']['field_type2']['field'] = 'field_type2';
  $handler->display->display_options['fields']['field_type2']['delta_offset'] = '0';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_priority']['id'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['table'] = 'field_data_field_priority';
  $handler->display->display_options['fields']['field_priority']['field'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['delta_offset'] = '0';
  /* Field: Content: Timeframe */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  /* Field: Content: Addressee */
  $handler->display->display_options['fields']['field_addressee']['id'] = 'field_addressee';
  $handler->display->display_options['fields']['field_addressee']['table'] = 'field_data_field_addressee';
  $handler->display->display_options['fields']['field_addressee']['field'] = 'field_addressee';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_st2']['id'] = 'field_st2';
  $handler->display->display_options['fields']['field_st2']['table'] = 'field_data_field_st2';
  $handler->display->display_options['fields']['field_st2']['field'] = 'field_st2';
  $handler->display->display_options['fields']['field_st2']['delta_offset'] = '0';
  /* Field: Content: Summary of the recommendation */
  $handler->display->display_options['fields']['field_summary_of_the_recommendat']['id'] = 'field_summary_of_the_recommendat';
  $handler->display->display_options['fields']['field_summary_of_the_recommendat']['table'] = 'field_data_field_summary_of_the_recommendat';
  $handler->display->display_options['fields']['field_summary_of_the_recommendat']['field'] = 'field_summary_of_the_recommendat';
  /* Field: Content: Description Implementation */
  $handler->display->display_options['fields']['field_description_implementation']['id'] = 'field_description_implementation';
  $handler->display->display_options['fields']['field_description_implementation']['table'] = 'field_data_field_description_implementation';
  $handler->display->display_options['fields']['field_description_implementation']['field'] = 'field_description_implementation';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Country (field_country3) */
  $handler->display->display_options['filters']['field_country3_value']['id'] = 'field_country3_value';
  $handler->display->display_options['filters']['field_country3_value']['table'] = 'field_data_field_country3';
  $handler->display->display_options['filters']['field_country3_value']['field'] = 'field_country3_value';
  $handler->display->display_options['filters']['field_country3_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country3_value']['expose']['operator_id'] = 'field_country3_value_op';
  $handler->display->display_options['filters']['field_country3_value']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country3_value']['expose']['operator'] = 'field_country3_value_op';
  $handler->display->display_options['filters']['field_country3_value']['expose']['identifier'] = 'field_country3_value';
  $handler->display->display_options['filters']['field_country3_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_value']['id'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_value']['field'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator_id'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['identifier'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Addressee (field_addressee) */
  $handler->display->display_options['filters']['field_addressee_value']['id'] = 'field_addressee_value';
  $handler->display->display_options['filters']['field_addressee_value']['table'] = 'field_data_field_addressee';
  $handler->display->display_options['filters']['field_addressee_value']['field'] = 'field_addressee_value';
  $handler->display->display_options['filters']['field_addressee_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_addressee_value']['expose']['operator_id'] = 'field_addressee_value_op';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['label'] = 'Addressee';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['operator'] = 'field_addressee_value_op';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['identifier'] = 'field_addressee_value';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_field'] = 'field_addressee';
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_addressee_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Description Implementation (field_description_implementation) */
  $handler->display->display_options['filters']['field_description_implementation_value']['id'] = 'field_description_implementation_value';
  $handler->display->display_options['filters']['field_description_implementation_value']['table'] = 'field_data_field_description_implementation';
  $handler->display->display_options['filters']['field_description_implementation_value']['field'] = 'field_description_implementation_value';
  $handler->display->display_options['filters']['field_description_implementation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['operator_id'] = 'field_description_implementation_value_op';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['label'] = 'Description Implementation';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['operator'] = 'field_description_implementation_value_op';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['identifier'] = 'field_description_implementation_value';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['autocomplete_field'] = 'field_description_implementation';
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_description_implementation_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
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
  /* Filter criterion: Content: Recommendation (field_recomendation) */
  $handler->display->display_options['filters']['field_recomendation_value']['id'] = 'field_recomendation_value';
  $handler->display->display_options['filters']['field_recomendation_value']['table'] = 'field_data_field_recomendation';
  $handler->display->display_options['filters']['field_recomendation_value']['field'] = 'field_recomendation_value';
  $handler->display->display_options['filters']['field_recomendation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['operator_id'] = 'field_recomendation_value_op';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['label'] = 'Recommendation';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['operator'] = 'field_recomendation_value_op';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['identifier'] = 'field_recomendation_value';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['autocomplete_field'] = 'field_recomendation';
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_recomendation_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Summary of the recommendation (field_summary_of_the_recommendat) */
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['id'] = 'field_summary_of_the_recommendat_value';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['table'] = 'field_data_field_summary_of_the_recommendat';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['field'] = 'field_summary_of_the_recommendat_value';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['operator_id'] = 'field_summary_of_the_recommendat_value_op';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['label'] = 'Summary of the recommendation';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['operator'] = 'field_summary_of_the_recommendat_value_op';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['identifier'] = 'field_summary_of_the_recommendat_value';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['autocomplete_field'] = 'field_summary_of_the_recommendat';
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_summary_of_the_recommendat_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
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
  /* Filter criterion: Content: Timeframe (field_timeframe) */
  $handler->display->display_options['filters']['field_timeframe_value']['id'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['filters']['field_timeframe_value']['field'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['operator_id'] = 'field_timeframe_value_op';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['label'] = 'Timeframe';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['operator'] = 'field_timeframe_value_op';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['identifier'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Status (field_st2) */
  $handler->display->display_options['filters']['field_st2_value']['id'] = 'field_st2_value';
  $handler->display->display_options['filters']['field_st2_value']['table'] = 'field_data_field_st2';
  $handler->display->display_options['filters']['field_st2_value']['field'] = 'field_st2_value';
  $handler->display->display_options['filters']['field_st2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_st2_value']['expose']['operator_id'] = 'field_st2_value_op';
  $handler->display->display_options['filters']['field_st2_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_st2_value']['expose']['operator'] = 'field_st2_value_op';
  $handler->display->display_options['filters']['field_st2_value']['expose']['identifier'] = 'field_st2_value';
  $handler->display->display_options['filters']['field_st2_value']['expose']['remember_roles'] = array(
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
      'field_country3_value' => 'exposed',
      'field_priority_value' => 'exposed',
      'field_addressee_value' => 'exposed',
      'field_description_implementation_value' => 'exposed',
      'field_date_value' => 'exposed',
      'field_recomendation_value' => 'exposed',
      'field_summary_of_the_recommendat_value' => '',
      'keys' => 'exposed',
      'field_timeframe_value' => 'exposed',
      'field_st2_value' => 'exposed',
    ),
  );
  $export['new_task_view'] = $view;

  return $export;
}
