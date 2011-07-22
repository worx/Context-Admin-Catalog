<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_catalog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_catalog_product_category';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'menu' => '-2',
    'path' => '2',
  );

  $export['content_extra_weights_ca_catalog_product_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_catalog_product_sub_category';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'menu' => '-2',
    'path' => '2',
  );

  $export['content_extra_weights_ca_catalog_product_sub_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_catalog_product_category';
  $strongarm->value = 'form-2fbe1ed8a9c4fc929519cbb3f06b3dfc';

  $export['form_build_id_ca_catalog_product_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_catalog_product_sub_category';
  $strongarm->value = 'form-a72b16a80ae32159a2301a87fc748467';

  $export['form_build_id_ca_catalog_product_sub_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_catalog_product_category';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_catalog_product_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_catalog_product_sub_category';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_catalog_product_sub_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled_ca_catelog';
  $strongarm->value = FALSE;

  $export['page_manager_node_view_disabled_ca_catelog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_catalog_product_category_pattern';
  $strongarm->value = 'catalog/[title-raw]';

  $export['pathauto_node_ca_catalog_product_category_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_catalog_product_sub_category_pattern';
  $strongarm->value = '[field_ca_catalog_parent_category-path]/[title-raw]';

  $export['pathauto_node_ca_catalog_product_sub_category_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_product_pattern';
  $strongarm->value = '[field_ca_catalog_parent_category-path]/[title-raw]';

  $export['pathauto_node_product_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_node_types_ca_catalog';
  $strongarm->value = array(
    'ca_catalog_product_category' => 'ca_catalog_product_category',
  );

  $export['weight_node_types_ca_catalog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_ca_catalog';
  $strongarm->value = '90';

  $export['weight_range_ca_catalog'] = $strongarm;
  return $export;
}
