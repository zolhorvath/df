<?php

/**
 * @file
 * Contains \Drupal\df_tools_blocks\Plugin\migrate\source\URLBlock.
 */

namespace Drupal\df_tools_blocks\Plugin\migrate\source;

use Drupal\migrate\Row;
use Drupal\migrate_source_csv\Plugin\migrate\source\CSV;

/**
 * Source for URL block CSV.
 *
 * @MigrateSource(
 *   id = "url_block"
 * )
 */
class URLBlock extends CSV {

  public function prepareRow(Row $row) {
  }

}
