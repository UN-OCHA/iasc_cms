@meeting
Feature: meeting
  In order to convey when various groups are meeting
  As a Content Contributor or above
  I need to be able to create meetings.

  @api @IASC-9
  Scenario: Create a meeting with an existing document
    Given I am logged in as the test "space user"
    When I visit "/"
    Then I should see the text "Powerful"