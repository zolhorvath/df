<?php

/**
 * @file
 *  Migrations for WEM News Nodes.
 */

class DFSWEMNewsNodes extends DemoFrameworkBaseNodes {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.nodes.wem_news.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('wem_news');

    // Image
    $this->addFieldMapping('field_wem_image', 'image');
    $this->addFieldMapping('field_wem_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_wem_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_wem_image:destination_file', 'filename');

    // Video
    $this->addFieldMapping('field_wem_video', 'video')->sourceMigration('DFSWEMNewsVideo');
    $this->addFieldMapping('field_wem_video:file_class')->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_wem_interests', 'interests');

    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('image', 'Image');
    $columns[3] = array('video', 'Video');
    $columns[4] = array('interests', 'Interests');
    return $columns;
  }

  function prepareRow($row) {
    $row->interests = explode(", ", $row->interests);
    return TRUE;
  }

}

class DFSWEMNewsVideo extends Migration {
  public function __construct() {
    parent::__construct();
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'video' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationFile::getKeySchema()
    );
    $this->destination = new MigrateDestinationFile('video', 'MigrateExtrasFileYoutube');
    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.nodes.wem_news.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->addFieldMapping('value', 'video');
   }

  function csvcolumns() {
    $columns[3] = array('video', 'Video');
    return $columns;
  }

}

