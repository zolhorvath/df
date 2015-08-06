<?php

/**
 * @file
 *  Migrations for Editorial Nodes.
 */

class DFSMEDEditorialNodes extends DemoFrameworkBaseNodesUUID {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uuid' => array(
          'type' => 'char',
          'length' => 36,
          'not null' => FALSE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $import_path = drupal_get_path('module', 'dfs_med') . '/import/';
    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_med.nodes.editorial.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('editorial');
    // Override body:format
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    // Created
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
    // Sub
    $this->addfieldmapping('field_subtext', 'sub');
    // Editorial Image
    $this->addFieldMapping('field_editorial_image', 'image');
    $this->addFieldMapping('field_editorial_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_editorial_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_editorial_image:destination_file', 'filename');
    // Year
    $this->addfieldmapping('field_year', 'year');
    // Length
    $this->addfieldmapping('field_length', 'length');
    // Brand
    $this->addFieldMapping('field_brand', 'brand')->sourceMigration('DFSMEDBrandNodes');
    // Featured
    $this->addfieldmapping('field_featured', 'featured');
    // Headline
    $this->addfieldmapping('field_headline', 'headlines');
    // Persona
    $this->addFieldMapping('field_persona', 'persona');
    // Site Section
    $this->addFieldMapping('field_site_section', 'site_section')->defaultValue("Content");
}

  function csvcolumns() {
    $columns[0] = array('uuid', 'UUID');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('sub', 'Sub');
    $columns[3] = array('image', 'Image');
    $columns[4] = array('year', 'Year');
    $columns[5] = array('body', 'Body');
    $columns[6] = array('length', 'Length');
    $columns[7] = array('brand', 'Brand');
    $columns[8] = array('headlines', 'Headlines');
    $columns[9] = array('persona', 'Persona');
    return $columns;
  }

  public function prepareRow($row) {
    $row->headlines = explode(", ", $row->headlines);
    return TRUE;
  }

}

class DFSMEDEditorialComments extends ImportBaseComments {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import comments.');
    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'subject' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationComment::getKeySchema()
    );
    $import_path = drupal_get_path('module', 'dfs_med') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_med.comments.editorial.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationComment('comment_node_editorial');
    $this->addFieldMapping('nid', 'node')->sourceMigration('DFSMEDEditorialNodes');
    $this->addFieldMapping('uid', 'author')->sourceMigration('DFSMEDUsers');
    $this->addFieldMapping('created', 'created');
  }

  function csvcolumns() {
    $columns[0] = array('subject', 'Subject');
    $columns[1] = array('node', 'Node');
    $columns[2] = array('author', 'Author');
    $columns[3] = array('body', 'Body');
    $columns[4] = array('created', 'Created');
    return $columns;
  }

}
