<?php


/**
 *  Builds the admin form to configure the module
 *
 */

function podio_webform_admin_settings(){
    $form['podio_webform_app_id'] = array(
        '#type' => 'textfield',
        '#title' => t('Podio App ID'),
        '#default_value' => variable_get('podio_webform_app_id', ''),
        '#description' => t('The ID from the app on podio.'),
        '#required' => TRUE,
    );
    $form['podio_webform_app_token'] = array(
        '#type' => 'textfield',
        '#title' => t('Podio App Token'),
        '#default_value' => variable_get('podio_webform_app_token', ''),
        '#description' => t('The app token.'),
        '#required' => TRUE,
    );

    return system_settings_form($form);
}