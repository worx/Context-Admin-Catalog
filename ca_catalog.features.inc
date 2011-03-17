<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_catalog_ctools_plugin_api() {
  module_load_include('inc', 'ca_catalog', 'ca_catalog.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_catalog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_catalog_imagecache_default_presets() {
  module_load_include('inc', 'ca_catalog', 'ca_catalog.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_catalog_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function ca_catalog_default_page_manager_pages() {
  module_load_include('inc', 'ca_catalog', 'ca_catalog.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_catalog_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function ca_catalog_views_default_views() {
  module_load_include('inc', 'ca_catalog', 'ca_catalog.features.views');
  $args = func_get_args();
  return call_user_func_array('_ca_catalog_views_default_views', $args);
}
