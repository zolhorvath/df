<?php
/**
 * @file
 * dfs_wem_personalize.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfs_wem_personalize_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "personalize" && $api == "personalize") {
    return array("version" => "1");
  }
}
