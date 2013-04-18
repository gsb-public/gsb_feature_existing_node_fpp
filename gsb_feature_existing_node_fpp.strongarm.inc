<?php
/**
 * @file
 * gsb_feature_existing_node_fpp.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_existing_node_fpp_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__existing_node';
  $strongarm->value = array(
    'view_modes' => array(
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'megamenu' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__existing_node'] = $strongarm;

  return $export;
}
