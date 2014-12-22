<?php
/**
 * @file
 * iasc_document.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function iasc_document_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'IASC Products description';
  $fe_block_boxes->format = 'iasc_wysiwyg';
  $fe_block_boxes->machine_name = 'iasc_products_desc';
  $fe_block_boxes->body = '<p>IASC Products are guidelines, tools and documents endorsed by the IASC Working Group or IASC Principals and used by humanitarian actors in field or policy work.</p><p>Given the inclusive membership of the IASC, these products carry a very broad consensus within the humanitarian community and guide the work of many UN and Non-UN humanitarian partners.</p>';

  $export['iasc_products_desc'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Other Products description';
  $fe_block_boxes->format = 'iasc_wysiwyg';
  $fe_block_boxes->machine_name = 'other_products_desc';
  $fe_block_boxes->body = '<p><span>Other Products are guidelines, tools and documents not endorsed by the IASC Working Group or IASC Principals but used by humanitarian actors in field or policy work.</span></p>';

  $export['other_products_desc'] = $fe_block_boxes;

  return $export;
}
