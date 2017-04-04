<?php
/**
 * @file
 * in_country_blogs.features.inc
 */

/**
 * Implements hook_node_info().
 */
function in_country_blogs_node_info() {
  $items = array(
    'ethiopia_blog' => array(
      'name' => t('Ethiopia blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'malawi_blog' => array(
      'name' => t('Malawi blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mozambique_blog' => array(
      'name' => t('Mozambique blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sierra_leone_blog' => array(
      'name' => t('Sierra Leone blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'south_africa_blog' => array(
      'name' => t('South Africa blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tanzania_blog' => array(
      'name' => t('Tanzania blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'uganda_blog' => array(
      'name' => t('Uganda blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vietnam_blog' => array(
      'name' => t('Vietnam blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'zambia_blog' => array(
      'name' => t('Zambia blog'),
      'base' => 'node_content',
      'description' => t('Short updates from Key Partner Country. Can include embedded images or videos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
