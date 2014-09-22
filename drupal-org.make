api = 2
core = 7.x

projects[acquia_connector][version] = "2.13"
projects[acquia_connector][type] = "module"
projects[acquia_connector][subdir] = "contrib"

projects[breakpoints][version] = "1.3"
projects[breakpoints][type] = "module"
projects[breakpoints][subdir] = "contrib"

projects[ctools][version] = "1.x-dev"
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = "git"
projects[ctools][download][revision] = "ae66d65"
projects[ctools][download][branch] = "7.x-1.x"
; Provide a contextual link for view panes
; http://drupal.org/node/1669756
projects[ctools][patch][1669756] = "http://drupal.org/files/ctools-1669756-1.patch"

projects[demonstratie_panels][version] = "1.x-dev"
projects[demonstratie_panels][type] = "module"
projects[demonstratie_panels][subdir] = "contrib"
projects[demonstratie_panels][download][type] = "git"
projects[demonstratie_panels][download][branch] = "7.x-1.x"

projects[devel][version] = "1.3"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[ember_support][version] = "1.x-dev"
projects[ember_support][type] = "module"
projects[ember_support][subdir] = "contrib"
projects[ember_support][download][type] = "git"
projects[ember_support][download][branch] = "7.x-1.x"

projects[escape_admin][version] = "1.x-dev"
projects[escape_admin][type] = "module"
projects[escape_admin][subdir] = "contrib"
projects[escape_admin][download][type] = "git"
projects[escape_admin][download][revision] = "ecd3f58"
projects[escape_admin][download][branch] = "7.x-1.x"

projects[entity][version] = "1.x-dev"
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git"
projects[entity][download][revision] = "4d2cc6f"
projects[entity][download][branch] = "7.x-1.x"

projects[features][version] = "2.x-dev"
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"
projects[features][download][revision] = "9f4ecc7"
projects[features][download][branch] = "7.x-2.x"

projects[import][version] = "1.x-dev"
projects[import][type] = "module"
projects[import][subdir] = "contrib"
projects[import][download][type] = "git"
projects[import][download][branch] = "7.x-1.x"

projects[jquery_update][version] = "2.4"
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1.2"
projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[migrate][version] = "2.5"
projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"

projects[migrate_extras][version] = "2.5"
projects[migrate_extras][type] = "module"
projects[migrate_extras][subdir] = "contrib"
; Add support for UUID module for 7.x
; http://drupal.org/node/1870886
projects[migrate_extras][patch][1870886] = "http://drupal.org/files/migrate_extras-2.5-add_support_for_uuid-1870886-4-do-not-test.patch"
; Add support for color_field module
; http://drupal.org/node/2026003
projects[migrate_extras][patch][2026003] = "http://drupal.org/files/color_field_migrate_support.patch"

projects[module_filter][version] = "2.0-alpha2"
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[navbar][version] = "1.x-dev"
projects[navbar][type] = "module"
projects[navbar][subdir] = "contrib"
projects[navbar][download][type] = "git"
projects[navbar][download][revision] = "bd3389b"
projects[navbar][download][branch] = "7.x-1.x"
; Menu icons for contrib modules
; http://drupal.org/node/1954912
projects[navbar][patch][1954912] = "http://drupal.org/files/issues/navbar-contrib-icons-1954912-20.patch"
; JSON Error caused in Views when navbar.tableheader is not loaded
; http://drupal.org/node/2263205
projects[navbar][patch][2263205] = "http://drupal.org/files/issues/navbar-tableheader-views.patch"

projects[pathauto][version] = "1.2"
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[pm_existing_pages][version] = "1.4"
projects[pm_existing_pages][type] = "module"
projects[pm_existing_pages][subdir] = "contrib"

projects[responsive_preview][version] = "1.x-dev"
projects[responsive_preview][type] = "module"
projects[responsive_preview][subdir] = "contrib"
projects[responsive_preview][download][type] = "git"
projects[responsive_preview][download][revision] = "d741779"
projects[responsive_preview][download][branch] = "7.x-1.x"
; Before js processing, the phone image incorrectly positioned.
; https://drupal.org/node/2276789
projects[responsive_preview][patch][2276789] = "http://drupal.org/files/issues/responsive_preview-phone_image_incorrectly_positioned-2276789-2.patch"

