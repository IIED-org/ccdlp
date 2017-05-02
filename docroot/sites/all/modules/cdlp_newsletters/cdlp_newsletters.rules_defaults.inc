<?php
/**
 * @file
 * cdlp_newsletters.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cdlp_newsletters_default_rules_configuration() {
  $items = array();
  $items['rules_create_newsletter'] = entity_import('rules_config', '{ "rules_create_newsletter" : {
      "LABEL" : "Create newsletter",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "articles" : { "label" : "Articles", "type" : "list\\u003Cnode\\u003E" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "simplenews",
              "param_title" : "Newsletter",
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-simplenews-term" ], "value" : "1222" } },
        { "LOOP" : {
            "USING" : { "list" : [ "articles" ] },
            "ITEM" : { "article" : "Current list item" },
            "DO" : [
              { "list_add" : {
                  "list" : [ "entity-created:field-simplenews-articles" ],
                  "item" : [ "article" ],
                  "unique" : "1"
                }
              }
            ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
        { "redirect" : { "url" : "[entity-created:url]", "destination" : "1" } }
      ]
    }
  }');
  return $items;
}
