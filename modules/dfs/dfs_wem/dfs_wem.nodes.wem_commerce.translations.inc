<?php

/**
 * @file
 *  Migrations for WEM Commerce Product Nodes Translations.
 */

class DFSWEMCommerceNodesTranslations extends DemoFrameworkBaseCommerceNodes {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'translated_title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->description = t('Import translated WEM Commerce product nodes.');
    $this->dependencies = array('DFSWEMProducts');
    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.nodes.wem_commerce.translations.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('wem_commerce');
    // Commerce
    $this->addFieldMapping('field_wem_product_ref', 'skus');
    $this->addFieldMapping('field_wem_com_rel_interests', 'interests');
    // Workbench
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');
    // Translations
    $this->addFieldMapping('title', 'translated_title');
    $this->addFieldMapping('tnid', 'title')->sourceMigration('DFSWEMCommerceNodes');
    // UUID
    $this->addFieldMapping('uuid', 'uuid');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Source Title');
    $columns[1] = array('language', 'Language');
    $columns[2] = array('translated_title', 'Title');
    $columns[3] = array('description', 'Description');
    $columns[4] = array('sku', 'SKU');
    $columns[5] = array('interests', 'Interests');
    $columns[6] = array('uuid', 'UUID');
    return $columns;
  }

  function prepareRow($row) {
    $products = array();
    foreach (explode(', ', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
    $row->interests = explode(", ", $row->interests);
    return TRUE;
  }

  function prepare(&$node, $row) {
    if (isset($node->tnid) && ($source = node_load($node->tnid))) {
      $node->translation_source = $source;
    }
  }

}
