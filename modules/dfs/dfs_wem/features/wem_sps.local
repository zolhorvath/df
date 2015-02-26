Feature: WEM Demo Site Preview System

  @javascript
  Scenario: Confirm the content reviewer can use sps
    Given I am on the homepage
    When I fill in "edit-name" with "PaulSimon"
    And I fill in "edit-pass" with "password"
    And I press "Log in"
    Then I should see "Munich. There's Beer. But there's more." 
    When I follow "Munich. There's Beer. But there's more."
    Then I should see "Oktoberfest"
    When I follow "New draft"
    And I fill in "edit-title" with "Munich is Calling"
    When I select "Munich Calling" from "edit-field-collection-und-0-value"
    And I press "Save"
    Then I should see "Munich is Calling"
    And I should see "WEM News Munich is Calling has been updated."
    Given I am on the homepage
    Then I should see "Munich. There's Beer. But there's more."
    When I press "Interactive Preview"
    Then I should see "Site Preview"
    When I select "Collection" from "edit-active-condition-container-active-condition-selector"
    Given I wait for AJAX to finish
    Then I should see "Select a Collection"
    When I select "Munich Calling" from "edit-active-condition-container-collection-condition-widget-collection"
    And I press "Enable Preview"
    Then I should see "Munich is Calling"
