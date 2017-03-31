<?php
/**
 * @file
 * microblog.features.inc
 */

/**
 * Implements hook_node_info().
 */
function microblog_node_info() {
  $items = array(
    'microblog' => array(
      'name' => t('Microblog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Countries. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
