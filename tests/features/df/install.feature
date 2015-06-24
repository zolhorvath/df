@df
Feature: Demo Framework homepage
  In order to prove that the installation profile has installed correctly
  As a developer
  I need to check that the DF Admin page is available

  Scenario: Homepage (anon)
    Given I am on the homepage
    Then the response status code should be 403

  @api
  Scenario: Homepage (admin)
    Given I am logged in as a user with the "administrator" role
    And I am on the homepage
    Then the response status code should be 200
    And I should see "Demo Framework" in the "h1" element
    And I should not see "Development Demo" in the "content" region
    And I should see "WEM Demo" in the "content" region
