<?php
/**
 * @file
 * dfs_med_series.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfs_med_series_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ep_count|node|series|form';
  $field_group->group_name = 'group_ep_count';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_episodes';
  $field_group->data = array(
    'label' => 'Count',
    'weight' => '5',
    'children' => array(
      0 => 'field_collected_count',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Count',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ep-count field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ep_count|node|series|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_episodes|node|series|form';
  $field_group->group_name = 'group_episodes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Episodes',
    'weight' => '6',
    'children' => array(
      0 => 'field_series_episodes',
      1 => 'group_ep_count',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-episodes field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_episodes|node|series|form'] = $field_group;

  return $export;
}
