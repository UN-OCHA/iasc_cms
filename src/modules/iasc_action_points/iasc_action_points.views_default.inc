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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Meeting';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Meeting date */
  $handler->display->display_options['fields']['field_ap_date']['id'] = 'field_ap_date';
  $handler->display->display_options['fields']['field_ap_date']['table'] = 'field_data_field_ap_date';
  $handler->display->display_options['fields']['field_ap_date']['field'] = 'field_ap_date';
  $handler->display->display_options['fields']['field_ap_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_ap_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Topic/Theme */
  $handler->display->display_options['fields']['field_ap_topic']['id'] = 'field_ap_topic';
  $handler->display->display_options['fields']['field_ap_topic']['table'] = 'field_data_field_ap_topic';
  $handler->display->display_options['fields']['field_ap_topic']['field'] = 'field_ap_topic';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Action Point';
  /* Field: Content: Responsibility */
  $handler->display->display_options['fields']['field_ap_responsibility']['id'] = 'field_ap_responsibility';
  $handler->display->display_options['fields']['field_ap_responsibility']['table'] = 'field_data_field_ap_responsibility';
  $handler->display->display_options['fields']['field_ap_responsibility']['field'] = 'field_ap_responsibility';
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
  $handler->display->display_options['fields']['field_contact']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_contact']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contact']['delta_offset'] = '0';
  /* Field: Content: Deadline */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Timeframe';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
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
  /* Field: Content: Progress overview */
  $handler->display->display_options['fields']['field_ap_progress_overview']['id'] = 'field_ap_progress_overview';
  $handler->display->display_options['fields']['field_ap_progress_overview']['table'] = 'field_data_field_ap_progress_overview';
  $handler->display->display_options['fields']['field_ap_progress_overview']['field'] = 'field_ap_progress_overview';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'iasc/action-points';
  $export['iasc_action_points'] = $view;

  return $export;
}
