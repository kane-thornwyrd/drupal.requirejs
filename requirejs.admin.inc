<?php

function requirejs_admin_settings(&$form_state) {
  $form = array();

  $form['requirejs_optimizer_enabled'] = array(
    '#title' => t('Enable optimizer'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('requirejs_optimizer_enabled', FALSE),
  );

  $form['requirejs_optimizer_path'] = array(
    '#title' => t('Optimizer path'),
    '#type' => 'textfield',
    '#description' => t('The full path to execute the r.js optimizer which depends on node.  The easiest way to install it is via npm and the command <code>npm install -g requirejs</code> run as root.'),
    '#default_value' => requirejs_get_optimizer_path(),
  );

  /*
  $form['requirejs_optimizer_clear_cache'] = array(
    '#type' => 'submit',
    '#value' => t('Clear optimizer cache'),
    '#submit' => array('requirejs_admin_clear_cache'),
  );
  */

  return system_settings_form($form);
}
