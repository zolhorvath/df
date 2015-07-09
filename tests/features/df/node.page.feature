@df
Feature: Demo Framework: Basic page node
  In order to prove that the installation profile has installed correctly
  As a developer
  I need to be able to create nodes of the Basic page content type

  @api
  Scenario: Create a basic page node
    Given I am logged in as a user with the "administrator" role
    When I am viewing a "page" content with the title "About us"
    Then I should see the heading "About us"

  @api
  Scenario: Create a page node with fields
    Given "page" content:
    | title            | body             | path |
    | Page with fields | PLACEHOLDER BODY | /test |
    When I visit "/test"
    Then I should see the text "PLACEHOLDER BODY"
