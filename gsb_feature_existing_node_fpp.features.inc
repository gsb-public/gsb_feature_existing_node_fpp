<?php
/**
 * @file
 * gsb_feature_existing_node_fpp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_existing_node_fpp_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_existing_node_fpp_views_api() {
  return array("api" => "3.0");
}
