<?php
/**
 * @file
 * dfs_med_episodes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfs_med_episodes_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_associated|node|episode|form';
  $field_group->group_name = 'group_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episode';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associations',
    'weight' => '4',
    'children' => array(
      0 => 'field_subtext',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_associated|node|episode|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection|node|episodic_collection|form';
  $field_group->group_name = 'group_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episodic_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collection',
    'weight' => '5',
    'children' => array(
      0 => 'field_collected',
      1 => 'group_override_count',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-collection field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_collection|node|episodic_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured|node|episodic_collection|form';
  $field_group->group_name = 'group_featured';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episodic_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Callout',
    'weight' => '6',
    'children' => array(
      0 => 'field_featured',
      1 => 'field_featured_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured|node|episodic_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|episode|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episode';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_guidance',
      1 => 'field_length',
      2 => 'field_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|episode|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_override_count|node|episodic_collection|form';
  $field_group->group_name = 'group_override_count';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episodic_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_collection';
  $field_group->data = array(
    'label' => 'Count',
    'weight' => '6',
    'children' => array(
      0 => 'field_collected_count',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Count',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-override-count field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_override_count|node|episodic_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|episode|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episode';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_quote',
      2 => 'field_quote_by',
      3 => 'field_supplemental',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_text|node|episode|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|episode|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'episode';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '11',
    'children' => array(
      0 => 'field_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video|node|episode|form'] = $field_group;

  return $export;
}
