<?php

/**
 * @file
 *  Migrations for WEM Contest Nodes.
 */

class DFSWEMContestNodes extends DemoFrameworkBaseNodesUUID {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.nodes.wem_contest.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('wem_contest');

    // Image
    $this->addFieldMapping('field_contest_image', 'image');
    $this->addFieldMapping('field_contest_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_contest_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_contest_image:destination_file', 'filename');

    // Taxonomy
    $this->addFieldMapping('field_contest_interests', 'interests');

    // Workbench
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

    // Created
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('image', 'Image');
    $columns[3] = array('interests', 'Interests');
    $columns[4] = array('uuid', 'UUID');
    $columns[5] = array('created', 'Created');
    return $columns;
  }

  function prepareRow($row) {
    $row->interests = explode(", ", $row->interests);
    return TRUE;
  }

}

