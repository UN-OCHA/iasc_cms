<?php

define('IASC_LOGIN_AUTH_URL', 'http://auth.dev.humanitarian.id/');
define('IASC_LOGIN_AUTH_SECRET', '_wLCHS0FzCm4L-k5yHKhBhEbpV9TtXccbdzW3wenmH0');
define('IASC_LOGIN_CLIENT_ID', 'iasc-dev');

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
        // if user does not exist in HID, register user
        if (!iasc_login_hid_exists($user->mail)) {
          $fullname = $user->field_user_display_name[LANGUAGE_NONE][0]['value'];
          $fullname_array = explode(' ', $fullname);
          $fname = array_shift($fullname_array);
          $lname = implode(' ', $fullname_array);
          iasc_login_hid_register($user->mail, $fname, $lname);
        }
        // insert user in openid_connect authmap
        db_insert('authmap')
          ->fields(array(
            'uid' => $user->uid,
            'authname' => $user->mail,
            'module' => 'openid_connect_generic'
          ))
          ->execute();
      }
    }
  }
}

function iasc_login_hid_exists($mail) {
  $base_url = IASC_LOGIN_AUTH_URL;
  $secret = IASC_LOGIN_AUTH_SECRET;
  $access_key = hash('sha256', $mail . $secret);
  $client_id = IASC_LOGIN_CLIENT_ID;
  $data = array(
    'client_key' => $client_id,
    'access_key' => $access_key,
    'email' => $mail
  );
  $headers = array('Content-Type' => 'application/json');
  $options = array(
    'headers' => $headers,
    'method' => 'POST',
    'data' => json_encode($data)
  );
  $out = drupal_http_request($base_url . 'api/users', $options);
  $resp = json_decode($out->data);
  if (isset($resp->status) && $resp->status == 'error') {
    return false;
  }
  else {
    return true;
  }
}

function iasc_login_hid_register($mail, $fname, $lname) {
  $secret = IASC_LOGIN_AUTH_SECRET;
  $data = array(
    'client_key' => IASC_LOGIN_CLIENT_ID,
    'email' => $mail,
    'nameFirst' => $fname,
    'nameLast' => $lname,
    'active' => 1,
    'adminName' => 'IASC',
    'emailFlag' => 1,
    'adminEmail' => 'iasccorrespondence@un.org'
  );
  $flat = '';
  foreach ($data as $key => $datum) {
    if ($key != 'client_key') {
      $flat .= $datum;
    }
  }
  $data['access_key'] = hash('sha256', $flat.$secret);
  $headers = array('Content-Type' => 'application/json');
  $options = array(
    'headers' => $headers,
    'method' => 'POST',
    'data' => json_encode($data),
  );
  drupal_http_request(IASC_LOGIN_AUTH_URL.'api/register', $options);
}

