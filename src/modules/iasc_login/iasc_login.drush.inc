<?php

function iasc_login_drush_command() {
  $items = array();

  $items['iasc-login-migrate'] = array(
    'description' => 'Migrate Drupal users to the HID auth system',
  );

  return $items;
}

function drush_iasc_login_migrate() {
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'user')
    ->propertyCondition('status', 1)
    ->execute();
  if (isset($result['user'])) {
    $uids = array_keys($result['user']);
    $users = entity_load('user', $uids);
    
    $role = user_role_load_by_name('group login');
    foreach ($users as $user) {
      if (!user_has_role($role->rid, $user)) {
        echo $user->mail."\n";
      }
    }
  }
}