projects[role_export][version] = "1.0"
projects[role_export][type] = "module"
projects[role_export][subdir] = "contrib"

projects[rules][version] = "2.7"
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

; Assemble
projects[assemble][version] = "1.x-dev"
projects[assemble][type] = "module"
projects[assemble][subdir] = "contrib"
projects[assemble][download][type] = "git"
projects[assemble][download][branch] = "7.x-1.x"

projects[bean][version] = "1.x-dev"
projects[bean][type] = "module"
projects[bean][subdir] = "contrib"
projects[bean][download][type] = "git"
projects[bean][download][revision] = "2d0f262"
projects[bean][download][branch] = "7.x-1.x"

projects[bean_tax][version] = "2.x-dev"
projects[bean_tax][type] = "module"
projects[bean_tax][subdir] = "contrib"
projects[bean_tax][download][type] = "git"
projects[bean_tax][download][revision] = "59e57e6"
projects[bean_tax][download][branch] = "7.x-1.x"

projects[better_formats][version] = "1.0-beta1"
projects[better_formats][type] = "module"
projects[better_formats][subdir] = "contrib"

projects[colorbox][version] = "2.x-dev"
projects[colorbox][type] = "module"
projects[colorbox][subdir] = "contrib"
projects[colorbox][download][type] = "git"
projects[colorbox][download][revision] = "ce90f5d"
projects[colorbox][download][branch] = "7.x-1.x"

projects[context_admin][version] = "1.x-dev"
projects[context_admin][type] = "module"
projects[context_admin][subdir] = "contrib"
projects[context_admin][download][type] = "git"
projects[context_admin][download][revision] = "15a8390"
projects[context_admin][download][branch] = "7.x-1.x"

projects[entityreference][version] = "1.x-dev"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"
projects[entityreference][download][type] = "git"
projects[entityreference][download][revision] = "dc4196b"
projects[entityreference][download][branch] = "7.x-1.x"

projects[entityreference_prepopulate][version] = "1.5"
projects[entityreference_prepopulate][type] = "module"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[form_builder][version] = "1.x-dev"
projects[form_builder][type] = "module"
projects[form_builder][subdir] = "contrib"
projects[form_builder][download][type] = "git"
projects[form_builder][download][revision] = "3d904df"
projects[form_builder][download][branch] = "7.x-1.x"
; The form editing part rolls to hide, can not be edited
; http://drupal.org/node/1987332
projects[form_builder][patch][1987332] = "http://drupal.org/files/rolls-past-editing-form-1987332-4.patch"

projects[fape][version] = "1.2"
projects[fape][type] = "module"
projects[fape][subdir] = "contrib"

projects[field_group][version] = "1.x-dev"
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"
projects[field_group][download][type] = "git"
projects[field_group][download][revision] = "9cdde2b"
projects[field_group][download][branch] = "7.x-1.x"

projects[fieldable_panels_panes][version] = "1.x-dev"
projects[fieldable_panels_panes][type] = "module"
projects[fieldable_panels_panes][subdir] = "contrib"
projects[fieldable_panels_panes][download][type] = "git"
projects[fieldable_panels_panes][download][revision] = "b9628af"
projects[fieldable_panels_panes][download][branch] = "7.x-1.x"

projects[gridbuilder][version] = "1.0-alpha2"
projects[gridbuilder][type] = "module"
projects[gridbuilder][subdir] = "contrib"

projects[magic_beans][version] = "1.x-dev"
projects[magic_beans][type] = "module"
projects[magic_beans][subdir] = "contrib"
projects[magic_beans][download][type] = "git"
projects[magic_beans][download][revision] = "6c5d19e"
projects[magic_beans][download][branch] = "7.x-1.x"

projects[metatag][version] = "1.0-rc2"
projects[metatag][type] = "module"
projects[metatag][subdir] = "contrib"

projects[options_element][version] = "1.x-dev"
projects[options_element][type] = "module"
projects[options_element][subdir] = "contrib"
projects[options_element][download][type] = "git"
projects[options_element][download][revision] = "33fa8a7"
projects[options_element][download][branch] = "git"

