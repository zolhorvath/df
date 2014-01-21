<?php
/**
 * @file
 * df_connect.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function df_connect_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

