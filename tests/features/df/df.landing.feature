@df @ipe
Feature: Demo Framework: Landing page
  In order to prove that landing pages for a given scenario function properly
  As a developer
  I need to perform various basic tests

  @api @javascript
  Scenario: Create Landing Page
    Given I am logged in as a user with the "administrator" role
      When I go to "/node/add/landing_page"
        Then I fill in "edit-title-0-value" with "Test Landing Page"
          And I maximize the browser window
          And I press "Save and Create New Draft"
          Then I should see "Test Landing Page"
          And I should see "Change Layout"
          And I should see "Manage Content"
          And I should see "Edit"
      When I click on the element with xpath "//li[@data-tab-id='change_layout']"
        Then I wait for ajax to finish
          And I click on the element with xpath "//a[@data-category='Columns: 1']"
          And I click on the element with xpath "//li[@data-layout-id='onecol']"
          Then I wait for ajax to finish
          And I should see "Region: middle"
          And I should see "Save"
          And I should see "Cancel"
          And I should see "Manage Content"
      When I click on the element with xpath "//li[@data-tab-id='manage_content']"
        Then I wait for ajax to finish
          And I should see "Create Content"
          And I click on the element with xpath "//a[@data-category='Create Content']"
          And I wait for ajax to finish
          And I should see "A basic block"
          And I should see "A block that inserts one"
          And I should see "A hero used on"
          And I should see "A block that easily"
          And I should see "Media block allowing"
          And I should see "Displays other blocks as"
      When I click on the element with xpath "//a[@data-block-type='basic']"
        Then I wait for ajax to finish
          And I fill in "Description" with "My block"
      When I press "Create and Place"
        Then I wait for ajax to finish
          And I should see "Block description"
          And I should see "Display title"
          And I press "Add"
          Then I should see "Block: My block"
      When I click on the element with xpath "//li[@data-tab-id='save']"
        Then I should see "Save as custom"
          And I should see "Save as default"
      When I follow "Save as custom"
        Then I should see "Revert To Default"
          And I should see "Change Layout"
