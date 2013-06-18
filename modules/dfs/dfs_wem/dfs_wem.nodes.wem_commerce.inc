<?php

/**
 * @file
 *  Migrations for WEM Commerce Product Nodes.
 */

class DFSWEMCommerceNodes extends DemoFrameworkBaseCommerceNodes {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import commerce product nodes.');

    $import_path = drupal_get_path('module', 'dfs_wem') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_wem.nodes.wem_commerce.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('wem_commerce');

    // Commerce
    $this->addFieldMapping('field_wem_product_ref', 'skus');
    $this->addFieldMapping('field_wem_com_rel_interests', 'interests');

    // Workbench
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('description', 'Description');
    $columns[2] = array('sku', 'SKU');
    $columns[3] = array('interests', 'Interests');
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

