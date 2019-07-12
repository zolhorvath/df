@dfs_one @api
Feature: DFS ONE: Homepage
  In order to prove that dfs_one was enabled correctly
  As a developer
  I need to check for elements on the front page

  @bf41f474
  Scenario: Block: Example Hero
    Given I am on the homepage
    Then I should see "Take your place among the stars"
    And I should see "Nexus Travel makes space tourism"

  @61ecc9b8
  Scenario: Block: Example Text
    Given I am on the homepage
    Then I should see "What's new"
    And I should see "Top tips for your first space trip"

  @9a461c09
  Scenario: Block: Example Blocks
    Given I am on the homepage
    Then I should see "Calling all astronauts"
    Then I should see "Orbital photo shoots"

  @5cb84acd
  Scenario: Block: User login
    Given I am on the homepage
    Then I should see "Login"
