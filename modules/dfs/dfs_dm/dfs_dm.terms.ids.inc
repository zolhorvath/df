<?php

/**
 * @file
 *  Migration for Interests Taxonomy Terms in DFS WEM.
 */

class DFSDMTermsIds extends DemoFrameworkBaseTerms {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $import_path = drupal_get_path('module', 'dfs_dm') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dm.terms.ids.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('identifiers');
    $this->addFieldMapping('name', 'name');
  }

  function csvcolumns() {
    $columns[0] = array('name', 'Name');
    return $columns;
  }
}
