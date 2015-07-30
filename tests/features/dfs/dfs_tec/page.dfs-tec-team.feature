@dfs_tec
Feature: DFS TEC: Team page
  In order to prove that dfs_tec was enabled correctly
  As a developer
  I need to check for the team page and team view

  Scenario: Team: Default
    Given I am at "/team"
    Then I should see the heading "Your Team"
    And I should see the "form" element with the "class" attribute set to "views-exposed-form" in the "secondary" region
    And I should see "Bob Smith" in the "secondary" region
    And I should see "CEO" in the "secondary" region
    And I should see "bobsmith@tec.com" in the "secondary" region
    And I should see "503-687-5309" in the "secondary" region
