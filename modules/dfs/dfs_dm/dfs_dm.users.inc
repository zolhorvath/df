<?php

/**
 *  @file
 *   Contains user migration class for DFS DM
 */

class DFSDMUsers extends DemoFrameworkBaseUsers {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import DFS DM Users');
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'dfs_dm') . '/import/dfs_dm.users.csv', $this->csvcolumns(), array('header_rows' => 1));
  }

}
