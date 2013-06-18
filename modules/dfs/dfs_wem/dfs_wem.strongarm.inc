<?php
/**
 * @file
 * dfs_wem.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dfs_wem_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_wem_commerce';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_wem_contest';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_wem_news';
  $strongarm->value = 'edit-scheduler';
  $export['additional_settings__active_tab_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wem_commerce';
  $strongarm->value = 0;
  $export['comment_anonymous_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wem_contest';
  $strongarm->value = 0;
  $export['comment_anonymous_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wem_news';
  $strongarm->value = 0;
  $export['comment_anonymous_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wem_product_review';
  $strongarm->value = 0;
  $export['comment_anonymous_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wem_tweet';
  $strongarm->value = 0;
  $export['comment_anonymous_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wem_commerce';
  $strongarm->value = 1;
  $export['comment_default_mode_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wem_contest';
  $strongarm->value = 1;
  $export['comment_default_mode_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wem_news';
  $strongarm->value = 1;
  $export['comment_default_mode_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wem_product_review';
  $strongarm->value = 1;
  $export['comment_default_mode_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wem_tweet';
  $strongarm->value = 1;
  $export['comment_default_mode_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wem_commerce';
  $strongarm->value = '50';
  $export['comment_default_per_page_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wem_contest';
  $strongarm->value = '50';
  $export['comment_default_per_page_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wem_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wem_product_review';
  $strongarm->value = '50';
  $export['comment_default_per_page_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wem_tweet';
  $strongarm->value = '50';
  $export['comment_default_per_page_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wem_commerce';
  $strongarm->value = 1;
  $export['comment_form_location_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wem_contest';
  $strongarm->value = 1;
  $export['comment_form_location_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wem_news';
  $strongarm->value = 1;
  $export['comment_form_location_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wem_product_review';
  $strongarm->value = 1;
  $export['comment_form_location_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wem_tweet';
  $strongarm->value = 1;
  $export['comment_form_location_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wem_commerce';
  $strongarm->value = '1';
  $export['comment_preview_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wem_contest';
  $strongarm->value = '1';
  $export['comment_preview_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wem_news';
  $strongarm->value = '0';
  $export['comment_preview_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wem_product_review';
  $strongarm->value = '1';
  $export['comment_preview_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wem_tweet';
  $strongarm->value = '1';
  $export['comment_preview_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wem_commerce';
  $strongarm->value = 1;
  $export['comment_subject_field_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wem_contest';
  $strongarm->value = 1;
  $export['comment_subject_field_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wem_news';
  $strongarm->value = 1;
  $export['comment_subject_field_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wem_product_review';
  $strongarm->value = 1;
  $export['comment_subject_field_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wem_tweet';
  $strongarm->value = 1;
  $export['comment_subject_field_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wem_commerce';
  $strongarm->value = '1';
  $export['comment_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wem_contest';
  $strongarm->value = '0';
  $export['comment_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wem_news';
  $strongarm->value = '1';
  $export['comment_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wem_product_review';
  $strongarm->value = '0';
  $export['comment_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wem_tweet';
  $strongarm->value = '0';
  $export['comment_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__wem_product';
  $strongarm->value = array(
    'view_modes' => array(
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_full' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_featured' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '-10',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'status' => array(
          'weight' => '35',
        ),
      ),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'node_full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'node_featured' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_featured' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'node_full' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'node_featured' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__wem_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wem_commerce';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:field_wem_product_interests' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wem_contest';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wem_news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wem_product_review';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wem_tweet';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_wem_news';
  $strongarm->value = array();
  $export['i18n_sync_node_type_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_wem_news';
  $strongarm->value = '2';
  $export['language_content_type_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wem_commerce';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wem_contest';
  $strongarm->value = array();
  $export['menu_options_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wem_news';
  $strongarm->value = array();
  $export['menu_options_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wem_product_review';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wem_tweet';
  $strongarm->value = array();
  $export['menu_options_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wem_commerce';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wem_contest';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wem_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wem_product_review';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wem_tweet';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wem_commerce';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wem_contest';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wem_news';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wem_product_review';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wem_tweet';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wem_commerce';
  $strongarm->value = '1';
  $export['node_preview_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wem_contest';
  $strongarm->value = '1';
  $export['node_preview_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wem_news';
  $strongarm->value = '1';
  $export['node_preview_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wem_product_review';
  $strongarm->value = '1';
  $export['node_preview_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wem_tweet';
  $strongarm->value = '1';
  $export['node_preview_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wem_commerce';
  $strongarm->value = 0;
  $export['node_submitted_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wem_contest';
  $strongarm->value = 0;
  $export['node_submitted_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wem_news';
  $strongarm->value = 0;
  $export['node_submitted_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wem_product_review';
  $strongarm->value = 1;
  $export['node_submitted_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wem_tweet';
  $strongarm->value = 0;
  $export['node_submitted_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_wem_commerce';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_wem_contest';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_wem_news';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_wem_product_review';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_wem_tweet';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_wem_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purr_messages_admin_path';
  $strongarm->value = TRUE;
  $export['purr_messages_admin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purr_messages_explicit';
  $strongarm->value = TRUE;
  $export['purr_messages_explicit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_comments_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_comments_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_comments_wem_contest';
  $strongarm->value = 1;
  $export['rpx_attach_share_link_to_comments_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_comments_wem_news';
  $strongarm->value = 1;
  $export['rpx_attach_share_link_to_comments_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_comments_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_comments_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_diff_standard_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_diff_standard_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_diff_standard_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_diff_standard_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_diff_standard_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_diff_standard_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_diff_standard_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_diff_standard_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_diff_standard_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_featured_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_featured_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_featured_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_featured_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_featured_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_featured_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_featured_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_featured_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_featured_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_full_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_full_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_full_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_full_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_full_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_wem_contest';
  $strongarm->value = 1;
  $export['rpx_attach_share_link_to_full_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_wem_news';
  $strongarm->value = 1;
  $export['rpx_attach_share_link_to_full_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_full_wem_product_review';
  $strongarm->value = 1;
  $export['rpx_attach_share_link_to_full_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_nodelink_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_nodelink_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_nodelink_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_nodelink_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_nodelink_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_nodelink_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_nodelink_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_nodelink_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_rss_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_rss_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_rss_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_rss_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_rss_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_rss_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_rss_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_rss_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_rss_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_index_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_index_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_index_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_index_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_index_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_index_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_index_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_index_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_index_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_result_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_result_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_result_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_search_result_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_result_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_result_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_result_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_search_result_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_search_result_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_teaser_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_teaser_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_teaser_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_weight_wem_product_review';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_teaser_weight_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_teaser_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_teaser_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_teaser_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_teaser_wem_product_review';
  $strongarm->value = 1;
  $export['rpx_attach_share_link_to_teaser_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_token_weight_wem_commerce';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_token_weight_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_token_weight_wem_contest';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_token_weight_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_token_weight_wem_news';
  $strongarm->value = '40';
  $export['rpx_attach_share_link_to_token_weight_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_token_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_token_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_token_wem_contest';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_token_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_share_link_to_token_wem_news';
  $strongarm->value = 0;
  $export['rpx_attach_share_link_to_token_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_comment_popup_social_at_once_wem_commerce';
  $strongarm->value = 0;
  $export['rpx_comment_popup_social_at_once_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_comment_popup_social_at_once_wem_contest';
  $strongarm->value = 1;
  $export['rpx_comment_popup_social_at_once_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_comment_popup_social_at_once_wem_news';
  $strongarm->value = 1;
  $export['rpx_comment_popup_social_at_once_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_comment_popup_social_at_once_wem_product_review';
  $strongarm->value = 0;
  $export['rpx_comment_popup_social_at_once_wem_product_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_label_comments_wem_commerce';
  $strongarm->value = 'Share your comment:';
  $export['rpx_label_comments_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_label_comments_wem_contest';
  $strongarm->value = 'Share your comment:';
  $export['rpx_label_comments_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_label_comments_wem_news';
  $strongarm->value = 'Share your comment:';
  $export['rpx_label_comments_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_label_nodes_wem_commerce';
  $strongarm->value = 'Comment:';
  $export['rpx_label_nodes_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_label_nodes_wem_contest';
  $strongarm->value = 'Comment:';
  $export['rpx_label_nodes_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_label_nodes_wem_news';
  $strongarm->value = 'Comment:';
  $export['rpx_label_nodes_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_linktext_comments_wem_commerce';
  $strongarm->value = '[comment:subject]';
  $export['rpx_linktext_comments_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_linktext_comments_wem_contest';
  $strongarm->value = '[comment:subject]';
  $export['rpx_linktext_comments_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_linktext_comments_wem_news';
  $strongarm->value = '[comment:subject]';
  $export['rpx_linktext_comments_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_linktext_nodes_wem_commerce';
  $strongarm->value = '[node:title]';
  $export['rpx_linktext_nodes_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_linktext_nodes_wem_contest';
  $strongarm->value = '[node:title]';
  $export['rpx_linktext_nodes_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_linktext_nodes_wem_news';
  $strongarm->value = '[node:title]';
  $export['rpx_linktext_nodes_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_message_comments_wem_commerce';
  $strongarm->value = 'Commented on [site:name].';
  $export['rpx_message_comments_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_message_comments_wem_contest';
  $strongarm->value = 'Commented on [site:name].';
  $export['rpx_message_comments_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_message_comments_wem_news';
  $strongarm->value = 'Commented on [site:name].';
  $export['rpx_message_comments_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_message_nodes_wem_commerce';
  $strongarm->value = 'Shared [node:title] on [site:name].';
  $export['rpx_message_nodes_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_message_nodes_wem_contest';
  $strongarm->value = 'Shared [node:title] on [site:name].';
  $export['rpx_message_nodes_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_message_nodes_wem_news';
  $strongarm->value = 'Shared [node:title] on [site:name].';
  $export['rpx_message_nodes_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_summary_comments_wem_commerce';
  $strongarm->value = '[comment:body]';
  $export['rpx_summary_comments_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_summary_comments_wem_contest';
  $strongarm->value = '[comment:body]';
  $export['rpx_summary_comments_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_summary_comments_wem_news';
  $strongarm->value = '[comment:body]';
  $export['rpx_summary_comments_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_summary_nodes_wem_commerce';
  $strongarm->value = '[node:body]';
  $export['rpx_summary_nodes_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_summary_nodes_wem_contest';
  $strongarm->value = '[node:body]';
  $export['rpx_summary_nodes_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_summary_nodes_wem_news';
  $strongarm->value = '[node:body]';
  $export['rpx_summary_nodes_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_title_comments_wem_commerce';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_title_comments_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_title_comments_wem_contest';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_title_comments_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_title_comments_wem_news';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_title_comments_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_title_nodes_wem_commerce';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_title_nodes_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_title_nodes_wem_contest';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_title_nodes_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_title_nodes_wem_news';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_title_nodes_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_wem_commerce';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_wem_news';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_wem_news';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_wem_news';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_wem_news';
  $strongarm->value = 0;
  $export['scheduler_publish_required_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_wem_news';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_wem_news';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_wem_news';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_wem_news';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_wem_news';
  $strongarm->value = 'draft';
  $export['scheduler_unpublish_moderation_state_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_wem_news';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_wem_news';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_wem_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'df-wem-home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_wem_commerce';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_wem_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_wem_contest';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_wem_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_wem_news';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_wem_news'] = $strongarm;

  return $export;
}
