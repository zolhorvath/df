@dfs_tec
Feature: DFS TEC: Services page
  In order to prove that dfs_tec was enabled correctly
  As a developer
  I need to check for the services page and services view

  Scenario: Services: Default
    Given I am at "/services"
    Then I should see the heading "Jump Start Your Business"
    And I should see "Digital Consulting" in the "secondary" region
    And I should see "Business Transformation" in the "secondary" region
    And I should see "System Integration" in the "secondary" region
    And I should see "Research Analysis" in the "secondary" region