projects[panelizer][version] = "3.x-dev"
projects[panelizer][subdir] = "contrib"
projects[panelizer][download][type] = "git"
projects[panelizer][download][revision] = "cea2a1a"
projects[panelizer][download][branch] = "7.x-3.x"
; Update the plugin attached to an existing handler
; http://drupal.org/node/2206961
projects[panelizer][patch][2206961] = "http://drupal.org/files/issues/2206961-update-the-plugin.patch"
; Option to update entity displays when default choice changed
; http://drupal.org/node/2332997
projects[panelizer][patch][2332997] = "http://drupal.org/files/issues/panelizer-n2332997-7.patch"

projects[panels][version] = "3.x-dev"
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"
projects[panels][download][revision] = "bcda4a6"
projects[panels][download][branch] = "7.x-3.x"

projects[panopoly_magic][version] = "1.x-dev"
projects[panopoly_magic][type] = "module"
projects[panopoly_magic][subdir] = "contrib"
projects[panopoly_magic][download][type] = "git"
projects[panopoly_magic][download][revision] = "1135fea"
projects[panopoly_magic][download][branch] = "7.x-1.x"

projects[panopoly_theme][version] = "1.x-dev"
projects[panopoly_theme][type] = "module"
projects[panopoly_theme][subdir] = "contrib"
projects[panopoly_theme][download][type] = "git"
projects[panopoly_theme][download][revision] = "d409deb"
projects[panopoly_theme][download][branch] = "7.x-1.x"
; Remove makefile from Panopoly Theme
; http://drupal.org/node/1904766
projects[panopoly_theme][patch][1904766] = "http://drupal.org/files/issues/panopoly_theme-makefile-free-1904766-13.patch"

projects[picture][version] = "1.x-dev"
projects[picture][type] = "module"
projects[picture][subdir] = "contrib"
projects[picture][download][type] = "git"
projects[picture][download][revision] = "3d9fe6c"
projects[picture][download][branch] = "7.x-1.x"

projects[simple_gmap][version] = "1.2"
projects[simple_gmap][type] = "module"
projects[simple_gmap][subdir] = "contrib"

projects[taxonomy_entity_index][version] = "1.0-beta7"
projects[taxonomy_entity_index][type] = "module"
projects[taxonomy_entity_index][subdir] = "contrib"

projects[ux_elements][version] = "1.x-dev"
projects[ux_elements][type] = "module"
projects[ux_elements][subdir] = "contrib"
projects[ux_elements][download][type] = "git"
projects[ux_elements][download][revision] = "87cdc5d"
projects[ux_elements][download][branch] = "master"
; PHP Fatal error: Cannot redeclare form_process_horizontal_tabs()
; http://drupal.org/node/1224568
projects[ux_elements][patch][1224568] = "http://drupal.org/files/issues/1224568-ux_elements_redeclare.patch"

projects[views][version] = "3.x-dev"
projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[views][download][type] = "git"
projects[views][download][revision] = "6595b1a"
projects[views][download][branch] = "7.x-3.x"
; Call to a member function init_display() on a non-object in
; modules/all/views/plugins/views_plugin_localization.inc
; http://drupal.org/node/1685144
projects[views][patch][1685144] = "http://drupal.org/files/views-1685144-localization-bug_1.patch"

projects[views_autocomplete_filters][version] = "1.0-beta2"
projects[views_autocomplete_filters][type] = "module"
projects[views_autocomplete_filters][subdir] = "contrib"

projects[views_field_view][version] = "1.x-dev"
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"
projects[views_field_view][download][type] = "git"
projects[views_field_view][download][revision] = "db93080"
projects[views_field_view][download][branch] = "7.x-1.x"

projects[views_bulk_operations][version] = "3.2"
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_load_more][version] = "1.1"
projects[views_load_more][type] = "module"
projects[views_load_more][subdir] = "contrib"

projects[webform][version] = "4.0-rc5"
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

projects[webform_alt_ui][version] = "1.x-dev"
projects[webform_alt_ui][type] = "module"
projects[webform_alt_ui][subdir] = "contrib"
projects[webform_alt_ui][download][type] = "git"
projects[webform_alt_ui][download][revision] = "0cfa6d0"
projects[webform_alt_ui][download][branch] = "master"
projects[webform_alt_ui][patch][2022773] = "http://drupal.org/files/webform_alt_ui-form_builder_compat-2022773-3.patch"

