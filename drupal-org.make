api = 2
core = 7.x

projects[acquia_connector][version] = "2.12"
projects[acquia_connector][type] = "module"
projects[acquia_connector][subdir] = "contrib"

projects[breakpoints][version] = "1.1"
projects[breakpoints][type] = "module"
projects[breakpoints][subdir] = "contrib"

projects[ctools][version] = "1.x-dev"
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = "git"
projects[ctools][download][revision] = "5438b40"
projects[ctools][download][branch] = "7.x-1.x"
; Update the token replacements in ctools to work against a fully rendered page.
; http://drupal.org/node/955070#comment-7751253
projects[ctools][patch][955070] = "http://drupal.org/files/ctools-fix_token_processing-955070-5.patch"

projects[demonstratie_panels][version] = "1.x-dev"
projects[demonstratie_panels][type] = "module"
projects[demonstratie_panels][subdir] = "contrib"
projects[demonstratie_panels][download][type] = "git"
projects[demonstratie_panels][download][revision] = "9566cbd"
projects[demonstratie_panels][download][branch] = "7.x-1.x"

projects[devel][version] = "1.3"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.3"
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[features][version] = "2.x-dev"
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"
projects[features][download][revision] = "78772d5"
projects[features][download][branch] = "7.x-2.x"

projects[import][version] = "1.x-dev"
projects[import][type] = "module"
projects[import][subdir] = "contrib"
projects[import][download][type] = "git"
projects[import][download][branch] = "7.x-1.x"

projects[jquery_update][version] = "2.3"
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
projects[migrate_extras][patch][1870886] = "http://drupal.org/files/migrate_extras-2.5-add_support_for_uuid-1870886-4-do-not-test.patch"
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

projects[pathauto][version] = "1.2"
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[pm_existing_pages][version] = "1.4"
projects[pm_existing_pages][type] = "module"
projects[pm_existing_pages][subdir] = "contrib"

projects[responsive_preview][version] = "1.0"
projects[responsive_preview][type] = "module"
projects[responsive_preview][subdir] = "contrib"

projects[role_export][version] = "1.0"
projects[role_export][type] = "module"
projects[role_export][subdir] = "contrib"

projects[rules][version] = "2.6"
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

projects[bean_tax][version] = "2.3"
projects[bean_tax][type] = "module"
projects[bean_tax][subdir] = "contrib"

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

projects[entityreference_prepopulate][version] = "1.4"
projects[entityreference_prepopulate][type] = "module"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[form_builder][version] = "1.x-dev"
projects[form_builder][type] = "module"
projects[form_builder][subdir] = "contrib"
projects[form_builder][download][type] = "git"
projects[form_builder][download][revision] = "3d904df"
projects[form_builder][download][branch] = "7.x-1.x"
projects[form_builder][patch][1987332] = "http://drupal.org/files/rolls-past-editing-form-1987332-4.patch"

projects[fape][version] = "1.x-dev"
projects[fape][type] = "module"
projects[fape][subdir] = "contrib"
projects[fape][download][type] = "git"
projects[fape][download][revision] = "1143ee2"
projects[fape][download][branch] = "7.x-1.x"
; Call to field_access passing field name rather than full field structure
; http://drupal.org/node/1846156
projects[fape][patch][1846156] = "http://drupal.org/files/fape-1846156-5.patch"

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
projects[fieldable_panels_panes][download][revision] = "1bda8c9"
projects[fieldable_panels_panes][download][branch] = "7.x-1.x"

projects[gridbuilder][version] = "1.0-alpha2"
projects[gridbuilder][type] = "module"
projects[gridbuilder][subdir] = "contrib"

projects[json2][version] = "1.1"
projects[json2][type] = "module"
projects[json2][subdir] = "contrib"

projects[layout][version] = "1.0-alpha6"
projects[layout][type] = "module"
projects[layout][subdir] = "contrib"

