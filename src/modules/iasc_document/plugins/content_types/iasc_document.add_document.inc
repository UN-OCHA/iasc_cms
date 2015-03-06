<?php
/**
 * @file
 * Code for Add document button.
 */

$plugin = array(
  'title' => t('Add a Document'),
  'description' => t('Provides a button to Add a document'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_document_add_document_render',
);

/**
 * Renders the widget.
 */
function iasc_document_add_document_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $section = oa_core_get_section_context();

  $classes = array(
    'oa-buttons',
    'btn',
    'btn-inverse',
  );

  $items = l(t('Add a Document'), 'node/add/oa-wiki-page',
    array(
      'attributes' => array('class' => $classes),
      'query' => array('oa_section_ref' => $section),
    )
  );

  $block->content = $items;

  return $block;
}
