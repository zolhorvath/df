<?php
/**
 * @file
 * df_tools_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function df_tools_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}
