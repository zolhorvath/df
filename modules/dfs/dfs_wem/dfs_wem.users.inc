<?php

/**
 *  @file
 *   Contains user migration class for DFS WEM
 */

class DFSWEMUsers extends ImportBaseUsers {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import DFS WEM Users');
    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.users.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->addFieldMapping('picture', 'picture')->sourceMigration('DFSWEMUserPictures');
    $this->addFieldMapping('field_user_interests', 'interests');
    $this->addFieldMapping('field_user_bio', 'bio');
    $this->addFieldMapping('field_user_bio:format')->defaultValue('userbase');
    $this->addFieldMapping('field_user_first', 'first');
    $this->addFieldMapping('field_user_last', 'last');
  }

  function csvcolumns() {
    $columns[0] = array('name', 'Name');
    $columns[1] = array('pass', 'Pass');
    $columns[2] = array('mail', 'Mail');
    $columns[3] = array('status', 'Status');
    $columns[4] = array('roles', 'Roles');
    $columns[5] = array('picture', 'Picture');
    $columns[6] = array('interests', 'Interests');
    $columns[7] = array('bio', 'Bio');
    $columns[8] = array('first', 'First');
    $columns[9] = array('last', 'Last');
    return $columns;
  }

  public function prepareRow($row) {
    $user_roles = explode(", ", $row->roles);
    $roles = array('2' => '2');
    foreach ($user_roles as $role_name) {
      $rid = db_query('SELECT rid FROM {role} WHERE name = :name', array(':name' => $role_name))->fetchField();
      $roles[$rid] = $rid;
    }
    $row->roles = $roles;
    $row->interests = explode(", ", $row->interests);
    return TRUE;
  }

}

class DFSWEMUserPictures extends ImportBaseUserPictures {
  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.users.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->addFieldMapping('source_dir')->defaultValue($import_path . 'images');
  }
  function csvcolumns() {
    $columns[5] = array('picture', 'Picture');
    return $columns;
  }
}
