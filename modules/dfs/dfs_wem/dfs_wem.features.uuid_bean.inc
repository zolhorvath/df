<?php
/**
 * @file
 * dfs_wem.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function dfs_wem_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'WEM - Page Related Product',
    'description' => NULL,
    'title' => 'Related Product',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 0,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'page',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_commerce' => 'wem_commerce',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---page-related-product',
    'view_mode' => 'default',
    'created' => 1372872794,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '35f72018-6785-49d8-9321-bae896390db9',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 0,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'page',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_commerce' => 'wem_commerce',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  $beans[] = array(
    'label' => 'WEM - Page Related News',
    'description' => NULL,
    'title' => 'Related News',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 4,
        'offset_results' => 0,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'page',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_news' => 'wem_news',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---page-related-news',
    'view_mode' => 'default',
    'created' => 1372872827,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '4ca3c820-7dae-44a0-a27d-4f46d0f0dcd2',
    'filters' => array(
      'records_shown' => 4,
      'offset_results' => 0,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'page',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_news' => 'wem_news',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  $beans[] = array(
    'label' => 'WEM - User Related Product (Secondary)',
    'description' => NULL,
    'title' => 'Featured Product',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 1,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'user',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_commerce' => 'wem_commerce',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---user-related-product-secon',
    'view_mode' => 'default',
    'created' => 1372869756,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '4ed8dc32-c8c7-46b9-a484-2f03bef1e78b',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 1,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'user',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_commerce' => 'wem_commerce',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  $beans[] = array(
    'label' => 'WEM - User Related Contest',
    'description' => NULL,
    'title' => 'Contests',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 0,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'user',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_contest' => 'wem_contest',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---user-related-contest',
    'view_mode' => 'default',
    'created' => 1372869843,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '5eabc66b-122b-413d-a402-068617bdd415',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 0,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'user',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_contest' => 'wem_contest',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  $beans[] = array(
    'label' => 'WEM - User Related Product (Primary)',
    'description' => NULL,
    'title' => 'Featured Product',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 0,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'user',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_commerce' => 'wem_commerce',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---user-related-product-prima',
    'view_mode' => 'default',
    'created' => 1372869718,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'b94a5b9d-d1e8-469c-a520-fb4b4047956a',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 0,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'user',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_commerce' => 'wem_commerce',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  $beans[] = array(
    'label' => 'WEM - User Related News',
    'description' => NULL,
    'title' => 'Related Guides',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 4,
        'offset_results' => 1,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'user',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_news' => 'wem_news',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---user-related-news',
    'view_mode' => 'default',
    'created' => 1372890591,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'd8ae7672-37d6-457a-8943-e88c05e619ec',
    'filters' => array(
      'records_shown' => 4,
      'offset_results' => 1,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'user',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_news' => 'wem_news',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  $beans[] = array(
    'label' => 'WEM - User Related News Item',
    'description' => NULL,
    'title' => 'Guides',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 0,
        'vocabulary' => array(
          'interests' => 'interests',
        ),
      ),
      'settings' => array(
        'related' => 'user',
        'entity_type' => 'node',
        'entity_view_mode' => 'featured',
        'bundle_types' => array(
          'wem_news' => 'wem_news',
        ),
        'hide_empty' => 1,
        'unmatch_add' => 1,
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    ),
    'delta' => 'wem---user-related-news-item',
    'view_mode' => 'default',
    'created' => 1372870335,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'ea56341c-11a6-443a-b174-eda8650c85f1',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 0,
      'vocabulary' => array(
        'interests' => 'interests',
      ),
    ),
    'settings' => array(
      'related' => 'user',
      'entity_type' => 'node',
      'entity_view_mode' => 'featured',
      'bundle_types' => array(
        'wem_news' => 'wem_news',
      ),
      'hide_empty' => 1,
      'unmatch_add' => 1,
    ),
    'more_link' => array(
      'text' => '',
      'path' => '',
    ),
  );
  return $beans;
}
