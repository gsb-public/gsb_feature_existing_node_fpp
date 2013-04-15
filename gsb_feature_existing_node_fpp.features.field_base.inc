<?php
/**
 * @file
 * gsb_feature_existing_node_fpp.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gsb_feature_existing_node_fpp_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_existing_node_fpp_ref'
  $field_bases['field_existing_node_fpp_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_existing_node_fpp_ref',
    'foreign keys' => array(),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'existing_node_fpp_reference',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
