api = 2
core = 7.x

projects[acquia_connector][version] = "2.8"
projects[acquia_connector][type] = "module"
projects[acquia_connector][subdir] = "contrib"

projects[breakpoints][version] = "1.0"
projects[breakpoints][type] = "module"
projects[breakpoints][subdir] = "contrib"

projects[ctools][version] = "1.x-dev"
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = "git"
projects[ctools][download][branch] = "7.x-1.x"
projects[ctools][download][revision] = "9d092cc"
; Adding a renderable-array block to a page gives errors in the admin UI
; http://drupal.org/node/1925018
projects[ctools][patch][1925018] = "http://drupal.org/files/ctools-n1925018-12.patch"

projects[devel][version] = "1.3"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.0"
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[features][version] = "2.0-beta2"
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[module_filter][version] = "1.7"
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[navbar][version] = "1.x-dev"
projects[navbar][type] = "module"
projects[navbar][subdir] = "contrib"
projects[navbar][download][type] = "git"
projects[navbar][download][branch] = "7.x-1.x"
; In vertical orientation, menu cannot scroll past viewport bounds
; http://drupal.org/node/1971902
; Currently backported to alpha7 until issue resolved.
projects[navbar][download][revision] = "3c535e9"
; Menu icons for contrib modules
; http://drupal.org/node/1954912
projects[navbar][patch][1954912] = "http://drupal.org/files/navbar-contrib-icons-1954912-6.patch"

