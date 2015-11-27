<?php
/**
 * @file
 * iasc_document.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function iasc_document_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_wiki_page:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_wiki_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'iasc_resource';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ee5c0fb7-45ed-4ebe-aa06-4ece47b11f96';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a4fd9c31-39e8-4032-a4ac-e64c32e84c1b';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_document_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a4fd9c31-39e8-4032-a4ac-e64c32e84c1b';
  $display->content['new-a4fd9c31-39e8-4032-a4ac-e64c32e84c1b'] = $pane;
  $display->panels['contentmain'][0] = 'new-a4fd9c31-39e8-4032-a4ac-e64c32e84c1b';
  $pane = new stdClass();
  $pane->pid = 'new-f9b6d89c-fd64-4cc6-b928-a249a85bea37';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9b6d89c-fd64-4cc6-b928-a249a85bea37';
  $display->content['new-f9b6d89c-fd64-4cc6-b928-a249a85bea37'] = $pane;
  $display->panels['contentmain'][1] = 'new-f9b6d89c-fd64-4cc6-b928-a249a85bea37';
  $pane = new stdClass();
  $pane->pid = 'new-12db48c4-d501-4531-96b7-6ac12cf11c21';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:og_group_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '12db48c4-d501-4531-96b7-6ac12cf11c21';
  $display->content['new-12db48c4-d501-4531-96b7-6ac12cf11c21'] = $pane;
  $display->panels['contentmain'][2] = 'new-12db48c4-d501-4531-96b7-6ac12cf11c21';
  $pane = new stdClass();
  $pane->pid = 'new-e2313516-af03-4a64-b7ef-7b9fc5e96bf6';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'panopoly_day',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
      'show_repeat_rule' => 'show',
      'show_remaining_days' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e2313516-af03-4a64-b7ef-7b9fc5e96bf6';
  $display->content['new-e2313516-af03-4a64-b7ef-7b9fc5e96bf6'] = $pane;
  $display->panels['contentmain'][3] = 'new-e2313516-af03-4a64-b7ef-7b9fc5e96bf6';
  $pane = new stdClass();
  $pane->pid = 'new-610d4bb7-600e-40d2-ab94-300555733294';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '610d4bb7-600e-40d2-ab94-300555733294';
  $display->content['new-610d4bb7-600e-40d2-ab94-300555733294'] = $pane;
  $display->panels['footer'][0] = 'new-610d4bb7-600e-40d2-ab94-300555733294';
  $pane = new stdClass();
  $pane->pid = 'new-50f9ebb8-0037-4594-aca8-9796780cd3ba';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product_thumbnail';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'panopoly_image_thumbnail',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '50f9ebb8-0037-4594-aca8-9796780cd3ba';
  $display->content['new-50f9ebb8-0037-4594-aca8-9796780cd3ba'] = $pane;
  $display->panels['sidebar'][0] = 'new-50f9ebb8-0037-4594-aca8-9796780cd3ba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_wiki_page:default:teaser'] = $panelizer;

  return $export;
}