; Curate
projects[curate][version] = "1.x-dev"
projects[curate][type] = "module"
projects[curate][subdir] = "contrib"
projects[curate][download][type] = "git"
projects[curate][download][branch] = "7.x-1.x"

projects[ckeditor][version] = "1.x-dev"
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"
projects[ckeditor][download][type] = "git"
projects[ckeditor][download][revision] = "b0de255"
projects[ckeditor][download][branch] = "7.x-1.x"
; CKEditor accomodate latest Media changes
; http://drupal.org/node/2159403
projects[ckeditor][patch][2159403] = "http://drupal.org/files/issues/ckeditor-accomodate-latest-media-changes-81.patch"

projects[collections][version] = "1.x-dev"
projects[collections][type] = "module"
projects[collections][subdir] = "contrib"
projects[collections][download][type] = "git"
projects[collections][download][revision] = "b4e8212"
projects[collections][download][branch] = "7.x-1.x"

projects[date][version] = "2.8"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[file_entity][version] = "2.x-dev"
projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"
projects[file_entity][download][type] = "git"
projects[file_entity][download][revision] = "609fa9f"
projects[file_entity][download][branch] = "7.x-2.x"

projects[file_entity_link][version] = "1.0-alpha3"
projects[file_entity_link][type] = "module"
projects[file_entity_link][subdir] = "contrib"

projects[file_image_formatters][version] = "1.1"
projects[file_image_formatters][type] = "module"
projects[file_image_formatters][subdir] = "contrib"

projects[focal_point][version] = "1.0-alpha1"
projects[focal_point][type] = "module"
projects[focal_point][subdir] = "contrib"

projects[iib][version] = "1.x-dev"
projects[iib][type] = "module"
projects[iib][subdir] = "contrib"
projects[iib][download][type] = "git"
projects[iib][download][revision] = "17a55eb"
projects[iib][download][branch] = "7.x-1.x"
; Integrate IIB with the Navbar module and improve Toolbar integration
; http://drupal.org/node/1737036
projects[iib][patch][1737036] = "http://drupal.org/files/issues/iib-navbar-toolbar-1737036-51.patch"

projects[linkit][version] = "3.1"
projects[linkit][type] = "module"
projects[linkit][subdir] = "contrib"

projects[media][version] = "2.x-dev"
projects[media][type] = "module"
projects[media][subdir] = "contrib"
projects[media][download][type] = "git"
projects[media][download][revision] = "b2ba2da"
projects[media][download][branch] = "7.x-2.x"
; Improve UX for Media Thumbnail and Media Bulk Upload's multiform page 
; http://drupal.org/node/2166623
projects[media][patch][2166623] = "http://drupal.org/files/issues/media_bulk_upload-improve-multiform-2166623-2.patch"
; Media dialog appears underneath the Ctools modal dialog with latest jQuery UI
; http://drupal.org/node/2272567
projects[media][patch][2272567] = "http://www.drupal.org/files/issues/media-dialog-zindex-2272567-1.patch"

projects[media_preview_slider][version] = "1.x-dev"
projects[media_preview_slider][type] = "module"
projects[media_preview_slider][subdir] = "contrib"
projects[media_preview_slider][download][type] = "git"
projects[media_preview_slider][download][branch] = "7.x-1.x"
projects[media_preview_slider][download][url] = "http://git.drupal.org/sandbox/Brian14/2222597.git"

projects[media_youtube][version] = "2.x-dev"
projects[media_youtube][type] = "module"
projects[media_youtube][subdir] = "contrib"
projects[media_youtube][download][type] = "git"
projects[media_youtube][download][revision] = "187283f"
projects[media_youtube][download][branch] = "7.x-2.x"

projects[multiform][version] = "1.1"
projects[multiform][type] = "module"
projects[multiform][subdir] = "contrib"

projects[nra][version] = "1.0-alpha2"
projects[nra][type] = "module"
projects[nra][subdir] = "contrib"

projects[nra_workbench_moderation][version] = "1.x-dev"
projects[nra_workbench_moderation][type] = "module"
projects[nra_workbench_moderation][subdir] = "contrib"
projects[nra_workbench_moderation][download][type] = "git"
projects[nra_workbench_moderation][download][revision] = "9f17009"
projects[nra_workbench_moderation][download][branch] = "7.x-1.x"
; Errors when 'Status' column is built for new/unpublished items in NRA
; http://drupal.org/node/2163175
projects[nra_workbench_moderation][patch][2163175] = "http://drupal.org/files/issues/nra_workbench_moderation-no-published-state-2163175-1.patch"

