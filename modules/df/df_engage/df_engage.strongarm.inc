<?php
/**
 * @file
 * df_engage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function df_engage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bean_ctools_prefix';
  $strongarm->value = TRUE;
  $export['bean_ctools_prefix'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bean_ctools_separate';
  $strongarm->value = FALSE;
  $export['bean_ctools_separate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_commerce';
  $strongarm->value = 0;
  $export['comment_anonymous_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_commerce';
  $strongarm->value = '2';
  $export['comment_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_commerce';
  $strongarm->value = 1;
  $export['comment_default_mode_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_commerce';
  $strongarm->value = '50';
  $export['comment_default_per_page_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_commerce';
  $strongarm->value = 1;
  $export['comment_form_location_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_commerce';
  $strongarm->value = '1';
  $export['comment_preview_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_commerce';
  $strongarm->value = 1;
  $export['comment_subject_field_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_field';
  $strongarm->value = 'commerce_customer_shipping';
  $export['commerce_customer_profile_shipping_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__product';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '-10',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'status' => array(
          'weight' => '35',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_commerce_product__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__commerce';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_default_fields';
  $strongarm->value = array();
  $export['marketo_default_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_javascript_library';
  $strongarm->value = '//munchkin.marketo.net/munchkin.js';
  $export['marketo_ma_munchkin_javascript_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_pages';
  $strongarm->value = 'foo';
  $export['marketo_ma_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_tracking_method';
  $strongarm->value = 'soap';
  $export['marketo_ma_tracking_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_visibility_pages';
  $strongarm->value = '1';
  $export['marketo_ma_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_webform_fields_soap';
  $strongarm->value = 1;
  $export['marketo_ma_webform_fields_soap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_commerce';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_commerce';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_commerce';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_commerce';
  $strongarm->value = '1';
  $export['node_preview_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_commerce';
  $strongarm->value = 1;
  $export['node_submitted_commerce'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_user_user';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_user_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_accounts_string';
  $strongarm->value = 'Linked accounts';
  $export['rpx_accounts_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_attach_login_form';
  $strongarm->value = 1;
  $export['rpx_attach_login_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_bypass_email_verification';
  $strongarm->value = 1;
  $export['rpx_bypass_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_label_comments';
  $strongarm->value = 'Share your comment:';
  $export['rpx_default_label_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_label_nodes';
  $strongarm->value = 'Comment:';
  $export['rpx_default_label_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_linktext_comments';
  $strongarm->value = '[comment:subject]';
  $export['rpx_default_linktext_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_linktext_nodes';
  $strongarm->value = '[node:title]';
  $export['rpx_default_linktext_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_message_comments';
  $strongarm->value = 'Commented on [site:name].';
  $export['rpx_default_message_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_message_nodes';
  $strongarm->value = 'Shared [node:title] on [site:name].';
  $export['rpx_default_message_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_summary_comments';
  $strongarm->value = '[comment:body]';
  $export['rpx_default_summary_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_summary_nodes';
  $strongarm->value = '[node:body]';
  $export['rpx_default_summary_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_title_comments';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_default_title_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_default_title_nodes';
  $strongarm->value = '[node:title] | [site:name]';
  $export['rpx_default_title_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_enabled_providers';
  $strongarm->value = array(
    0 => 'google',
    1 => 'openid',
    2 => 'twitter',
  );
  $export['rpx_enabled_providers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_force_registration_form';
  $strongarm->value = 0;
  $export['rpx_force_registration_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_import_profile_photo';
  $strongarm->value = 0;
  $export['rpx_import_profile_photo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_javascript_global';
  $strongarm->value = 0;
  $export['rpx_javascript_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_login_icons_size';
  $strongarm->value = 'small';
  $export['rpx_login_icons_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_login_links_weight';
  $strongarm->value = '150';
  $export['rpx_login_links_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_mail_rpx_confirm_email_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name].

To confirm your email address, click on this link or copy and paste it in your browser:

[user:one-time-login-url]

After confirming your email address, you will be able to log in to [site:name] using your new account.

--  [site:name] team';
  $export['rpx_mail_rpx_confirm_email_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_mail_rpx_confirm_email_subject';
  $strongarm->value = 'Confirm your account at [site:name]';
  $export['rpx_mail_rpx_confirm_email_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_mapping_api';
  $strongarm->value = 0;
  $export['rpx_mapping_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_signin_string';
  $strongarm->value = 'Sign in using one of these accounts:';
  $export['rpx_signin_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_social_enabled';
  $strongarm->value = 1;
  $export['rpx_social_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_social_pub';
  $strongarm->value = 'twitter';
  $export['rpx_social_pub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rpx_user_help_text';
  $strongarm->value = '<p>This site supports <a href="http://www.janrain.com/products/engage/">Janrain Engage</a>, an easy way to log in to many websites using your account with Facebook, Google, Yahoo!, Twitter and other identity providers. Janrain Engage can reduce the necessity of managing many usernames and passwords for many websites.</p><p>To use Janrain Engage, choose a provider and sign in if prompted. Upon successful signin you will be returned to this site as a registered user. Next time you log in, you will be able to use the same 3rd party account instead of a regular username and password. You can have multiple 3rd party accounts if you like; just keep adding them here.</p>';
  $export['rpx_user_help_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'salesforce_pull_limit';
  $strongarm->value = 50;
  $export['salesforce_pull_limit'] = $strongarm;

  return $export;
}
