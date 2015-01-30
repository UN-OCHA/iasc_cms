<?php

use Behat\Behat\Context\ClosuredContextInterface,
  Behat\Behat\Context\TranslatedContextInterface,
  Behat\Behat\Context\BehatContext,
  Behat\Behat\Exception\PendingException;
use Behat\Gherkin\Node\PyStringNode,
  Behat\Gherkin\Node\TableNode;
use Drupal\Component\Utility\Random;

/**
 * Features context.
 */
class FeatureContext extends Drupal\DrupalExtension\Context\DrupalContext
{

  /**
   * Initializes context.
   * Every scenario gets its own context object.
   *
   * @param array $parameters
   *  context parameters (set them in behat.yml)
   */
  public function __construct(array $parameters)
  {
    if (isset($parameters['drupal_users'])) {
      $this->drupal_users = $parameters['drupal_users'];
    }
  }

  /**
   * @BeforeSuite
   *
   * Prepare the test environment for behat execution.
   */
  public static function prepare($scope) {
    // Get context parameters.
    $parameters = $scope->getContextParameters();

    if (isset($parameters['drupal_users'])) {
      self::createTestUsers($parameters['drupal_users']);
    }
    else {
      throw new \RuntimeException('Missing drupal_users configuration in behat.yml.');
    }
  }

  /**
   * Create test users as defined in drupal_users parameter in behat.yml.
   */
  public static function createTestUsers($users) {
    foreach($users as $username => $details) {
      // Get rid for role.
      $role = user_role_load_by_name($details['role']);

      // Create user (and project)
      $user = (object) array(
        'name' => $username,
        'pass' => $details['password'],
        'roles' => array($role->rid),
        'status' => 1,
        'mail' => "$username@example.com",
        'init' => "$username@example.com",
      );

      // Clone user object, otherwise user_save() changes the password to the
      // hashed password.
      $account = clone $user;

      user_save($account, (array) $user);
    }
  }

  /**
   * @AfterSuite @database
   *
   * Clean the database after scenarios.
   */
  public static function cleanDB($scope)
  {
    // Get context parameters.
    $parameters = $scope->getContextParameters();

    if (isset($parameters['drupal_users'])) {
      self::cleanTestUsers($parameters['drupal_users']);
    }
    else {
      throw new \RuntimeException('Missing drupal_users configuration in behat.yml.');
    }
  }

  /**
   * Create test users as defined in drupal_users parameter in behat.yml.
   */
  public static function cleanTestUsers($users) {
    foreach($users as $username => $details) {
      $user = user_load_by_name($username);

      user_cancel(array(), $user->uid, 'user_cancel_delete');

      $batch = &batch_get();
      $batch['progressive'] = FALSE;
      batch_process();
    }
  }

  /**
   * @Given /^I am logged in as the test "([^"]*)"$/
   */
  public function iAmLoggedInAsTheTest($username) {
    if ($this->loggedIn() && $this->user->name == $username) {
      return TRUE;
    }

    $user = $this->fetchUser($username);
    $this->user = user_load_by_name($username);
    $this->user->pass = $user['password'];
    $this->user->role = $user['role'];

    try {
      $this->login();
    }
    catch (Exception $e) {
      // Adding this in since at the moment there's no log out link on the page.
      if ($e->getMessage() == sprintf("Failed to log in as user '%s' with role '%s'", $this->user->name, $this->user->role)) {
        $session = $this->getSession();
        $page = $session->getPage();
        $element = $page->find('css', 'body.logged-in');
        if (null === $element) {
          throw new \LogicException('Could not find the element');
        }
      }
    }
  }


  /**
   * @defgroup helper functions
   * @{
   */

  /**
   * Helper function to fetch user passwords stored in behat.local.yml.
   *
   * @param string $name
   *   The username to fetch the user details for.
   *
   * @return array
   *   The matching user or FALSE on error.
   */
  public function fetchUser($username) {
    $property_name = 'drupal_users';

    try {
      $property = $this->$property_name;
      $user = $property[$username];
      return $user;
    } catch (Exception $e) {
      throw new Exception("Non-existent user for $property_name:$name. Please check your behat.yml.");
    }
  }
}
