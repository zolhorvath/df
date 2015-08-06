<?php
/**
 * @file
 * dfs_med_brand.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfs_med_brand_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brand_set|node|brand|form';
  $field_group->group_name = 'group_brand_set';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'brand';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brand Settings',
    'weight' => '7',
    'children' => array(
      0 => 'field_greylist',
      1 => 'field_link_image',
      2 => 'field_link_image_hover',
      3 => 'field_superbrand',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-brand-set field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_brand_set|node|brand|form'] = $field_group;

  return $export;
}
