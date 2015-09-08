@df
Feature: Demo Framework: Article nodes
  In order to prove that the installation profile has installed correctly
  As a developer
  I need to be able to create nodes of the Article content type

  @api
  Scenario: Create an article node
    Given I am viewing an "article" content with the title "My article"
    Then I should see the heading "My article"

  @api
  Scenario: Create an article node with fields
    Given "article" content:
    | title                     | body             |
    | First article with fields | PLACEHOLDER BODY |
    When I am on the homepage
    And follow "First article with fields"
    Then I should see the text "PLACEHOLDER BODY"

  @api
  Scenario: Create an article with multiple term references
    Given "tags" terms:
    | name      |
    | Tag one   |
    | Tag two   |
    And "article" content:
    | title             | body             | field_tags       |
    | Article with tags | PLACEHOLDER BODY | Tag one, Tag two |
    When I am on the homepage
    And follow "Article with tags"
    Then I should see the text "Tag one"
    And I should see the text "Tag two"