projects[plupload][version] = "1.6"
projects[plupload][type] = "module"
projects[plupload][subdir] = "contrib"

projects[quickedit][version] = "1.x-dev"
projects[quickedit][type] = "module"
projects[quickedit][subdir] = "contrib"
projects[quickedit][download][type] = "git"
projects[quickedit][download][revision] = "28a314d"
projects[quickedit][download][branch] = "7.x-1.x"

projects[quickedit_tab][version] = "1.1"
projects[quickedit_tab][type] = "module"
projects[quickedit_tab][subdir] = "contrib"

projects[revision_scheduler][version] = "1.x-dev"
projects[revision_scheduler][type] = "module"
projects[revision_scheduler][subdir] = "contrib"
projects[revision_scheduler][download][type] = "git"
projects[revision_scheduler][download][revision] = "bb9fd39"
projects[revision_scheduler][download][branch] = "7.x-1.x"

projects[sps][version] = "1.x-dev"
projects[sps][type] = "module"
projects[sps][subdir] = "contrib"
projects[sps][download][type] = "git"
projects[sps][download][revision] = "be9bd83"
projects[sps][download][branch] = "7.x-1.x"
; UX improvements on page level IIB
; http://drupal.org/node/1733490
projects[sps][patch][1733490] = "http://drupal.org/files/sps-css-cleanup-1733490-3.patch"
; sps_entity_create() throws errors
; http://drupal.org/node/2288873
projects[sps][patch][2288873] = "http://drupal.org/files/issues/sps-undefiend-method-create-3.patch"

projects[workbench][version] = "1.x-dev"
projects[workbench][type] = "module"
projects[workbench][subdir] = "contrib"
projects[workbench][download][type] = "git"
projects[workbench][download][revision] = "6856e4a"
projects[workbench][download][branch] = "7.x-1.x"

projects[workbench_moderation][version] = "1.x-dev"
projects[workbench_moderation][type] = "module"
projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][download][type] = "git"
projects[workbench_moderation][download][revision] = "b38ac3e"
projects[workbench_moderation][download][branch] = "7.x-1.x"
; Panelizer is incompatible with moderation
; http://www.drupal.org/node/1402860
projects[workbench_moderation][patch][1402860] = "http://drupal.org/files/issues/workbench_moderation-panelizer_revisions-1402860-44_0.patch"

projects[workbench_moderation_buttons][version] = "1.x-dev"
projects[workbench_moderation_buttons][type] = "module"
projects[workbench_moderation_buttons][subdir] = "contrib"
projects[workbench_moderation_buttons][download][type] = "git"
projects[workbench_moderation_buttons][download][revision] = "5ee2a30"
projects[workbench_moderation_buttons][download][branch] = "7.x-1.x"
; Remove Current State button, change Save button to show current state value
; http://drupal.org/node/2338863
projects[workbench_moderation_buttons][patch][2338863] = "http://drupal.org/files/issues/workbench-moderation-buttons-2338863-4.patch"

projects[workbench_moderation_notes][version] = "1.x-dev"
projects[workbench_moderation_notes][type] = "module"
projects[workbench_moderation_notes][subdir] = "contrib"
projects[workbench_moderation_notes][download][type] = "git"
projects[workbench_moderation_notes][download][revision] = "8e5e6f4"
projects[workbench_moderation_notes][download][branch] = "7.x-1.x"

projects[xautoload][version] = "4.5"
projects[xautoload][type] = "module"
projects[xautoload][subdir] = "contrib"

; DF Admin
projects[feeds][version] = "2.0-alpha8"
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"

projects[feeds_jsonpath_parser][version] = "1.x-dev"
projects[feeds_jsonpath_parser][type] = "module"
projects[feeds_jsonpath_parser][subdir] = "contrib"
projects[feeds_jsonpath_parser][download][type] = "git"
projects[feeds_jsonpath_parser][download][revision] = "8b161c6"
projects[feeds_jsonpath_parser][download][branch] = "7.x-1.x"

