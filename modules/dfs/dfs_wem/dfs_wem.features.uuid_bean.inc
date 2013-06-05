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
    'label' => 'WEM Home - Featured Contest',
    'description' => NULL,
    'title' => 'Featured Contest',
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
    'delta' => 'wem-home---featured-contest',
    'view_mode' => 'default',
    'created' => 1363376227,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '0517da4c-2380-4d70-9a1b-9f4ec1230661',
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
    'label' => 'WEM - Related Content',
    'description' => NULL,
    'title' => 'Related',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 3,
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
          'wem_contest' => 'wem_contest',
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
    'delta' => 'wem---related-content',
    'view_mode' => 'default',
    'created' => 1368796163,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '1f7f9141-0ef2-431b-8c47-8b37b8bee616',
    'filters' => array(
      'records_shown' => 3,
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
        'wem_contest' => 'wem_contest',
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
    'label' => 'WEM Home - News Item 5',
    'description' => NULL,
    'title' => 'Featured News',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 4,
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
    'delta' => 'wem-home---news-item-5',
    'view_mode' => 'default',
    'created' => 1368739719,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '23e90c9a-3364-4818-a12f-57e884c17bb4',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 4,
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
    'label' => 'WEM Home - News Item 1',
    'description' => NULL,
    'title' => 'Featured News',
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
    'delta' => 'wem-home---news-item-1',
    'view_mode' => 'default',
    'created' => 1367870645,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '362dcd9d-727f-4951-b305-47c34cb75354',
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
  $beans[] = array(
    'label' => 'WEM Home - News Item 2',
    'description' => NULL,
    'title' => 'Featured News',
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
    'delta' => 'wem-home---news-item-2',
    'view_mode' => 'default',
    'created' => 1367870446,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '6900cce5-a600-4bcb-a38a-cc621f22753d',
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
    'label' => 'WEM Home - Featured Product 2',
    'description' => NULL,
    'title' => 'Featured Product 2',
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
    'delta' => 'wem-home---featured-product-2',
    'view_mode' => 'default',
    'created' => 1362532510,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '97d91adc-af0d-43ba-8c1d-0ff556324d14',
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
    'label' => 'WEM Contest - Related Products',
    'description' => NULL,
    'title' => 'Featured Products',
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
    'delta' => 'wem-contest---related-products',
    'view_mode' => 'default',
    'created' => 1363719898,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'afee1b8d-5740-435b-be5a-47df939c74fc',
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
    'label' => 'WEM Home - Featured Product 1',
    'description' => NULL,
    'title' => 'Featured Product 1',
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
    'delta' => 'wem-home---featured-product-1',
    'view_mode' => 'default',
    'created' => 1362532415,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'b94c95b5-6a95-4d9f-afed-63b113bd788e',
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
    'label' => 'WEM Home - News Item 4',
    'description' => NULL,
    'title' => 'Featured News',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 3,
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
    'delta' => 'wem-home---news-item-4',
    'view_mode' => 'default',
    'created' => 1367870542,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'efba9989-6a06-4991-841a-8c0ad3d7b85a',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 3,
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
    'label' => 'WEM Home - News Item 3',
    'description' => NULL,
    'title' => 'Featured News',
    'type' => 'bean_tax_related',
    'data' => array(
      'view_mode' => 'default',
      'filters' => array(
        'records_shown' => 1,
        'offset_results' => 2,
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
    'delta' => 'wem-home---news-item-3',
    'view_mode' => 'default',
    'created' => 1367870485,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'f56bbbb3-f155-4e43-9721-72f767593b23',
    'filters' => array(
      'records_shown' => 1,
      'offset_results' => 2,
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
