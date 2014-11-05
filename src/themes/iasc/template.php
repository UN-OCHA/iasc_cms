<?php
/**
 * @file
 * Theme functions
 */

require_once dirname(__FILE__) . '/includes/structure.inc';
require_once dirname(__FILE__) . '/includes/form.inc';
require_once dirname(__FILE__) . '/includes/menu.inc';
require_once dirname(__FILE__) . '/includes/comment.inc';
require_once dirname(__FILE__) . '/includes/node.inc';

/**
 * Implements hook_css_alter().
 */
function iasc_css_alter(&$css) {
  $oa_radix_path = drupal_get_path('theme', 'oa_radix');

  // Radix now includes compiled stylesheets for demo purposes.
  // We remove these from our subtheme since they are already included
  // in compass_radix.
  unset($css[$oa_radix_path . '/assets/stylesheets/oa_radix-style.css']);
  unset($css[$oa_radix_path . '/assets/stylesheets/oa_radix-print.css']);
}

/**
 * Implements template_preprocess_entity().
 */
function iasc_preprocess_entity(&$vars) {
  if ($vars['elements']['#bundle'] == "field_agenda_items" && $vars['elements']['#entity_type'] == "field_collection_item") {
    $combined_contacts = array();
    if (!empty($vars['elements']['field_contact'])) {
      $contacts = array_intersect_key($vars['elements']['field_contact'], array_flip(element_children($vars['elements']['field_contact'])));
      foreach ($contacts as $contact) {
        $combined_contacts[] = $contact['#markup'];
      }
    }

    if (!empty($vars['elements']['field_presenter_external'])) {
      $external_contacts = array_intersect_key($vars['elements']['field_presenter_external'], array_flip(element_children($vars['elements']['field_presenter_external'])));
      foreach ($external_contacts as $contact) {
        $combined_contacts[] = $contact['#markup'];
      }
    }
    $vars['elements']['combined_contacts'] = implode(', ', $combined_contacts);
  }
}

/**
 * Implements template_preprocess_html().
 */
function iasc_preprocess_html(&$vars) {
  // Add Google fonts.
  drupal_add_css('http://fonts.googleapis.com/css?family=Montserrat:400,700', 'external');
  drupal_add_css('http://fonts.googleapis.com/css?family=Merriweather:400,400italic,700,700italic', 'external');
}

/**
 * Implements template_preprocess_page().
 */
function iasc_preprocess_page(&$variables) {
  // Add copyright to theme.
  if ($copyright = theme_get_setting('copyright')) {
    $variables['copyright'] = check_markup($copyright['value'], $copyright['format']);
  }

  // User menu.
  $variables['utility_navigation'] = menu_navigation_links('user-menu');

  // Move Panel IPE on top of primary tabs.
  if (!empty($variables['page']['page_bottom']['panels_ipe'])) {
    $panels_ipe = $variables['page']['page_bottom']['panels_ipe'];
    unset($variables['page']['page_bottom']['panels_ipe']);
    array_push($variables['page']['panelipe'], $panels_ipe);
  }
}

/**
 * Implements template_preprocess_node().
 */
function iasc_preprocess_node(&$vars) {
  if ('oa_event' == $vars['type']) {
    // Don't show the room to anon users for all view modes.
    global $user;
    if (!$user->uid) {
      unset($vars['content']['field_room']);
    }
  }
}

/**
 * Implements hook_links__system_main_menu().
 */
function iasc_links__system_main_menu(&$vars) {
  unset($vars['links']['#sorted']);
  unset($vars['links']['#theme_wrappers']);
  $output = '';
  $output .= '<ul class="' . implode(' ', $vars['attributes']['class']) . '">';
  if (is_array($vars['links'])) {
    foreach ($vars['links'] as &$link) {
      if (!empty($link['#below'])) {
        $link['#attributes']['class'][] = 'dropdown';
        $link['#below']['#attributes']['class'][] = 'dropdown-menu';
      }
      $output .= render($link);
    }
  }
  $output .= '</ul>';

  return $output;
}

/**
 * Implements hook_links__system_secondary_menu().
 */
function iasc_links__system_secondary_menu($vars) {
  foreach ($vars['links'] as &$link) {
    $link['title'] = "<span>" . $link['title'] . "</span>";
    $link['html'] = TRUE;
  }
  return theme_links($vars);
}


/**
 * Implements hook_form_FORM_ID_alter().
 */
function iasc_form_panels_edit_style_type_form_alter(&$form, &$form_state, $form_id) {

  // Unset default panel styles.
  unset($form['style']['style']['#options']['oa_styles_well']);
  unset($form['style']['style']['#options']['oa_styles_oa_pane']);

  // And set primary styles as default.
  $form['style']['style']['#default_value'] = 'primary';
}

/**
 * Implements theme_pager().
 */
function iasc_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // Current is the page we are currently paged to.
  $pager_current = $pager_page_array[$element] + 1;
  // First is the first page listed by this pager piece (re quantity).
  $pager_first = $pager_current - $pager_middle + 1;
  // Last is the last page listed by this pager piece (re quantity).
  $pager_last = $pager_current + $quantity - $pager_middle;
  // Max is the maximum page number.
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first',
    array(
      'text' => (isset($tags[0]) ? $tags[0] : t('« first')),
      'element' => $element,
      'parameters' => $parameters,
    )
  );
  $li_previous = theme('pager_previous',
    array(
      'text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')),
      'element' => $element, 'interval' => 1,
      'parameters' => $parameters,
    )
  );
  $li_next = theme('pager_next',
    array(
      'text' => (isset($tags[3]) ? $tags[3] : t('next ›')),
      'element' => $element, 'interval' => 1,
      'parameters' => $parameters,
    )
  );
  $li_last = theme('pager_last',
    array(
      'text' => (isset($tags[4]) ? $tags[4] : t('last »')),
      'element' => $element,
      'parameters' => $parameters,
    )
  );

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous',
              array(
                'text' => $i,
                'element' => $element,
                'interval' => ($pager_current - $i),
                'parameters' => $parameters,
              )
            ),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('active'),
            'data' => '<a href="#">' . $i . '</a>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next',
              array(
                'text' => $i,
                'element' => $element,
                'interval' => ($i - $pager_current),
                'parameters' => $parameters,
              )
            ),
          );
        }
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pagination')),
    ));
  }
}

