@df
Feature: Demo Framework: Homepage
  In order to prove that the installation profile has installed correctly
  As a developer
  I need to check for elements on the front page

  Scenario: Welcome
    Given I am on the homepage
    Then the response status code should be 200
    And I should see the heading "Welcome"

  Scenario: Block: Recent content view
    Given I am on the homepage  
    Then I should see "Recent content" in the "middle" region
    And I should see the "div" element with the "class" attribute set to "recent-content" in the "middle" region

  Scenario: Block: User login (anon)
    Given I am on the homepage
    Then I should see "User login" in the "sidebar" region

  @api
  Scenario: Block: User login (admin)
    Given I am logged in as a user with the "administrator" role
    And I am on the homepage
    Then I should not see "User login" in the sidebar region
