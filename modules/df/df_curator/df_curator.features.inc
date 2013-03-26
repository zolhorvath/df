<?php
/**
 * @file
 * df_curator.features.inc
 */

/**
 * Implements hook_default_collection().
 */
function df_curator_default_collection() {
  $items = array();
  $items['test_collection_1'] = entity_import('collection', '{
    "name" : "test_collection_1",
    "label" : "Test Collection 1",
    "rdf_mapping" : []
  }');
  $items['test_collection_2'] = entity_import('collection', '{
    "name" : "test_collection_2",
    "label" : "Test Collection 2",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function df_curator_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function df_curator_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function df_curator_image_default_styles() {
  $styles = array();

  // Exported image style: main.
  $styles['main'] = array(
    'name' => 'main',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '970',
          'height' => '970',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function df_curator_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