projects[magic_beans][version] = "1.x-dev"
projects[magic_beans][type] = "module"
projects[magic_beans][subdir] = "contrib"
projects[magic_beans][download][type] = "git"
projects[magic_beans][download][revision] = "6c5d19e"
projects[magic_beans][download][branch] = "7.x-1.x"

projects[metatag][version] = "1.0-beta5"
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
projects[panelizer][download][revision] = "ca7e1cb"
projects[panelizer][download][branch] = "7.x-3.x"

projects[panels][version] = "3.x-dev"
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"
projects[panels][download][revision] = "18319cd"
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

projects[respondjs][version] = "1.1"
projects[respondjs][type] = "module"
projects[respondjs][subdir] = "contrib"

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
projects[views][download][revision] = "2dc7eef"
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

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_load_more][version] = "1.1"
projects[views_load_more][type] = "module"
projects[views_load_more][subdir] = "contrib"

projects[webform][version] = "4.0-beta1"
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

projects[webform_alt_ui][version] = "1.x-dev"
projects[webform_alt_ui][type] = "module"
projects[webform_alt_ui][subdir] = "contrib"
projects[webform_alt_ui][download][type] = "git"
projects[webform_alt_ui][download][revision] = "0cfa6d0"
projects[webform_alt_ui][download][branch] = "master"
projects[webform_alt_ui][patch][2022773] = "http://drupal.org/files/webform_alt_ui-form_builder_compat-2022773-3.patch"

; DF Converge
projects[addressfield][version] = "1.0-beta4"
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"

projects[commerce][version] = "1.5"
projects[commerce][type] = "module"
projects[commerce][subdir] = "contrib"

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

projects[commerce_migrate][version] = "1.1"
projects[commerce_migrate][type] = "module"
projects[commerce_migrate][subdir] = "contrib"

projects[commerce_shipping][version] = "2.0"
projects[commerce_shipping][type] = "module"
projects[commerce_shipping][subdir] = "contrib"

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

projects[salesforce][version] = "3.0-beta2"
projects[salesforce][type] = "module"
projects[salesforce][subdir] = "contrib"

projects[sharethis][version] = "2.5"
projects[sharethis][type] = "module"
projects[sharethis][subdir] = "contrib"

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
projects[ckeditor][download][revision] = "57245a9"
projects[ckeditor][download][branch] = "7.x-1.x"
; Integration with Media 2.x
; http://drupal.org/node/1504696
projects[ckeditor][patch][1504696] = "http://drupal.org/files/issues/ckeditor-accomodate-latest-media-changes-1504696-120.patch"
; External plugin declarations are redundant.
; http://drupal.org/comment/8284591#comment-8284591
projects[ckeditor][patch][2158741] = "http://drupal.org/files/issues/ckeditor-remove-external-plugin-declarations-1-alt.patch"

projects[collections][version] = "1.x-dev"
projects[collections][type] = "module"
projects[collections][subdir] = "contrib"
projects[collections][download][type] = "git"
projects[collections][download][revision] = "b4e8212"
projects[collections][download][branch] = "7.x-1.x"

projects[date][version] = "2.7"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[edit][version] = "1.x-dev"
projects[edit][type] = "module"
projects[edit][subdir] = "contrib"
projects[edit][download][type] = "git"
projects[edit][download][revision] = "cf62974"
projects[edit][download][branch] = "7.x-1.x"
; Backport of Edit button for navbar
; http://drupal.org/node/1994256
projects[edit][patch][1994256] = "http://drupal.org/files/issues/edit-navbar-button-1994256-22.patch"
; Edit Module fails for "psudeo" fields provided via Relationship or Appended
; Global Text in Views
; http://drupal.org/node/2015295
projects[edit][patch][2015295] = "http://drupal.org/files/edit-views-psuedo-fields-2015295-6.patch"

projects[file_entity][version] = "2.x-dev"
projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"
projects[file_entity][download][type] = "git"
projects[file_entity][download][revision] = "3661d8b"
projects[file_entity][download][branch] = "7.x-2.x"
; Default file entities are not exportable by features (Sibling Issue)
; http://drupal.org/node/2192391
projects[file_entity][patch][2192391] = "http://drupal.org/files/issues/file_entity_remove_file_display-2192391-01.patch"

