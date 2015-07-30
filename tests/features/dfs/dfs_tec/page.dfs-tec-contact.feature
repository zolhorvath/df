@dfs_tec
Feature: DFS TEC: Contact page
  In order to prove that dfs_tec was enabled correctly
  As a developer
  I need to check for the services page and services view

  Scenario: Contact: Default
    Given I am at "/contact"
    Then I should see the heading "Contact Our Team"
    And I should see the "form" element with the "class" attribute set to "contact-form" in the "content" region
    And I should see the "section" element with the "id" attribute set to "block-contacthero" in the "header" region
