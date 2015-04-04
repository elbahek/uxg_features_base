<?php
/**
 * @file
 * uxg_features_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uxg_features_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
