@dfs_dev @api
Feature: DFS ONE: Homepage
  In order to prove that dfs_one was enabled correctly
  As a developer
  I need to check for elements on the front page

  @bf41f474
  Scenario: Block: Example Hero
    Given I am on the homepage
    Then I should see "Colosseum"
    And I should see "Built in 70–80 AD"

  @61ecc9b8
  Scenario: Block: Example Text
    Given I am on the homepage
    Then I should see "Flavian Amphitheatre"
    And I should see "hypogeum"

  @9a461c09
  Scenario: Block: Example Map
    Given I am on the homepage
    Then I should see "00184 Roma RM"

  @5cb84acd
  Scenario: Block: User login
    Given I am on the homepage
    Then I should see "Log in"