projects[pathauto][version] = "1.2"
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[responsive_preview][version] = "1.0-beta1"
projects[responsive_preview][type] = "module"
projects[responsive_preview][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

; DF Assembler
projects[chosen][version] = "2.x-dev"
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"
projects[chosen][download][type] = "git"
projects[chosen][download][revision] = "78ed696"
projects[chosen][download][branch] = "7.x-1.x"

projects[fape][version] = "1.x-dev"
projects[fape][type] = "module"
projects[fape][subdir] = "contrib"
projects[fape][download][type] = "git"
projects[fape][download][revision] = "1143ee2"
projects[fape][download][branch] = "7.x-1.x"

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

projects[google_analytics][version] = "1.3"
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[gridbuilder][version] = "1.0-alpha2"
projects[gridbuilder][type] = "module"
projects[gridbuilder][subdir] = "contrib"

projects[json2][version] = "1.1"
projects[json2][type] = "module"
projects[json2][subdir] = "contrib"

projects[layout][version] = "1.0-alpha6"
projects[layout][type] = "module"
projects[layout][subdir] = "contrib"

projects[metatag][version] = "1.0-beta5"
projects[metatag][type] = "module"
projects[metatag][subdir] = "contrib"

projects[panels][version] = "3.x-dev"
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"
projects[panels][download][revision] = "a915408"
projects[panels][download][branch] = "7.x-3.x"

projects[panelizer][version] = "3.x-dev"
projects[panelizer][subdir] = "contrib"
projects[panelizer][download][type] = "git"
projects[panelizer][download][revision] = "1e050d3"
projects[panelizer][download][branch] = "7.x-3.x"

projects[panopoly_images][version] = "1.x-dev"
projects[panopoly_images][type] = "module"
projects[panopoly_images][subdir] = "contrib"
projects[panopoly_images][download][type] = "git"
projects[panopoly_images][download][revision] = "b57b48f"
projects[panopoly_images][download][branch] = "7.x-1.x"

projects[panopoly_magic][version] = "1.x-dev"
projects[panopoly_magic][type] = "module"
projects[panopoly_magic][subdir] = "contrib"
projects[panopoly_magic][download][type] = "git"
projects[panopoly_magic][download][revision] = "3a1f8f9"
projects[panopoly_magic][download][branch] = "7.x-1.x"

projects[panopoly_theme][version] = "1.x-dev"
projects[panopoly_theme][type] = "module"
projects[panopoly_theme][subdir] = "contrib"
projects[panopoly_theme][download][type] = "git"
projects[panopoly_theme][download][revision] = "b8d3809"
projects[panopoly_theme][download][branch] = "7.x-1.x"
; Remove makefile from Panopoly Theme
; http://drupal.org/node/1904766
projects[panopoly_theme][patch][1904766] = "http://drupal.org/files/panopoly_theme-makefile-free-1904766-5.patch"

projects[panopoly_widgets][version] = "1.x-dev"
projects[panopoly_widgets][type] = "module"
projects[panopoly_widgets][subdir] = "contrib"
projects[panopoly_widgets][download][type] = "git"
projects[panopoly_widgets][download][revision] = "0dafe32"
projects[panopoly_widgets][download][branch] = "7.x-1.x"
; Separate fields from field instances + Features
; http://drupal.org/node/1967304#comment-7307862
projects[panopoly_widgets][patch][1967304] = "http://drupal.org/files/panopoly_widgets-separate-instances-base-1967304-3.patch"
; Use Panopoly Widgets outside of Panopoly distribution
; http://drupal.org/node/1949710
projects[panopoly_widgets][patch][1949710] = "http://drupal.org/files/panopoly_widgets-demo-framework-1949710-8.patch"
; Panopoly Widgets contains a makefile under modules/contrib/panopoly_widgets.
; Defer to panopoly_widgets.make to download and patch module dependencies.

projects[panopoly_wysiwyg][version] = "1.x-dev"
projects[panopoly_wysiwyg][type] = "module"
projects[panopoly_wysiwyg][subdir] = "contrib"
projects[panopoly_wysiwyg][download][type] = "git"
projects[panopoly_wysiwyg][download][revision] = "e2f938b"
projects[panopoly_wysiwyg][download][branch] = "7.x-1.x"
; Default Config Prevents Node Export from Working
; http://drupal.org/node/1904874
projects[panopoly_wysiwyg][patch][1904874] = "http://drupal.org/files/panopoly_wysiwyg-defaultconfig-free-1904874-3.patch"
; Panopoly WYSIWYG to install newer WYSIWYG module?
; http://drupal.org/node/1949542
projects[panopoly_wysiwyg][patch][1949542] = "http://drupal.org/files/panopoly_wysiwyg-use-wysiwyg-dev-1949542-1.patch"
; Panopoly WYSIWYG contains a makefile under modules/contrib/panopoly_wysiwyg.
; Defer to panopoly_wysiwyg.make to download and patch module dependencies.

projects[respondjs][version] = "1.1"
projects[respondjs][type] = "module"
projects[respondjs][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_autocomplete_filters][version] = "1.0-beta2"
projects[views_autocomplete_filters][type] = "module"
projects[views_autocomplete_filters][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

; DF Curator
projects[ckeditor][version] = "1.13"
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

projects[collections][version] = "1.x-dev"
projects[collections][type] = "module"
projects[collections][subdir] = "contrib"
projects[collections][download][type] = "git"
projects[collections][download][revision] = "4a28666"
projects[collections][download][branch] = "7.x-1.x"
; Collection Field widget hardcodes the Label as 'Collection'
; http://drupal.org/node/1974982
projects[collections][patch][1974982] = "http://drupal.org/files/collections-field-instance-widget-label-1974982-1.patch"

projects[date][version] = "2.6"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[edit][version] = "1.0-alpha11"
projects[edit][type] = "module"
projects[edit][subdir] = "contrib"

projects[iib][version] = "1.x-dev"
projects[iib][type] = "module"
projects[iib][subdir] = "contrib"
projects[iib][download][type] = "git"
projects[iib][download][revision] = "c91e44c"
projects[iib][download][branch] = "7.x-1.x"
; UX Improvements
; http://drupal.org/node/1737036
projects[iib][patch][1737036] = "http://drupal.org/files/iib-entity-css-1737036-8.patch"

projects[nra][version] = "1.0-alpha2"
projects[nra][type] = "module"
projects[nra][subdir] = "contrib"

projects[state_machine][version] = "2.0"
projects[state_machine][type] = "module"
projects[state_machine][subdir] = "contrib"

projects[sps][version] = "1.x-dev"
projects[sps][type] = "module"
projects[sps][subdir] = "contrib"
projects[sps][download][type] = "git"
projects[sps][download][revision] = "e647f47"
projects[sps][download][branch] = "7.x-1.x"
; UX improvements on page level IIB
; http://drupal.org/node/1733490
projects[sps][patch][1733490] = "http://drupal.org/files/sps-css-cleanup-1733490-3.patch"
; SPS should not prevent other modules that use Entity API from working
; http://drupal.org/node/1934130
projects[sps][patch][1934130] = "http://drupal.org/files/sps-1934130-3.patch"

projects[workbench][version] = "1.x-dev"
projects[workbench][type] = "module"
projects[workbench][subdir] = "contrib"
projects[workbench][download][type] = "git"
projects[workbench][download][revision] = "6856e4a"
projects[workbench][download][branch] = "7.x-1.x"

projects[workbench_moderation][version] = "1.3"
projects[workbench_moderation][type] = "module"
projects[workbench_moderation][subdir] = "contrib"

projects[xautoload][version] = "2.7"
projects[xautoload][type] = "module"
projects[xautoload][subdir] = "contrib"

; DF Engage
projects[addressfield][version] = "1.0-beta3"
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"

projects[bean][version] = "1.x-dev"
projects[bean][type] = "module"
projects[bean][subdir] = "contrib"
projects[bean][download][type] = "git"
projects[bean][download][revision] = "d4038e7"
projects[bean][download][branch] = "7.x-1.x"

projects[bean_tax][version] = "2.2"
projects[bean_tax][type] = "module"
projects[bean_tax][subdir] = "contrib"

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
projects[entityreference][download][revision] = "1c176da"
projects[entityreference][download][branch] = "7.x-1.x"

projects[entityreference_prepopulate][version] = "1.2"
projects[entityreference_prepopulate][type] = "module"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[mollom][version] = "2.4"
projects[mollom][type] = "module"
projects[mollom][subdir] = "contrib"

projects[og][version] = "2.1"
projects[og][type] = "module"
projects[og][subdir] = "contrib"

projects[rpx][version] = "2.x-dev"
projects[rpx][type] = "module"
projects[rpx][subdir] = "contrib"
projects[rpx][download][type] = "git"
projects[rpx][download][revision] = "ae93a66e8c"
projects[rpx][download][branch] = "7.x-2.x"
; Social Sharing on a per-View Mode basis?
; http://drupal.org/node/1946476
projects[rpx][patch][1946476] = "http://drupal.org/files/rpx-2.2-share-button-by-view-modes-1946476-2.patch"

projects[rules][version] = "2.3"
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"

projects[salesforce][version] = "3.0-beta2"
projects[salesforce][type] = "module"
projects[salesforce][subdir] = "contrib"

projects[taxonomy_entity_index][version] = "1.0-beta6"
projects[taxonomy_entity_index][type] = "module"
projects[taxonomy_entity_index][subdir] = "contrib"

projects[token][version] = "1.4"
projects[token][type] = "module"
projects[token][subdir] = "contrib"

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
projects[uuid_features][download][revision] = "dba29f8"
projects[uuid_features][download][branch] = "7.x-1.x"
; Add support for Bean exporting (deployable bean instances).
; http://drupal.org/node/1849668
projects[uuid_features][patch][1849668] = "http://drupal.org/files/uuid_features-bean_uuid_export_support-1849668-20.patch"
; Make exporting of uuid terms along with vocabulary optional
; http://drupal.org/node/1962782
projects[uuid_features][patch][1962782] = "http://drupal.org/files/uuid_features-term-export-option-variable-1962782-2.patch"

; DF Import
projects[feeds][version] = "2.0-alpha7"
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"

projects[feeds_jsonpath_parser][version] = "1.x-dev"
projects[feeds_jsonpath_parser][type] = "module"
projects[feeds_jsonpath_parser][subdir] = "contrib"
projects[feeds_jsonpath_parser][download][type] = "git"
projects[feeds_jsonpath_parser][download][branch] = "7.x-1.x"
projects[feeds_jsonpath_parser][download][revision] = "8b161c6"
; Support for Libraries API
; http://drupal.org/node/1083234
projects[feeds_jsonpath_parser][patch][1083234] = "http://drupal.org/files/feeds_jsonpath_parser-libraries-1083234-12.patch"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[migrate][version] = "2.5"
projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"

projects[migrate_extras][version] = "2.5"
projects[migrate_extras][type] = "module"
projects[migrate_extras][subdir] = "contrib"

; Libraries
;ilibraries[backbone][download][type] = "get"
;libraries[backbone][download][url] = "https://github.com/documentcloud/backbone/archive/1.0.0.zip"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1/ckeditor_4.1_standard.zip"

libraries[json2][download][type] = "get"
libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js/blob/master/json2.js"

;libraries[jsonpath][download][type] = "get"
;libraries[jsonpath][download][url] = "http://jsonpath.googlecode.com/files/jsonpath-0.8.1.php"

libraries[respondjs][download][type] = "get"
libraries[respondjs][download][url] = "https://github.com/scottjehl/Respond/tarball/master"

;libraries[underscore][download][type] = "get"
;libraries[underscore][download][url] = "https://github.com/documentcloud/underscore/archive/1.4.4.zip"

; Themes
projects[responsive_bartik][version] = "1.x-dev"
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][subdir] = "contrib"

projects[ember][version] = "1.0-alpha5"
projects[ember][type] = "theme"
projects[ember][subdir] = "contrib"