projects[file_entity_link][version] = "1.0-alpha3"
projects[file_entity_link][type] = "module"
projects[file_entity_link][subdir] = "contrib"

projects[focal_point][version] = "1.0-alpha1"
projects[focal_point][type] = "module"
projects[focal_point][subdir] = "contrib"

projects[iib][version] = "1.x-dev"
projects[iib][type] = "module"
projects[iib][subdir] = "contrib"
projects[iib][download][type] = "git"
projects[iib][download][revision] = "17a55eb"
projects[iib][download][branch] = "7.x-1.x"
; Integrate IIB with the Navbar module
; http://drupal.org/node/1737036
projects[iib][patch][1737036] = "http://drupal.org/files/issues/iib-navbar-1737036-43.patch"

projects[linkit][version] = "3.1"
projects[linkit][type] = "module"
projects[linkit][subdir] = "contrib"

projects[media][version] = "2.x-dev"
projects[media][type] = "module"
projects[media][subdir] = "contrib"
projects[media][download][type] = "git"
projects[media][download][revision] = "6e9c99b"
projects[media][download][branch] = "7.x-2.x"
; Improve UX for Media Thumbnail and Media Bulk Upload's multiform page 
; http://drupal.org/node/2166623
projects[media][patch][2166623] = "http://drupal.org/files/issues/media_bulk_upload-improve-multiform-2166623-2.patch"
; Default file entities are not exportable by features
; http://drupal.org/node/2104193
projects[media][patch][2104193] = "http://drupal.org/files/issues/media_remove_file_display_alter-2104193-23.patch"

projects[media_youtube][version] = "2.x-dev"
projects[media_youtube][type] = "module"
projects[media_youtube][subdir] = "contrib"
projects[media_youtube][download][type] = "git"
projects[media_youtube][download][revision] = "fb6f652"
projects[media_youtube][download][branch] = "7.x-2.x"

projects[multiform][version] = "1.0"
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

projects[plupload][version] = "1.3"
projects[plupload][type] = "module"
projects[plupload][subdir] = "contrib"

projects[sps][version] = "1.x-dev"
projects[sps][type] = "module"
projects[sps][subdir] = "contrib"
projects[sps][download][type] = "git"
projects[sps][download][revision] = "76e89f4"
projects[sps][download][branch] = "7.x-1.x"
; UX improvements on page level IIB
; http://drupal.org/node/1733490
projects[sps][patch][1733490] = "http://drupal.org/files/sps-css-cleanup-1733490-3.patch"
; SPS should not prevent other modules that use Entity API from working
; http://drupal.org/node/1934130
projects[sps][patch][1934130] = "http://drupal.org/files/sps-1934130-11.patch"

projects[revision_scheduler][version] = "1.x-dev"
projects[revision_scheduler][type] = "module"
projects[revision_scheduler][subdir] = "contrib"
projects[revision_scheduler][download][type] = "git"
projects[revision_scheduler][download][revision] = "ab04410"
projects[revision_scheduler][download][branch] = "7.x-1.x"
; Notice: Undefined index: path in
; revision_scheduler_preprocess_menu_local_action()
; http://drupal.org/node/1564348
projects[revision_scheduler][patch][1564348] = "http://drupal.org/files/fixes-notice-issue-1564348.patch"

projects[workbench][version] = "1.x-dev"
projects[workbench][type] = "module"
projects[workbench][subdir] = "contrib"
projects[workbench][download][type] = "git"
projects[workbench][download][revision] = "6856e4a"
projects[workbench][download][branch] = "7.x-1.x"

projects[workbench_moderation][version] = "1.3"
projects[workbench_moderation][type] = "module"
projects[workbench_moderation][subdir] = "contrib"

projects[workbench_moderation_notes][version] = "1.x-dev"
projects[workbench_moderation_notes][type] = "module"
projects[workbench_moderation_notes][subdir] = "contrib"
projects[workbench_moderation_notes][download][type] = "git"
projects[workbench_moderation_notes][download][revision] = "8e5e6f4"
projects[workbench_moderation_notes][download][branch] = "7.x-1.x"

