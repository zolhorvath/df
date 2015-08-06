<?php
/**
 * @file
 * dfs_med_editorial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfs_med_editorial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dfs_med_editorial_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dfs_med_editorial_node_info() {
  $items = array(
    'editorial' => array(
      'name' => t('Editorial'),
      'base' => 'node_content',
      'description' => t('An <em>editorial</em> piece written to showcase other content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