projects[advanced_help][version] = "1.1"
projects[advanced_help][type] = "module"
projects[advanced_help][subdir] = "contrib"

; Support for Libraries API
; http://drupal.org/node/1083234
projects[feeds_jsonpath_parser][patch][1083234] = "http://drupal.org/files/feeds_jsonpath_parser-libraries-1083234-12.patch"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc5"
projects[masquerade][type] = "module"
projects[masquerade][subdir] = "contrib"

; DF Commerce
projects[addressfield][version] = "1.0-beta4"
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"

projects[commerce][version] = "1.x-dev"
projects[commerce][type] = "module"
projects[commerce][subdir] = "contrib"
projects[commerce][download][type] = "git"
projects[commerce][download][revision] = "40751b9"
projects[commerce][download][branch] = "7-x.1-x"

projects[commerce_addressbook][version] = "2.0-rc7"
projects[commerce_addressbook][type] = "module"
projects[commerce_addressbook][subdir] = "contrib"

projects[commerce_checkout_redirect][version] = "2.0-rc1"
projects[commerce_checkout_redirect][type] = "module"
projects[commerce_checkout_redirect][subdir] = "contrib"

projects[commerce_checkout_progress][version] = "1.3"
projects[commerce_checkout_progress][type] = "module"
projects[commerce_checkout_progress][subdir] = "contrib"

projects[commerce_extra_price_formatters][version] = 1.x-dev
projects[commerce_extra_price_formatters][type] = "module"
projects[commerce_extra_price_formatters][subdir] = "contrib"
projects[commerce_extra_price_formatters][download][type] = "git"
projects[commerce_extra_price_formatters][download][revision] = "1371336"
projects[commerce_extra_price_formatters][download][branch] = "7.x-1.x"

projects[commerce_features][version] = "1.0-rc1"
projects[commerce_features][type] = "module"
projects[commerce_features][subdir] = "contrib"
; Commerce shipping exportables with commerce features
; http://drupal.org/node/1402762
projects[commerce_features][patch][1402762] = "http://drupal.org/files/1402762_export_flat_rate_commerce_features-6.patch"

projects[commerce_message][version] = "1.0-rc3"
projects[commerce_message][type] = "module"
projects[commerce_message][subdir] = "contrib"
; Undefined property: MessageType::$module commerce message.message.inc:217
; http://drupal.org/node/2171201
projects[commerce_message][patch][2171201] = "http://drupal.org/files/issues/2171201-undefined-property-module-MessageType-6.patch"

projects[commerce_migrate][version] = "1.1"
projects[commerce_migrate][type] = "module"
projects[commerce_migrate][subdir] = "contrib"

projects[commerce_shipping][version] = "2.0"
projects[commerce_shipping][type] = "module"
projects[commerce_shipping][subdir] = "contrib"

projects[message][version] = "1.9"
projects[message][type] = "module"
projects[message][subdir] = "contrib"

projects[message_notify][version] = "2.5"
projects[message_notify][type] = "module"
projects[message_notify][subdir] = "contrib"

; DF Connect
projects[acquia_lift][version] = "1.x-dev"
projects[acquia_lift][type] = "module"
projects[acquia_lift][subdir] = "contrib"
projects[acquia_lift][download][type] = "git"
projects[acquia_lift][download][branch] = "7.x-1.x"

projects[google_analytics][version] = "1.3"
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[marketo_ma][version] = "1.1"
projects[marketo_ma][type] = "module"
projects[marketo_ma][subdir] = "contrib"

projects[mollom][version] = "2.4"
projects[mollom][type] = "module"
projects[mollom][subdir] = "contrib"

projects[purr_messages][version] = "2.0-beta3"
projects[purr_messages][type] = "module"
projects[purr_messages][subdir] = "contrib"

projects[sharethis][version] = "2.5"
projects[sharethis][type] = "module"
projects[sharethis][subdir] = "contrib"

; DF Engage
projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"

projects[mailsystem][version] = "2.34"
projects[mailsystem][type] = "module"
projects[mailsystem][subdir] = "contrib"

projects[mimemail][version] = "1.0-beta3"
projects[mimemail][type] = "module"
projects[mimemail][subdir] = "contrib"

