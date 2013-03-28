<?php
/**
 * @file
 * df_engage.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function df_engage_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function df_engage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function df_engage_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => t('The <em>product display</em> content is linked to a Drupal Commerce Product entity.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
