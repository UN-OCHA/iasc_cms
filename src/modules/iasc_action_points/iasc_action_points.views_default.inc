<?php
/**
 * @file
 * iasc_action_points.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iasc_action_points_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'iasc_action_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IASC Action Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IASC Action Points';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'field_ap_date' => 'field_ap_date',
    'field_ap_topic' => 'field_ap_topic',
    'body' => 'body',
    'field_ap_responsibility' => 'field_ap_responsibility',
    'field_contact' => 'field_contact',
    'field_date' => 'field_date',
    'field_ap_status' => 'field_ap_status',
    'field_ap_progress_overview' => 'field_ap_progress_overview',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ap_date';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ap_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ap_topic' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ap_responsibility' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact' => array(
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
    'field_ap_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ap_progress_overview' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Meeting';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'col-md-1';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Meeting date */
  $handler->display->display_options['fields']['field_ap_date']['id'] = 'field_ap_date';
  $handler->display->display_options['fields']['field_ap_date']['table'] = 'field_data_field_ap_date';
  $handler->display->display_options['fields']['field_ap_date']['field'] = 'field_ap_date';
  $handler->display->display_options['fields']['field_ap_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_ap_date']['element_class'] = 'col-md-1';
  $handler->display->display_options['fields']['field_ap_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ap_date']['settings'] = array(
    'format_type' => 'iasc_ap_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Topic/Theme/Country */
  $handler->display->display_options['fields']['field_ap_topic']['id'] = 'field_ap_topic';
  $handler->display->display_options['fields']['field_ap_topic']['table'] = 'field_data_field_ap_topic';
  $handler->display->display_options['fields']['field_ap_topic']['field'] = 'field_ap_topic';
  $handler->display->display_options['fields']['field_ap_topic']['element_class'] = 'col-md-1';
  $handler->display->display_options['fields']['field_ap_topic']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Action Point';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['element_class'] = 'col-md-2';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'jquery_expander';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'expandText' => 'More',
    'expandPrefix' => '...',
    'slicePoint' => '150',
    'collapseTimer' => '',
    'userCollapseText' => 'Less',
    'userCollapsePrefix' => '',
  );
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ap_responsibility']['id'] = 'field_ap_responsibility';
  $handler->display->display_options['fields']['field_ap_responsibility']['table'] = 'field_data_field_ap_responsibility';
  $handler->display->display_options['fields']['field_ap_responsibility']['field'] = 'field_ap_responsibility';
  $handler->display->display_options['fields']['field_ap_responsibility']['element_class'] = 'col-md-1';
  $handler->display->display_options['fields']['field_ap_responsibility']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ap_responsibility']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_ap_responsibility']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_ap_responsibility']['delta_offset'] = '0';
  /* Field: Field: Contact */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['label'] = 'Focal Point';
  $handler->display->display_options['fields']['field_contact']['element_class'] = 'col-md-2';
  $handler->display->display_options['fields']['field_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_contact']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contact']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Timeframe';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'col-md-1';
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'iasc_ap_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ap_status']['id'] = 'field_ap_status';
  $handler->display->display_options['fields']['field_ap_status']['table'] = 'field_data_field_ap_status';
  $handler->display->display_options['fields']['field_ap_status']['field'] = 'field_ap_status';
  $handler->display->display_options['fields']['field_ap_status']['element_class'] = 'col-md-1';
  $handler->display->display_options['fields']['field_ap_status']['element_default_classes'] = FALSE;
  /* Field: Content: Progress overview */
  $handler->display->display_options['fields']['field_ap_progress_overview']['id'] = 'field_ap_progress_overview';
  $handler->display->display_options['fields']['field_ap_progress_overview']['table'] = 'field_data_field_ap_progress_overview';
  $handler->display->display_options['fields']['field_ap_progress_overview']['field'] = 'field_ap_progress_overview';
  $handler->display->display_options['fields']['field_ap_progress_overview']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_ap_progress_overview']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_ap_progress_overview']['alter']['more_link_text'] = 'More';
  $handler->display->display_options['fields']['field_ap_progress_overview']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['field_ap_progress_overview']['element_class'] = 'col-md-2';
  $handler->display->display_options['fields']['field_ap_progress_overview']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ap_progress_overview']['type'] = 'jquery_expander';
  $handler->display->display_options['fields']['field_ap_progress_overview']['settings'] = array(
    'expandText' => 'More',
    'expandPrefix' => '...',
    'slicePoint' => '150',
    'collapseTimer' => '',
    'userCollapseText' => 'Less',
    'userCollapsePrefix' => '',
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
    'action_point' => 'action_point',
  );
  /* Filter criterion: Content: Status (field_ap_status) */
  $handler->display->display_options['filters']['field_ap_status_value']['id'] = 'field_ap_status_value';
  $handler->display->display_options['filters']['field_ap_status_value']['table'] = 'field_data_field_ap_status';
  $handler->display->display_options['filters']['field_ap_status_value']['field'] = 'field_ap_status_value';
  $handler->display->display_options['filters']['field_ap_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ap_status_value']['expose']['operator_id'] = 'field_ap_status_value_op';
  $handler->display->display_options['filters']['field_ap_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_ap_status_value']['expose']['operator'] = 'field_ap_status_value_op';
  $handler->display->display_options['filters']['field_ap_status_value']['expose']['identifier'] = 'field_ap_status_value';
  $handler->display->display_options['filters']['field_ap_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Meeting date -  start date (field_ap_date) */
  $handler->display->display_options['filters']['field_ap_date_value']['id'] = 'field_ap_date_value';
  $handler->display->display_options['filters']['field_ap_date_value']['table'] = 'field_data_field_ap_date';
  $handler->display->display_options['filters']['field_ap_date_value']['field'] = 'field_ap_date_value';
  $handler->display->display_options['filters']['field_ap_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ap_date_value']['expose']['operator_id'] = 'field_ap_date_value_op';
  $handler->display->display_options['filters']['field_ap_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_ap_date_value']['expose']['operator'] = 'field_ap_date_value_op';
  $handler->display->display_options['filters']['field_ap_date_value']['expose']['identifier'] = 'field_ap_date_value';
  $handler->display->display_options['filters']['field_ap_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_ap_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Meeting Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Topic/Theme/Country (field_ap_topic) */
  $handler->display->display_options['filters']['field_ap_topic_value']['id'] = 'field_ap_topic_value';
  $handler->display->display_options['filters']['field_ap_topic_value']['table'] = 'field_data_field_ap_topic';
  $handler->display->display_options['filters']['field_ap_topic_value']['field'] = 'field_ap_topic_value';
  $handler->display->display_options['filters']['field_ap_topic_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_ap_topic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['operator_id'] = 'field_ap_topic_value_op';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['label'] = 'Topic/Theme/Country';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['operator'] = 'field_ap_topic_value_op';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['identifier'] = 'field_ap_topic_value';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_field'] = 'field_ap_topic';
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_ap_topic_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Lead (field_ap_responsibility:target_id) (reference filter) */
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['id'] = 'field_ap_responsibility_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['table'] = 'field_data_field_ap_responsibility';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['field'] = 'field_ap_responsibility_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['expose']['operator_id'] = 'field_ap_responsibility_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['expose']['label'] = 'Lead';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['expose']['operator'] = 'field_ap_responsibility_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['expose']['identifier'] = 'field_ap_responsibility_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_ap_responsibility_target_id_entityreference_filter']['reference_display'] = 'iasc_ap_leads:entityreference_1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'iasc/action-points';
  $export['iasc_action_points'] = $view;

  $view = new view();
  $view->name = 'iasc_ap_leads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'IASC Action Points Leads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ap_responsibility' => 'ap_responsibility',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['iasc_ap_leads'] = $view;

  return $export;
}
