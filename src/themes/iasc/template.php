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

  // Add a custom jQuery UI theme.
  $css[$oa_radix_path . '/assets/vendor/jqueryui/jquery-ui-1.10.0.custom.css']['data'] = $oa_radix_path . '/assets/vendor/jqueryui/jquery-ui-1.10.0.custom.css';
}

/**
 * Implements hook_js_alter().
 */
function iasc_js_alter(&$js) {
  $oa_radix_path = drupal_get_path('theme', 'oa_radix');
  // Add this script so that the jquery ui dialogs have the correct close button classes/etc.
  $js[$oa_radix_path . '/assets/javascripts/script.js']['data'] = $oa_radix_path . '/assets/javascripts/script.js';
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
  drupal_add_css('//fonts.googleapis.com/css?family=Montserrat:400,700', 'external');
  drupal_add_css('//fonts.googleapis.com/css?family=Merriweather:400,400italic,700,700italic', 'external');

  // Don't need the navbar for our theme.
  unset($vars['page']['page_top']['navbar']);

  // Adding Touch icons.
  drupal_add_html_head_link(array(
    'rel'  => 'apple-touch-icon-precomposed',
    'href' => base_path() . drupal_get_path('theme', 'iasc') . '/apple-touch-icon-precomposed.png',
  ));

  $data = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'msapplication-TileColor',
      'content' => '#000000',
    ),
  );
  drupal_add_html_head($data, 'msapplication-TileColor');

  $data = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'msapplication-TileImage',
      'content' => base_path() . drupal_get_path('theme', 'iasc') . '/favicon-144.png',
    ),
  );
  drupal_add_html_head($data, 'msapplication-TileImage');

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

  // Remove primary tabs for anon users.
  if (!$variables['logged_in']) {
    unset($variables['primarytabs']);
  }

}

/**
 * Implements hook_page_alter().
 */
function iasc_page_alter(&$page) {
  /* Only print class="row" on pages that use panels to align the ones
  that don't. */
  if (panels_get_current_page_display()) {
    $page['content']['#prefix'] = '<div class="row">';
    $page['content']['#suffix'] = '</div>';
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

    // Add destination to login link.
    if ('user/login' == $link['href']) {
      $alias = drupal_get_path_alias();
      if ('user/login' != $alias) {
        $dest = array('destination' => $alias);
        $link['query'] = $dest;
      }
    }
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
}

/**
 * Implements theme_file_icon().
 */
function iasc_file_icon($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);
  return '<span class="icons-page"></span> ';
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

/**
 * Implements hook_preprocess_views_view_fields().
 *
 * Generic preprocess that is needed to call more specific templates.
 */
function iasc_preprocess_views_view_fields(&$vars) {
  if (isset($vars['view']->name)) {
    $function = __FUNCTION__ . '__' . $vars['view']->name;

    if (function_exists($function)) {
      $function($vars);
    }
  }
}

/**
 * Custom preprocess for search_contacts view.
 *
 * @see template_preprocess_views_view_field()
 */
function iasc_preprocess_views_view_fields__search_contacts(&$vars) {
  if ('panel_pane_contacts' == $vars['view']->current_display) {
    $vars['has_photo'] = !empty($vars['field_photo']);
  }
}


/**
 * Implements hook_preprocess_views_view_field().
 *
 * Generic preprocess that is needed to call more specific templates.
 */
function iasc_preprocess_views_view_field(&$vars) {
  if (isset($vars['view']->name)) {
    $function = __FUNCTION__ . '__' . $vars['view']->name;

    if (function_exists($function)) {
      $function($vars);
    }
  }
}

/**
 * Custom preprocess for oa_event_list view.
 *
 * @see template_preprocess_views_view_field()
 */
function iasc_preprocess_views_view_field__oa_event_list(&$vars) {
  if ('og_group_ref' == $vars['field']->field) {
    $space_id = oa_core_get_space_context();
    if ($vars['view']->exposed_data['og_group_ref_target_id'] == $space_id) {
      $vars['output'] = '';
    }
  }
}

/**
 * Implements template_preprocess_views_view().
 */
function iasc_preprocess_views_view(&$vars) {
  // Add the Login CTA block to document view pages.
  if ('iasc_document' == $vars['name']) {
    if ('page_resources' == $vars['display_id'] || 'page_meeting_documents' == $vars['display_id']) {
      if (user_is_anonymous()) {
        $vars['cta'] = module_invoke('iasc_configuration', 'block_view', 'resource_login_cta');
      }
    }
  }

  if ('oa_event_list' == $vars['name']) {
    if ('panel_pane_upcoming_meetings_filterable' == $vars['display_id']) {
      // Front page widget should link to /calendar.
      if (!drupal_is_front_page()) {
        /* Only show the View all Meetings link if the total rows is greater than
           the items per page. */
        if ($vars['view']->total_rows > $vars['view']->items_per_page) {
          $space_nid = $vars['view']->exposed_raw_input['og_group_ref_target_id'];
          $path = drupal_get_path_alias("node/$space_nid");
          $vars['meetings_link'] = l(
            t('View all Meetings'),
            "$path/meetings",
            array(
              'attributes' => array(
                'class' => array(
                  'oa-buttons',
                  'btn',
                  'btn-inverse',
                ),
              ),
            )
          );
        }
      }
      else {
        $vars['meetings_link'] = l(
          t('View all Meetings'),
          "calendar",
          array(
            'attributes' => array(
              'class' => array(
                'oa-buttons',
                'btn',
                'btn-inverse',
              ),
            ),
          )
        );
      }
    }
  }
}

/**
 * Implements template_preprocess_search_result().
 */
function iasc_preprocess_search_result(&$vars) {
  // Empty the author and date string.
  $vars['info'] = '';
}

/**
 * Implements theme_apachesolr_panels_info().
 *
 * Override themed search result information.
 */
function iasc_apachesolr_panels_info($variables) {
  $response = $variables['response'];
  $search = $variables['search'];
  if ($total = $response->response->numFound) {
    $start = $response->response->start + 1;
    $end = $response->response->start + count($response->response->docs);

    if (!empty($search['keys'])) {
      $info = t('Results %start - %end of %total for %keys', array(
          '%start' => $start,
          '%end' => $end,
          '%total' => $total,
          '%keys' => $search['keys'],
          ));
      $info .= t('.<br />To narrow your search, click on the facets located below the heading "Filter Search Results".
        To broaden your search, reset selected facets by clicking (-) next to each selected facet.');
    }
    else {
      $info = t('Results %start - %end of %total', array(
        '%start' => $start,
        '%end' => $end,
        '%total' => $total,
        ));
      $info .= t('.<br />To narrow your search, click on the facets located below the heading "Filter Search Results".
        To broaden your search, reset selected facets by clicking (-) next to each selected facet.');
    }

    return $info;
  }
}
