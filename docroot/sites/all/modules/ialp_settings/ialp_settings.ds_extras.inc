<?php
/**
 * @file
 * ialp_settings.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function ialp_settings_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'browse-page';
  $ds_vd->label = 'Browse: Page (Views template)';
  $export['browse-page'] = $ds_vd;

  return $export;
}
