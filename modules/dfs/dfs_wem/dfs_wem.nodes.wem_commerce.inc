<?php

/**
 * @file
 *  Migrations for WEM Commerce Product Nodes.
 */

class DFSWEMCommerceNodes extends DemoFrameworkBaseCommerceNodes {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import WEM Commerce product nodes.');
    $this->dependencies = array('DFSWEMProducts');
    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.nodes.wem_commerce.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('wem_commerce');
    // Commerce
    $this->addFieldMapping('field_wem_product_ref', 'skus');
    $this->addFieldMapping('field_wem_com_rel_interests', 'interests');
    // Workbench
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');
    // UUID
    $this->addFieldMapping('uuid', 'uuid');
    // Created
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('description', 'Description');
    $columns[2] = array('sku', 'SKU');
    $columns[3] = array('interests', 'Interests');
    $columns[4] = array('uuid', 'UUID');
    $columns[5] = array('created', 'Created');
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

}

