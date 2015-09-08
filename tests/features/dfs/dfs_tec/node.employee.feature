@dfs_tec
Feature: DFS TEC: Employee node
  In order to prove that dfs_tec was enabled correctly
  As a developer
  I need to be able to create nodes of the Employee content type

  @api
  Scenario: Create an employee node
    Given I am viewing an "employee" content with the title "Dries"
    Then I should see the heading "Dries"
    And I should not see the heading "Tom"

  @api
  Scenario: Create an employee node with fields
    Given "employee" content:
      | title       | path | field_biography | field_department | field_email    | field_title | field_location | field_phone  |
      | Thad Martin | /thad | A cool dude     | Sales            | thad@sales.org | Sales guy   | boston         | 555-555-5555 |
    When I visit "/thad"
    Then I should see the heading "Thad Martin, Sales guy"
    And I should see the text "thad@sales.org"
    And I should see the text "Sales guy"
    And I should see the text "Sales"
    And I should see the text "A cool dude"
    And I should see the text "Boston, Massachusetts"
    And I should see the text "555-555-5555"
