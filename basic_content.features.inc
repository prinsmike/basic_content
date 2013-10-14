<?php
/**
 * @file
 * basic_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function basic_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function basic_content_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Upload a file to use it anywhere on the website.'),
      'has_title' => '1',
      'title_label' => t('Resource name'),
      'help' => '',
    ),
  );
  return $items;
}
