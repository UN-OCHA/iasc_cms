<?php
/**
 * @file
 * Code for Add news item button.
 */

$plugin = array(
  'title' => t('Add a News Item'),
  'description' => t('Provides a button to add a News item'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_announcement_add_news_render',
);

/**
 * Renders the widget.
 */
function iasc_announcement_add_news_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $section = oa_core_get_section_context();

  $classes = array(
    'oa-buttons',
    'btn',
    'btn-inverse',
  );

  $items = l(t('Add a News Item'), 'node/add/announcement',
    array(
      'attributes' => array('class' => $classes),
      'query' => array('oa_section_ref' => $section),
    )
  );

  $block->content = $items;

  return $block;
}
