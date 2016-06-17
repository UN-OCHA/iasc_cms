<?php
/**
 * @file
 * Code for Add discussion button.
 */

$plugin = array(
  'title' => t('Post a Discussion'),
  'description' => t('Provides a button to Add a discussion'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_discussion_add_discussion_render',
);

/**
 * Renders the widget.
 */
function iasc_discussion_add_discussion_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $section = oa_core_get_section_context();

  $classes = array(
    'oa-buttons',
    'btn',
    'btn-inverse',
  );

  $items = l(t('Add a Discussion'), 'node/add/oa-discussion-post',
    array(
      'attributes' => array('class' => $classes),
      'query' => array('oa_section_ref' => $section),
    )
  );

  $block->content = $items;

  return $block;
}
