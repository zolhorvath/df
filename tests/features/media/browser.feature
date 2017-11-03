@df @media @api @javascript @errors
Feature: An entity browser for media assets

  @twitter @fe9a2c68
  Scenario: Opening the media browser on a pre-existing node
    Given I am logged in as a user with the "administrator" role
    And media entities:
      | bundle | name            | embed_code                                                  | status | field_media_in_library |
      | tweet  | Here be dragons | https://twitter.com/50NerdsofGrey/status/757319527151636480 | 1      | 1                      |
    When I visit "/node/add/page"
    And I enter "Blorgzville" for "Title"
    And I open the media browser
    And I select item 1 in the media browser
    And I complete the media browser selection
    And I wait 5 seconds
    And I scroll to the "#edit-actions" element
    And I press "Save"
    And I open the moderation sidebar
    And I select the "Edit draft" moderation sidebar link
    And I wait 10 seconds
    And I open the media browser
    And I wait for AJAX to finish
    Then I should see a "form.entity-browser-form" element
    And I queue the latest node entity for deletion

  @twitter @ee4d5a41
  Scenario: Testing cardinality enforcement in the media browser
    Given I am logged in as a user with the "administrator" role
    And media entities:
      | bundle | name          | embed_code                                               | status | field_media_in_library |
      | tweet  | Code Wisdom 1 | https://twitter.com/CodeWisdom/status/707945860936691714 | 1      | 1                      |
      | tweet  | Code Wisdom 2 | https://twitter.com/CodeWisdom/status/826500049760821248 | 1      | 1                      |
      | tweet  | Code Wisdom 3 | https://twitter.com/CodeWisdom/status/826460810121773057 | 1      | 1                      |
    When I visit "/node/add/page"
    And I open the media browser
    And I wait 5 seconds
    # There was a bug where AJAX requests would completely break the selection
    # behavior. So let's make an otherwise pointless AJAX request here to guard
    # against regressions...
    And I click the ".views-exposed-form a.btn" element
    And I enter "Pastafazoul!" for "Keywords"
    And I apply the exposed filters
    And I click the ".views-exposed-form a.btn" element
    And I clear "Keywords"
    And I apply the exposed filters
    And I select item 1 in the media browser
    And I select item 2 in the media browser

  @81cfbefc
  Scenario: Bundle filter is present when no contextual filter is given.
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/page"
    And I open the media browser
    Then I should see "Type"

  @6b941640
  Scenario: Entity browser filters work
    Given I am logged in as a user with the "administrator" role
    And media entities:
      | bundle | name          | embed_code                                               | status | field_media_in_library |
      | tweet  | Code Wisdom 1 | https://twitter.com/CodeWisdom/status/707945860936691714 | 1      | 1                      |
      | tweet  | Code Wisdom 2 | https://twitter.com/CodeWisdom/status/826500049760821248 | 1      | 1                      |
      | tweet  | Code Wisdom 3 | https://twitter.com/CodeWisdom/status/826460810121773057 | 1      | 1                      |
    When I visit "/node/add/page"
    And I open the media browser
    And I wait 5 seconds
    And I click the ".views-exposed-form a.btn" element
    And I enter "Code Wisdom 1" for "Keywords"
    And I apply the exposed filters
    Then I should see 1 item in the entity browser
