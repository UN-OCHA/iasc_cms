<?php

/**
 * @file
 * iasc_action_points module drush integration.
 */

/**
 * Implements hook_drush_command().
 *
 * @see drush_parse_command()
 */
function iasc_action_points_drush_command() {
  $items = array();

  $items['iasc-ap-grants'] = array(
    'description' => "Set AP grants based on focal points",
    'arguments' => array(),
    'options' => array(),
    'drupal dependencies' => array(),
    'aliases' => array(),
  );

  return $items;
}

/**
 * Update grants.
 */
function drush_iasc_action_points_iasc_ap_grants() {
  // Load all action points.
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'action_point');

  $results = $query->execute();
  // For each action point, load focal points.
  if (isset($results['node'])) {
    $aps_nid = array_keys($results['node']);
    $aps = entity_load('node', $aps_nid);
    foreach ($aps as $ap) {
      $fp_nids = array();
      foreach ($ap->field_contact[LANGUAGE_NONE] as $tid) {
        $fp_nids[] = $tid['target_id'];
      }
      $fps = entity_load('node', $fp_nids);
      foreach ($fps as $fp) {
        $email = $fp->field_email[LANGUAGE_NONE][0]['value'];
        if ($account = user_load_by_mail($email)) {
          // Grant rights to the AP node.
          $grants = array();
          $grants[] = array(
            'gid' => $account->uid,
            'realm' => 'nodeaccess_uid',
            'grant_view' => 1,
            'grant_update' => 1,
            'grant_delete' => 0,
          );
          node_access_write_grants($ap, $grants, $grants[0]['realm']);
          $grants[] = array(
            'gid' => 2,
            'realm' => 'nodeaccess_rid',
            'grant_view' => TRUE,
            'grant_update' => 0,
            'grant_delete' => 0,
          );
          $grants[] = array(
            'gid' => 1,
            'realm' => 'nodaccess_rid',
            'grant_view' => TRUE,
            'grant_update' => 0,
            'grant_delete' => 0,
          );
          node_access_write_grants($ap, $grants, 'nodeaccess_rid');
          // Save role and user grants to our own table.
          db_delete('nodeaccess')
            ->condition('nid', $ap->nid)
            ->execute();
          foreach ($grants as $grant) {
            $id = db_insert('nodeaccess')
              ->fields(array(
                'nid' => $ap->nid,
                'gid' => $grant['gid'],
                'realm' => $grant['realm'],
                'grant_view' => $grant['grant_view'],
                'grant_update' => $grant['grant_update'],
                'grant_delete' => $grant['grant_delete'],
              ))
            ->execute();
          }
        }
      }
    }
  }
}
