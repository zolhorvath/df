<?php
/**
 * @file
 * dfs_wem_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dfs_wem_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle wem_product'.
  $permissions['create commerce_product entities of bundle wem_product'] = array(
    'name' => 'create commerce_product entities of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create wem_commerce content'.
  $permissions['create wem_commerce content'] = array(
    'name' => 'create wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create wem_product_review content'.
  $permissions['create wem_product_review content'] = array(
    'name' => 'create wem_product_review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any wem_commerce content'.
  $permissions['delete any wem_commerce content'] = array(
    'name' => 'delete any wem_commerce content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any wem_product_review content'.
  $permissions['delete any wem_product_review content'] = array(
    'name' => 'delete any wem_product_review content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own wem_commerce content'.
  $permissions['delete own wem_commerce content'] = array(
    'name' => 'delete own wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own wem_product_review content'.
  $permissions['delete own wem_product_review content'] = array(
    'name' => 'delete own wem_product_review content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle wem_product'.
  $permissions['edit any commerce_product entity of bundle wem_product'] = array(
    'name' => 'edit any commerce_product entity of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any wem_commerce content'.
  $permissions['edit any wem_commerce content'] = array(
    'name' => 'edit any wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any wem_product_review content'.
  $permissions['edit any wem_product_review content'] = array(
    'name' => 'edit any wem_product_review content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle wem_product'.
  $permissions['edit own commerce_product entities of bundle wem_product'] = array(
    'name' => 'edit own commerce_product entities of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own wem_commerce content'.
  $permissions['edit own wem_commerce content'] = array(
    'name' => 'edit own wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own wem_product_review content'.
  $permissions['edit own wem_product_review content'] = array(
    'name' => 'edit own wem_product_review content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle wem_product'.
  $permissions['view any commerce_product entity of bundle wem_product'] = array(
    'name' => 'view any commerce_product entity of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle wem_product'.
  $permissions['view own commerce_product entities of bundle wem_product'] = array(
    'name' => 'view own commerce_product entities of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  return $permissions;
}
