<?php
/**
 * @file
 * dfs_wem.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function dfs_wem_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wem_twitter_importer';
  $feeds_importer->config = array(
    'name' => 'WEM Twitter Importer',
    'description' => 'Twitter JSON import.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.results.*',
        'sources' => array(
          'jsonpath_parser:4' => 'from_user',
          'jsonpath_parser:0' => 'id_str',
          'jsonpath_parser:1' => 'id',
          'jsonpath_parser:2' => 'text',
          'jsonpath_parser:3' => 'text',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
          ),
        ),
        'allow_override' => FALSE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'wem_tweet',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_wem_tweet_from',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_wem_tweet_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['wem_twitter_importer'] = $feeds_importer;

  return $export;
}
