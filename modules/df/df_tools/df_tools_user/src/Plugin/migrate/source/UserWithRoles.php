<?php

/**
 * @file
 * Contains \Drupal\df_tools_user\Plugin\migrate\source\UserWithRoles.
 */

namespace Drupal\df_tools_user\Plugin\migrate\source;

use Drupal\migrate\Row;
use Drupal\migrate_source_csv\Plugin\migrate\source\CSV;
/**
 * Source for multiple user roles via CSV.
 *
 * @MigrateSource(
 *   id = "user_with_roles"
 * )
 */
class UserWithRoles extends CSV {
  public function prepareRow(Row $row) {
    if ($value = $row->getSourceProperty('Roles')) {
      $row->setSourceProperty('Roles', explode(', ', $value));
    }
  }
}
