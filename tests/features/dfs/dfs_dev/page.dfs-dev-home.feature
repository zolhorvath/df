@dfs_dev
Feature: DFS DEV: Homepage
  In order to prove that dfs_dev was enabled correctly
  As a developer
  I need to check for elements on the front page

  Scenario: Block: Example Slideshow
    Given I am on the homepage
    Then I should see "Example Slideshow" in the "primary" region
    And I should see "Who likes blocks?" in the "primary" region

  Scenario: Block: Example Content Reference
    Given I am on the homepage  
    Then I should see "Example Content Reference" in the "primary" region
    And I should see "Donec quam felis ultricies" in the "primary" region

  Scenario: Block: Example Hero
    Given I am on the homepage
    Then I should see "Example Hero" in the "secondary" region
    And I should see "We like blocks" in the "secondary" region

  Scenario: Block: Example Map
    Given I am on the homepage
    Then I should see "Example Map" in the "secondary" region

  Scenario: Block: Basic
    Given I am on the homepage
    Then I should see "Block vero eos et" in the "middle" region
    And I should see "Quis aute Block" in the "middle" region

  Scenario: Block: User login
    Given I am on the homepage
    Then I should see "User login" in the "sidebar" region

  Scenario: Block: Powered by Drupal
    Given I am on the homepage
    Then I should see "Powered by Drupal" in the "bottom" region
