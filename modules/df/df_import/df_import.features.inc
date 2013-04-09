<?php
/**
 * @file
 * df_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function df_import_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