projects[og][version] = "2.6"
projects[og][type] = "module"
projects[og][subdir] = "contrib"

projects[personalize][version] = "1.x-dev"
projects[personalize][type] = "module"
projects[personalize][subdir] = "contrib"
projects[personalize][download][type] = "git"
projects[personalize][download][branch] = "7.x-1.x"
; Personalized Fields break preview inside Panels
; http://drupal.org/node/2303111
projects[personalize][patch][2303111] = "http://drupal.org/files/issues/panels_fix_1.patch"

projects[radioactivity][version] = "2.8"
projects[radioactivity][type] = "module"
projects[radioactivity][subdir] = "contrib"

projects[uuid][version] = "1.x-dev"
projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"
projects[uuid][download][type] = "git"
projects[uuid][download][revision] = "4bbf92d"
projects[uuid][download][branch] = "7.x-1.x"

projects[uuid_features][version] = "1.x-dev"
projects[uuid_features][type] = "module"
projects[uuid_features][subdir] = "contrib"
projects[uuid_features][download][type] = "git"
projects[uuid_features][download][revision] = "aa514d6"
projects[uuid_features][download][branch] = "7.x-1.x"

projects[visitor_actions][version] = "1.x-dev"
projects[visitor_actions][type] = "module"
projects[visitor_actions][subdir] = "contrib"
projects[visitor_actions][download][type] = "git"
projects[visitor_actions][download][branch] = "7.x-1.x"

; DF Gallery
projects[manualcrop][version] = "1.4"
projects[manualcrop][type] = "module"
projects[manualcrop][subdir] = "contrib"

projects[media_gallery][version] = "2.x-dev"
projects[media_gallery][type] = "module"
projects[media_gallery][subdir] = "contrib"
projects[media_gallery][download][type] = "git"
projects[media_gallery][download][revision] = "86e73b0"
projects[media_gallery][download][branch] = "7.x-2.x"
; Do not create a Main menu link for 'Galleries'
; http://drupal.org/node/2169649
projects[media_gallery][patch][2169649] = "http://drupal.org/files/issues/media_gallery-no-menu-item-on-install-0.patch"

; DF Search
projects[custom_search][version] = "1.x-dev"
projects[custom_search][type] = "module"
projects[custom_search][subdir] = "contrib"
projects[custom_search][download][type] = "git"
projects[custom_search][download][revision] = "0d55d1e"
projects[custom_search][download][branch] = "7.x-1.x"

projects[location][version] = "3.1"
projects[location][type] = "module"
projects[location][subdir] = "contrib"

projects[facetapi][version] = "1.3"
projects[facetapi][type] = "module"
projects[facetapi][subdir] = "contrib"

projects[facetapi_slider][version] = "1.0"
projects[facetapi_slider][type] = "module"
projects[facetapi_slider][subdir] = "contrib"

projects[rich_snippets][version] = "1.x-dev"
projects[rich_snippets][type] = "module"
projects[rich_snippets][subdir] = "contrib"
projects[rich_snippets][download][type] = "git"
projects[rich_snippets][download][revision] = "fad5697"
projects[rich_snippets][download][branch] = "7.x-1.x"

projects[schemaorg][version] = "1.0-beta4"
projects[schemaorg][type] = "module"
projects[schemaorg][subdir] = "contrib"

projects[search_api][version] = "1.7"
projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"
; Server Enabled is not set on installation profile
; http://drupal.org/node/2236265
projects[search_api][patch][2236265] = "http://drupal.org/files/issues/search_api-server_enabled_notobject.patch"

projects[search_api_db][version] = 1.0
projects[search_api_db][type] = "module"
projects[search_api_db][subdir] = "contrib"

projects[search_api_page][version] = 1.0
projects[search_api_page][type] = "module"
projects[search_api_page][subdir] = "contrib"

projects[search_api_ranges][version] = 1.4
projects[search_api_ranges][type] = "module"
projects[search_api_ranges][subdir] = "contrib"
; Rewrite the data alteration callback
; http://drupal.org/node/2001846
projects[search_api_ranges][patch][2001846] = "http://drupal.org/files/search_api_ranges-rewrite-data-alteration-callback-2001846-3.patch"

