<?php
/**
 * @file
 * dfs_wem.features.inc
 */

/**
 * Implements hook_default_collection().
 */
function dfs_wem_default_collection() {
  $items = array();
  $items['wem_munich_calling'] = entity_import('collection', '{
    "name" : "wem_munich_calling",
    "label" : "Munich Calling",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function dfs_wem_commerce_product_default_types() {
  $items = array(
    'wem_product' => array(
      'type' => 'wem_product',
      'name' => 'WEM Product',
      'description' => '',
      'help' => '',
      'revision' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function dfs_wem_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dfs_wem_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dfs_wem_image_default_styles() {
  $styles = array();

  // Exported image style: wem-user-tiny.
  $styles['wem-user-tiny'] = array(
    'name' => 'wem-user-tiny',
    'label' => 'wem-user-tiny',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dfs_wem_node_info() {
  $items = array(
    'wem_commerce' => array(
      'name' => t('WEM Commerce'),
      'base' => 'node_content',
      'description' => t('The <em>Commerce</em> nodes that should have products attached to them.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wem_contest' => array(
      'name' => t('WEM Contest'),
      'base' => 'node_content',
      'description' => t('A <em>Contest</em> that authenticated users can enter by joining the Organic Group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wem_news' => array(
      'name' => t('WEM News'),
      'base' => 'node_content',
      'description' => t('A <em>News</em> content type to be used by the WEM Scenario.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wem_product_review' => array(
      'name' => t('WEM Product Review'),
      'base' => 'node_content',
      'description' => t('A <em>Product Review</em> is created by authenticated customers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wem_tweet' => array(
      'name' => t('WEM Tweet'),
      'base' => 'node_content',
      'description' => t('A <em>WEM Tweet</em> is imported via feeds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_salesforce_mapping().
 */
function dfs_wem_default_salesforce_mapping() {
  $items = array();
  $items['wem_contest_entry_to_lead'] = entity_import('salesforce_mapping', '{
    "type" : "salesforce_mapping",
    "name" : "wem_contest_entry_to_lead",
    "label" : "WEM Contest entry to lead",
    "sync_triggers" : "3",
    "salesforce_object_type" : "Lead",
    "salesforce_record_type" : "default",
    "drupal_entity_type" : "og_membership",
    "drupal_bundle" : "og_membership_type_default",
    "field_mappings" : [
      {
        "drupal_field" : { "fieldmap_type" : "token", "fieldmap_value" : "[current-user:name]" },
        "salesforce_field" : {
          "length" : 80,
          "name" : "LastName",
          "type" : "string",
          "defaultValue" : null,
          "label" : "Last Name",
          "byteLength" : 240,
          "unique" : false,
          "calculated" : false,
          "scale" : 0,
          "precision" : 0,
          "nameField" : false,
          "sortable" : true,
          "filterable" : true,
          "nillable" : false,
          "caseSensitive" : false,
          "inlineHelpText" : null,
          "controllerName" : null,
          "writeRequiresMasterRead" : false,
          "externalId" : false,
          "idLookup" : false,
          "autoNumber" : false,
          "soapType" : "xsd:string",
          "restrictedPicklist" : false,
          "namePointing" : false,
          "custom" : false,
          "defaultedOnCreate" : false,
          "deprecatedAndHidden" : false,
          "htmlFormatted" : false,
          "defaultValueFormula" : null,
          "calculatedFormula" : null,
          "picklistValues" : [],
          "dependentPicklist" : false,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "cascadeDelete" : false,
          "restrictedDelete" : false,
          "digits" : 0,
          "createable" : true,
          "updateable" : true,
          "groupable" : true,
          "permissionable" : false,
          "displayLocationInDecimal" : false
        },
        "key" : false,
        "direction" : "drupal_sf"
      },
      {
        "drupal_field" : { "fieldmap_type" : "token", "fieldmap_value" : "[site:name]" },
        "salesforce_field" : {
          "length" : 255,
          "name" : "Company",
          "type" : "string",
          "defaultValue" : null,
          "label" : "Company",
          "byteLength" : 765,
          "unique" : false,
          "calculated" : false,
          "scale" : 0,
          "precision" : 0,
          "nameField" : false,
          "sortable" : true,
          "filterable" : true,
          "nillable" : false,
          "caseSensitive" : false,
          "inlineHelpText" : null,
          "controllerName" : null,
          "writeRequiresMasterRead" : false,
          "externalId" : false,
          "idLookup" : false,
          "autoNumber" : false,
          "soapType" : "xsd:string",
          "restrictedPicklist" : false,
          "namePointing" : false,
          "custom" : false,
          "defaultedOnCreate" : false,
          "deprecatedAndHidden" : false,
          "htmlFormatted" : false,
          "defaultValueFormula" : null,
          "calculatedFormula" : null,
          "picklistValues" : [],
          "dependentPicklist" : false,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "cascadeDelete" : false,
          "restrictedDelete" : false,
          "digits" : 0,
          "createable" : true,
          "updateable" : true,
          "groupable" : true,
          "permissionable" : false,
          "displayLocationInDecimal" : false
        },
        "key" : false,
        "direction" : "drupal_sf"
      },
      {
        "drupal_field" : { "fieldmap_type" : "token", "fieldmap_value" : "[current-page:url]" },
        "salesforce_field" : {
          "length" : 32000,
          "name" : "Description",
          "type" : "textarea",
          "defaultValue" : null,
          "label" : "Description",
          "byteLength" : 96000,
          "unique" : false,
          "calculated" : false,
          "scale" : 0,
          "precision" : 0,
          "nameField" : false,
          "sortable" : false,
          "filterable" : false,
          "nillable" : true,
          "caseSensitive" : false,
          "inlineHelpText" : null,
          "controllerName" : null,
          "writeRequiresMasterRead" : false,
          "externalId" : false,
          "idLookup" : false,
          "autoNumber" : false,
          "soapType" : "xsd:string",
          "restrictedPicklist" : false,
          "namePointing" : false,
          "custom" : false,
          "defaultedOnCreate" : false,
          "deprecatedAndHidden" : false,
          "htmlFormatted" : false,
          "defaultValueFormula" : null,
          "calculatedFormula" : null,
          "picklistValues" : [],
          "dependentPicklist" : false,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "cascadeDelete" : false,
          "restrictedDelete" : false,
          "digits" : 0,
          "createable" : true,
          "updateable" : true,
          "groupable" : false,
          "permissionable" : true,
          "displayLocationInDecimal" : false
        },
        "key" : false,
        "direction" : "drupal_sf"
      }
    ],
    "push_async" : "0",
    "push_batch" : "0",
    "created" : "1381258407",
    "updated" : "1381258407",
    "weight" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
