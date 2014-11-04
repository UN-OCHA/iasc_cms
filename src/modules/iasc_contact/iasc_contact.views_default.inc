<?php
/**
 * @file
 * iasc_contact.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iasc_contact_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_contacts';
  $view->description = 'Content panes and pages for contacts.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IASC Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_photo' => 'field_photo',
    'field_title' => 'field_last_name',
    'field_first_name' => 'field_last_name',
    'field_last_name' => 'field_last_name',
    'field_position' => 'field_position',
    'field_organisation' => 'field_organisation',
    'field_department' => 'field_department',
    'field_membership' => 'field_membership',
    'field_email' => 'field_email',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'field_address_country' => 'field_address_country',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_administrative_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no contacts found. Please try a different search.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  /* Field: Field: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organisation']['id'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['fields']['field_organisation']['field'] = 'field_organisation';
  /* Field: Position and Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['ui_name'] = 'Position and Department';
  $handler->display->display_options['fields']['field_department']['label'] = 'Position and Department';
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['text'] = '<strong>Position:</strong> [field_position]<br />
<strong>Department:</strong> [field_department]';
  /* Field: Content: Body Membership */
  $handler->display->display_options['fields']['field_membership']['id'] = 'field_membership';
  $handler->display->display_options['fields']['field_membership']['table'] = 'field_data_field_membership';
  $handler->display->display_options['fields']['field_membership']['field'] = 'field_membership';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['alter']['text'] = '[field_address_administrative_area], ';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Location';
  $handler->display->display_options['fields']['field_address_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_country']['alter']['text'] = '[field_address_administrative_area] [field_address_country]';
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Department (field_department) */
  $handler->display->display_options['filters']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_department_value']['group'] = 1;
  $handler->display->display_options['filters']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['operator_id'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_value']['expose']['operator'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_field'] = 'field_department';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Organization (field_organisation) */
  $handler->display->display_options['filters']['field_organisation_tid']['id'] = 'field_organisation_tid';
  $handler->display->display_options['filters']['field_organisation_tid']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['filters']['field_organisation_tid']['field'] = 'field_organisation_tid';
  $handler->display->display_options['filters']['field_organisation_tid']['value'] = '';
  $handler->display->display_options['filters']['field_organisation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organisation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['operator_id'] = 'field_organisation_tid_op';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['operator'] = 'field_organisation_tid_op';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['identifier'] = 'field_organisation_tid';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_organisation_tid']['vocabulary'] = 'hosts';

  /* Display: Admin Contact Search Page */
  $handler = $view->new_display('page', 'Admin Contact Search Page', 'page');
  $handler->display->display_options['display_description'] = 'This is a role restricted page.';
  $handler->display->display_options['path'] = 'admin/search-contacts';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_contacts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'bio_short';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Body Membership (field_membership) */
  $handler->display->display_options['relationships']['field_membership_value']['id'] = 'field_membership_value';
  $handler->display->display_options['relationships']['field_membership_value']['table'] = 'field_data_field_membership';
  $handler->display->display_options['relationships']['field_membership_value']['field'] = 'field_membership_value';
  $handler->display->display_options['relationships']['field_membership_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Organization (field_organisation) */
  $handler->display->display_options['sorts']['field_organisation_tid']['id'] = 'field_organisation_tid';
  $handler->display->display_options['sorts']['field_organisation_tid']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['sorts']['field_organisation_tid']['field'] = 'field_organisation_tid';
  $handler->display->display_options['sorts']['field_organisation_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_organisation_tid']['expose']['label'] = 'Organization';
  /* Sort criterion: Content: Department (field_department) */
  $handler->display->display_options['sorts']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['sorts']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['sorts']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['sorts']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_department_value']['expose']['label'] = 'Department';
  /* Sort criterion: Field: Position (field_position) */
  $handler->display->display_options['sorts']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['sorts']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['sorts']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['sorts']['field_position_value']['relationship'] = 'field_membership_value';
  $handler->display->display_options['sorts']['field_position_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_position_value']['expose']['label'] = 'Position';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field collection item: Body (field_body_membership) */
  $handler->display->display_options['filters']['field_body_membership_target_id']['id'] = 'field_body_membership_target_id';
  $handler->display->display_options['filters']['field_body_membership_target_id']['table'] = 'field_data_field_body_membership';
  $handler->display->display_options['filters']['field_body_membership_target_id']['field'] = 'field_body_membership_target_id';
  $handler->display->display_options['filters']['field_body_membership_target_id']['relationship'] = 'field_membership_value';
  $handler->display->display_options['filters']['field_body_membership_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_body_membership_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_body_membership_target_id']['expose']['operator_id'] = 'field_body_membership_target_id_op';
  $handler->display->display_options['filters']['field_body_membership_target_id']['expose']['label'] = 'Body Membership';
  $handler->display->display_options['filters']['field_body_membership_target_id']['expose']['operator'] = 'field_body_membership_target_id_op';
  $handler->display->display_options['filters']['field_body_membership_target_id']['expose']['identifier'] = 'field_body_membership_target_id';
  $handler->display->display_options['filters']['field_body_membership_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_body_membership_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Organization (field_organisation) */
  $handler->display->display_options['filters']['field_organisation_tid']['id'] = 'field_organisation_tid';
  $handler->display->display_options['filters']['field_organisation_tid']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['filters']['field_organisation_tid']['field'] = 'field_organisation_tid';
  $handler->display->display_options['filters']['field_organisation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organisation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['operator_id'] = 'field_organisation_tid_op';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['operator'] = 'field_organisation_tid_op';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['identifier'] = 'field_organisation_tid';
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_organisation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organisation_tid']['vocabulary'] = 'hosts';
  /* Filter criterion: Content: Department (field_department) */
  $handler->display->display_options['filters']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_department_value']['group'] = 1;
  $handler->display->display_options['filters']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['operator_id'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_value']['expose']['operator'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_field'] = 'field_department';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Position (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['relationship'] = 'field_membership_value';
  $handler->display->display_options['filters']['field_position_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_position_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_position_value']['expose']['operator_id'] = 'field_position_value_op';
  $handler->display->display_options['filters']['field_position_value']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['field_position_value']['expose']['operator'] = 'field_position_value_op';
  $handler->display->display_options['filters']['field_position_value']['expose']['identifier'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_position_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_position_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_position_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_position_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_position_value']['expose']['autocomplete_dependent'] = 0;
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
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'title' => '',
      'field_body_membership_target_id' => '',
      'field_organisation_tid' => '',
      'field_department_value' => '',
    ),
    'sorts' => array(
      'field_organisation_tid' => '',
      'title' => '',
      'field_position_value' => '',
    ),
  );
  $export['search_contacts'] = $view;

  return $export;
}
