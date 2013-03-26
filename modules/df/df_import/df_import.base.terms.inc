<?php

/**
 * @file
 *  Base Migrations for Taxonomy Terms used in DF.
 */

class DemoFrameworkBaseTerms extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import taxonomy terms.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'df_import') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'df_import.base.terms.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('tags');
    $this->addFieldMapping('name', 'name');
  }

  function csvcolumns() {
    $columns[0] = array('name', 'Name');
    return $columns;
  }
}

