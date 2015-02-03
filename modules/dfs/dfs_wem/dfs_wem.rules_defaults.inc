<?php
/**
 * @file
 * dfs_wem.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dfs_wem_default_rules_configuration() {
  $items = array();
  $items['rules_dfs_wem_enter_contest_group_join'] = entity_import('rules_config', '{ "rules_dfs_wem_enter_contest_group_join" : {
      "LABEL" : "DFS WEM Enter Contest Group Join",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "view-mode" ], "value" : "full" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "wem_contest" : "wem_contest" } }
          }
        }
      ],
      "DO" : [
        { "og_subcribe_user" : { "user" : [ "site:current-user" ], "group" : [ "node" ] } },
        { "drupal_message" : {
            "message" : "You have been entered in the contest: \\u003Cem\\u003E[node:title]!\\u003C\\/em\\u003E",
            "repeat" : 0
          }
        },
        { "redirect" : { "url" : "[node:url]" } }
      ]
    }
  }');
  $items['rules_wem_visit_data_to_marketo'] = entity_import('rules_config', '{ "rules_wem_visit_data_to_marketo" : {
      "LABEL" : "Add visit data to Marketo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "marketo_ma", "purr_messages", "og" ],
      "ON" : { "og_user_insert" : [] },
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "list\\u003Ctext\\u003E",
              "value" : { "value" : [
                  "LastName|[site:current-user:name]",
                  "site_lead_source|[site:current-page:url]",
                  "LeadSource|giveaway"
                ]
              }
            },
            "PROVIDE" : { "variable_added" : { "marketoparams" : "Marketo Parameters" } }
          }
        },
        { "add_lead" : { "account" : [ "site:current-user" ], "data" : [ "marketoparams" ] } },
        { "purr_message" : { "message" : "Transmitted lead scoring to Marketo." } }
      ]
    }
  }');
  return $items;
}
