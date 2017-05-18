<?php
/**
 * @file
 * View Hook implementations for the IASC Announcements feature.
 */

/**
 * Implements hook_views_query_alter().
 */
function iasc_announcement_views_query_alter(&$view, &$query) {
  if ('iasc_announcement' == $view->name && 'page_featured_home' == $view->current_display) {

    // Traverse through the 'where' part of the query.
    foreach ($query->where as &$condition_group) {
      foreach ($condition_group['conditions'] as &$condition) {
        // Correct the query to not match Other.
        if ($condition['field'] == 'og_membership.gid') {
          // @TODO: db_select().
          $result = db_query("
            SELECT n.nid
            FROM {node} n
            WHERE n.title = :title
            AND n.type = :type",
            array(':title' => 'Other', ':type' => 'oa_space'));
          $nid = $result->fetchField();

          if (!empty($nid)) {
            $condition['value'] = $nid;
            $condition['operator'] = '<>';
          }

          break;
        }
      }
    }
  }
}
