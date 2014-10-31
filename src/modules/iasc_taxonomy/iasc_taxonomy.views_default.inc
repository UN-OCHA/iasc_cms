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
    'image_style' => 'apps_logo',
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

  return $export;
}
