@df @ipe
Feature: Demo Framework: Landing page
  In order to prove that landing pages for a given scenario function properly
  As a developer
  I need to perform various basic tests

  @api @javascript
  Scenario: Create Landing Page
    Given I am logged in as a user with the "administrator" role
      When I go to "/node/add/landing_page"
        Then I fill "edit-title-0-value" with "Test Landing Page"
          And I press "Save and Create New Draft"
          Then I should see "Test Landing Page"
          And I should see "Change Layout"
          And I should see "Manage Content"
          And I should see "Edit"
      When I follow "Change Layout"
        Then I should see "Current Layout"
          And I should see "Columns: 1"
          And I follow "Columns: 1"
          And I should see "Single column"
      When I click on the element with xpath "//li[@data-layout-id='onecol']"
        Then I should see "Save"
          And I should see "Cancel"
          And I should see "Manage Content"
      When I follow "Manage Content"
        Then I should see "Create Content"
          And I press "Create Content"
          And I should see "A basic block"
          And I should see "A block that inserts one"
          And I should see "A hero used on"
          And I should see "A block that easily"
          And I should see "Media block allowing"
          And I should see "Displays other blocks as"
      When I follow "Basic Block"
        Then I should see "Create new"
          And I fill in the "Description" with "My block"
          And I fill in the "Body" with "Some ipsum for ya..."
      When I press "Create and Place"
        Then I should see "Configure"
          And I press "Add"
          And I should not see "My block"
          And I should see "Some ipsum for ya..."
      When I press "Save"
        Then I should see "Save as custom"
          And I should see "Save as default"
      When I press "Save as custom"
        Then I should see "Revert To Default"
          And I should see "Change Layout"
     