projects[search_api_solr][version] = "1.x-dev"
projects[search_api_solr][type] = "module"
projects[search_api_solr][subdir] = "contrib"
projects[search_api_solr][download][type] = "git"
projects[search_api_solr][download][revision] = "cf862ac"
projects[search_api_solr][download][branch] = "7.x-1.x"

projects[search_api_sorts][version] = 1.4
projects[search_api_sorts][type] = "module"
projects[search_api_sorts][subdir] = "contrib"

projects[search_facetapi][version] = "1.0-beta2"
projects[search_facetapi][type] = "module"
projects[search_facetapi][subdir] = "contrib"

; DF Translate
projects[domain][version] = "3.10"
projects[domain][type] = "module"
projects[domain][subdir] = "contrib"

projects[entity_translation][version] = "1.x-dev"
projects[entity_translation][type] = "module"
projects[entity_translation][subdir] = "contrib"
projects[entity_translation][download][type] = "git"
projects[entity_translation][download][revision] = "ba653e1"
projects[entity_translation][download][branch] = "7.x-1.x"

projects[l10n_update][version] = "1.x-dev"
projects[l10n_update][type] = "module"
projects[l10n_update][subdir] = "contrib"
projects[l10n_update][download][type] = "git"
projects[l10n_update][download][revision] = "209faa5"
projects[l10n_update][download][branch] = "7.x-1.x"

projects[i18n][version] = "1.8"
projects[i18n][type] = "module"
projects[i18n][subdir] = "contrib"

projects[i18nviews][version] = "3.x-dev"
projects[i18nviews][type] = "module"
projects[i18nviews][subdir] = "contrib"
projects[i18nviews][download][type] = "git"
projects[i18nviews][download][revision] = "26bd52c"
projects[i18nviews][download][branch] = "7.x-3.x"
; Fatal error: Call to a member function unpack_translatables()
; http://drupal.org/node/1653170
projects[i18nviews][patch][1653170] = "http://drupal.org/files/i18nviews-1653170.patch"

projects[language_switch][version] = "1.x-dev"
projects[language_switch][type] = "module"
projects[language_switch][subdir] = "contrib"
projects[language_switch][download][type] = "git"
projects[language_switch][download][revision] = "b79dd56"
projects[language_switch][download][branch] = "7.x-1.x"

projects[lingotek][version] = "5.02"
projects[lingotek][type] = "module"
projects[lingotek][subdir] = "contrib"

projects[potx][version] = "1.x-dev"
projects[potx][type] = "module"
projects[potx][subdir] = "contrib"
projects[potx][download][type] = "git"
projects[potx][download][revision] = "8ac54a1"
projects[potx][download][branch] = "7.x-1.x"

projects[title][version] = "1.0-alpha7"
projects[title][type] = "module"
projects[title][subdir] = "contrib"

projects[translation_helpers][version] = "1.0"
projects[translation_helpers][type] = "module"
projects[translation_helpers][subdir] = "contrib"

projects[variable][version] = "2.2"
projects[variable][type] = "module"
projects[variable][subdir] = "contrib"

; Libraries
libraries[backbone][download][type] = "get"
libraries[backbone][download][url] = "https://github.com/jashkenas/backbone/archive/1.1.0.zip"

libraries[chosen][download][type] = "get"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.4.3_edit.zip"

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/master.zip"

libraries[jsonpath][download][type] = "get"
libraries[jsonpath][download][url] = "https://jsonpath.googlecode.com/files/jsonpath-0.8.1.php"

libraries[modernizr][download][type] = "get"
libraries[modernizr][download][url] = "https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip"

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
; Remove plupload library examples folder for Drupal distribution
; http://drupal.org/node/1903850
libraries[plupload][patch][1903850] = "http://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-16.patch"

libraries[underscore][download][type] = "get"
libraries[underscore][download][url] = "https://github.com/jashkenas/underscore/archive/1.5.2.zip"

; Themes
projects[demonstratie][version] = "1.x-dev"
projects[demonstratie][type] = "theme"
projects[demonstratie][subdir] = "contrib"
projects[demonstratie][download][type] = "git"
projects[demonstratie][download][branch] = "7.x-1.x"

projects[ember][version] = "2.x-dev"
projects[ember][type] = "theme"
projects[ember][subdir] = "contrib"
projects[ember][download][type] = "git"
projects[ember][download][branch] = "7.x-2.x"