projects[xautoload][version] = "2.7"
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
; Support for Libraries API
; http://drupal.org/node/1083234
projects[feeds_jsonpath_parser][patch][1083234] = "http://drupal.org/files/feeds_jsonpath_parser-libraries-1083234-12.patch"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc5"
projects[masquerade][type] = "module"
projects[masquerade][subdir] = "contrib"

; DF Engage
projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"

projects[goals][version] = "1.x-dev"
projects[goals][type] = "module"
projects[goals][subdir] = "contrib"
projects[goals][download][type] = "git"
projects[goals][download][branch] = "7.x-1.x"
projects[goals][download][revision] = "25afd9f"
; Make Goals exportable via features
; http://drupal.org/node/1934434
projects[goals][patch][1934434] = "http://drupal.org/files/goals-features-exports-1934434-10.patch"

projects[og][version] = "2.4"
projects[og][type] = "module"
projects[og][subdir] = "contrib"

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
projects[apachesolr][version] = "1.x-dev"
projects[apachesolr][type] = "module"
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][download][type] = "git"
projects[apachesolr][download][revision] = "79a0804"
projects[apachesolr][download][branch] = "7.x-1.x"

projects[apachesolr_location][version] = "1.1"
projects[apachesolr_location][type] = "module"
projects[apachesolr_location][subdir] = "contrib"

projects[apachesolr_og][version] = "1.x-dev"
projects[apachesolr_og][type] = "module"
projects[apachesolr_og][subdir] = "contrib"
projects[apachesolr_og][download][type] = "git"
projects[apachesolr_og][download][revision] = "49820b4"
projects[apachesolr_og][download][branch] = "7.x-1.x"

projects[apachesolr_proximity][version] = "1.0-rc1"
projects[apachesolr_proximity][type] = "module"
projects[apachesolr_proximity][subdir] = "contrib"

projects[apachesolr_user][version] = "1.x-dev"
projects[apachesolr_user][type] = "module"
projects[apachesolr_user][subdir] = "contrib"
projects[apachesolr_user][download][type] = "git"
projects[apachesolr_user][download][revision] = "a86c5ae"
projects[apachesolr_user][download][branch] = "7.x-1.x"

projects[custom_search][version] = "1.x-dev"
projects[custom_search][type] = "module"
projects[custom_search][subdir] = "contrib"
projects[custom_search][download][type] = "git"
projects[custom_search][download][revision] = "0d55d1e"
projects[custom_search][download][branch] = "7.x-1.x"

projects[date_facets][version] = "1.x-dev"
projects[date_facets][type] = "module"
projects[date_facets][subdir] = "contrib"
projects[date_facets][download][type] = "git"
projects[date_facets][download][revision] = "a04658a"
projects[date_facets][download][branch] = "7.x-1.x"

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
projects[l10n_update][download][revision] = "fa76206"
projects[l10n_update][download][branch] = "7.x-1.x"
; site-install fails when installing via a custom install profile
; http://drupal.org/node/1490664#comment-7510667
projects[l10n_update][patch][1490664] = "http://drupal.org/files/l10n_update-1490664-fix_pdo_exception-21.patch"

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

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/master.zip"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.3.2_edit.zip"

libraries[json2][download][type] = "get"
libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js/blob/master/json2.js"

libraries[jsonpath][download][type] = "get"
libraries[jsonpath][download][url] = "https://jsonpath.googlecode.com/files/jsonpath-0.8.1.php"

libraries[modernizr][download][type] = "get"
libraries[modernizr][download][url] = "https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip"

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
; Remove plupload library examples folder for Drupal distribution
; http://drupal.org/node/1903850
libraries[plupload][patch][1903850] = "http://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-16.patch"

libraries[respondjs][download][type] = "get"
libraries[respondjs][download][url] = "https://github.com/scottjehl/Respond/tarball/master"

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
