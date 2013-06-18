<?php
/**
 * @file
 * dfs_wem.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dfs_wem_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node wem_commerce content.
  $permissions['administer panelizer node wem_commerce content'] = array(
    'name' => 'administer panelizer node wem_commerce content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_commerce context.
  $permissions['administer panelizer node wem_commerce context'] = array(
    'name' => 'administer panelizer node wem_commerce context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_commerce defaults.
  $permissions['administer panelizer node wem_commerce defaults'] = array(
    'name' => 'administer panelizer node wem_commerce defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_commerce layout.
  $permissions['administer panelizer node wem_commerce layout'] = array(
    'name' => 'administer panelizer node wem_commerce layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_commerce overview.
  $permissions['administer panelizer node wem_commerce overview'] = array(
    'name' => 'administer panelizer node wem_commerce overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_commerce settings.
  $permissions['administer panelizer node wem_commerce settings'] = array(
    'name' => 'administer panelizer node wem_commerce settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_contest content.
  $permissions['administer panelizer node wem_contest content'] = array(
    'name' => 'administer panelizer node wem_contest content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_contest context.
  $permissions['administer panelizer node wem_contest context'] = array(
    'name' => 'administer panelizer node wem_contest context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_contest defaults.
  $permissions['administer panelizer node wem_contest defaults'] = array(
    'name' => 'administer panelizer node wem_contest defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_contest layout.
  $permissions['administer panelizer node wem_contest layout'] = array(
    'name' => 'administer panelizer node wem_contest layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_contest overview.
  $permissions['administer panelizer node wem_contest overview'] = array(
    'name' => 'administer panelizer node wem_contest overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_contest settings.
  $permissions['administer panelizer node wem_contest settings'] = array(
    'name' => 'administer panelizer node wem_contest settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_news content.
  $permissions['administer panelizer node wem_news content'] = array(
    'name' => 'administer panelizer node wem_news content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_news context.
  $permissions['administer panelizer node wem_news context'] = array(
    'name' => 'administer panelizer node wem_news context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_news defaults.
  $permissions['administer panelizer node wem_news defaults'] = array(
    'name' => 'administer panelizer node wem_news defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_news layout.
  $permissions['administer panelizer node wem_news layout'] = array(
    'name' => 'administer panelizer node wem_news layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_news overview.
  $permissions['administer panelizer node wem_news overview'] = array(
    'name' => 'administer panelizer node wem_news overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_news settings.
  $permissions['administer panelizer node wem_news settings'] = array(
    'name' => 'administer panelizer node wem_news settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_product_review defaults.
  $permissions['administer panelizer node wem_product_review defaults'] = array(
    'name' => 'administer panelizer node wem_product_review defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node wem_tweet defaults.
  $permissions['administer panelizer node wem_tweet defaults'] = array(
    'name' => 'administer panelizer node wem_tweet defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: clear wem_twitter_importer feeds.
  $permissions['clear wem_twitter_importer feeds'] = array(
    'name' => 'clear wem_twitter_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create commerce_product entities of bundle wem_product.
  $permissions['create commerce_product entities of bundle wem_product'] = array(
    'name' => 'create commerce_product entities of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: create wem_commerce content.
  $permissions['create wem_commerce content'] = array(
    'name' => 'create wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: create wem_contest content.
  $permissions['create wem_contest content'] = array(
    'name' => 'create wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: create wem_news content.
  $permissions['create wem_news content'] = array(
    'name' => 'create wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: create wem_product_review content.
  $permissions['create wem_product_review content'] = array(
    'name' => 'create wem_product_review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: create wem_tweet content.
  $permissions['create wem_tweet content'] = array(
    'name' => 'create wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any wem_commerce content.
  $permissions['delete any wem_commerce content'] = array(
    'name' => 'delete any wem_commerce content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wem_contest content.
  $permissions['delete any wem_contest content'] = array(
    'name' => 'delete any wem_contest content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wem_news content.
  $permissions['delete any wem_news content'] = array(
    'name' => 'delete any wem_news content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wem_product_review content.
  $permissions['delete any wem_product_review content'] = array(
    'name' => 'delete any wem_product_review content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wem_tweet content.
  $permissions['delete any wem_tweet content'] = array(
    'name' => 'delete any wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own wem_commerce content.
  $permissions['delete own wem_commerce content'] = array(
    'name' => 'delete own wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own wem_contest content.
  $permissions['delete own wem_contest content'] = array(
    'name' => 'delete own wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own wem_news content.
  $permissions['delete own wem_news content'] = array(
    'name' => 'delete own wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own wem_product_review content.
  $permissions['delete own wem_product_review content'] = array(
    'name' => 'delete own wem_product_review content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own wem_tweet content.
  $permissions['delete own wem_tweet content'] = array(
    'name' => 'delete own wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any commerce_product entity of bundle wem_product.
  $permissions['edit any commerce_product entity of bundle wem_product'] = array(
    'name' => 'edit any commerce_product entity of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any wem_commerce content.
  $permissions['edit any wem_commerce content'] = array(
    'name' => 'edit any wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wem_contest content.
  $permissions['edit any wem_contest content'] = array(
    'name' => 'edit any wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wem_news content.
  $permissions['edit any wem_news content'] = array(
    'name' => 'edit any wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wem_product_review content.
  $permissions['edit any wem_product_review content'] = array(
    'name' => 'edit any wem_product_review content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wem_tweet content.
  $permissions['edit any wem_tweet content'] = array(
    'name' => 'edit any wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own commerce_product entities of bundle wem_product.
  $permissions['edit own commerce_product entities of bundle wem_product'] = array(
    'name' => 'edit own commerce_product entities of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own wem_commerce content.
  $permissions['edit own wem_commerce content'] = array(
    'name' => 'edit own wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own wem_contest content.
  $permissions['edit own wem_contest content'] = array(
    'name' => 'edit own wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own wem_news content.
  $permissions['edit own wem_news content'] = array(
    'name' => 'edit own wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own wem_product_review content.
  $permissions['edit own wem_product_review content'] = array(
    'name' => 'edit own wem_product_review content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own wem_tweet content.
  $permissions['edit own wem_tweet content'] = array(
    'name' => 'edit own wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: import wem_twitter_importer feeds.
  $permissions['import wem_twitter_importer feeds'] = array(
    'name' => 'import wem_twitter_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock wem_twitter_importer feeds.
  $permissions['unlock wem_twitter_importer feeds'] = array(
    'name' => 'unlock wem_twitter_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any commerce_product entity of bundle wem_product.
  $permissions['view any commerce_product entity of bundle wem_product'] = array(
    'name' => 'view any commerce_product entity of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle wem_product.
  $permissions['view own commerce_product entities of bundle wem_product'] = array(
    'name' => 'view own commerce_product entities of bundle wem_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view purr messages.
  $permissions['view purr messages'] = array(
    'name' => 'view purr messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'purr_messages',
  );

  return $permissions;
}
