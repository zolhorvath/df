<?php
/**
 * @file
 * dfs_wem_personalize.personalize.inc
 */

/**
 * Implements hook_personalize_default_agents().
 */
function dfs_wem_personalize_personalize_default_agents() {
  $export = array();

  $personalize_agent = new stdClass();
  $personalize_agent->disabled = FALSE; /* Edit this to true to make a default personalize_agent disabled initially */
  $personalize_agent->api_version = 1;
  $personalize_agent->machine_name = 'wem-campaign';
  $personalize_agent->plugin = 'personalize_target';
  $personalize_agent->started = 0;
  $personalize_agent->label = 'WEM Campaign';
  $personalize_agent->data = array(
    'visitor_context' => array(),
    'cache_decisions' => 1,
  );
  $export['wem-campaign'] = $personalize_agent;

  return $export;
}
