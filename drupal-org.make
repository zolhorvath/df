api = 2
core = 7.x

; Lightning Features
projects[lightning_features][version] = "1.x-dev"
projects[lightning_features][type] = "module"
projects[lightning_features][subdir] = "contrib"
projects[lightning_features][download][type] = "git"
projects[lightning_features][download][branch] = "7.x-1.x"

; Lightning Manifests
projects[assemble][type] = "module"
projects[assemble][subdir] = "contrib"

projects[curate][type] = "module"
projects[curate][subdir] = "contrib"

; DF Admin
projects[advanced_help][version] = "1.3"
projects[advanced_help][type] = "module"
projects[advanced_help][subdir] = "contrib"

projects[distro_update][version] = "1.x-dev"
projects[distro_update][type] = "module"
projects[distro_update][subdir] = "contrib"
projects[distro_update][download][type] = "git"
projects[distro_update][download][revision] = "f5ab9fe"
projects[distro_update][download][branch] = "7.x-1.x"

projects[feeds][version] = "2.0-alpha8"
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"

projects[feeds_jsonpath_parser][version] = "1.0"
projects[feeds_jsonpath_parser][type] = "module"
projects[feeds_jsonpath_parser][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc5"
projects[masquerade][type] = "module"
projects[masquerade][subdir] = "contrib"

; DF Commerce
projects[addressfield][version] = "1.1"
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"

projects[commerce][version] = "1.x-dev"
projects[commerce][type] = "module"
projects[commerce][subdir] = "contrib"
projects[commerce][download][type] = "git"
projects[commerce][download][revision] = "ca5c7cc"
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

projects[commerce_fancy_attributes][version] = "1.0"
projects[commerce_fancy_attributes][type] = "module"
projects[commerce_fancy_attributes][subdir] = "contrib"

projects[commerce_features][version] = "1.0-rc1"
projects[commerce_features][type] = "module"
projects[commerce_features][subdir] = "contrib"
; Commerce shipping exportables with commerce features
; http://drupal.org/node/1402762
projects[commerce_features][patch][1402762] = "http://drupal.org/files/1402762_export_flat_rate_commerce_features-6.patch"

projects[commerce_license][version] = "1.3"
projects[commerce_license][type] = "module"
projects[commerce_license][subdir] = "contrib"

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

projects[eva][version] = "1.x-dev"
projects[eva][type] = "module"
projects[eva][subdir] = "contrib"
projects[eva][download][type] = "git"
projects[eva][download][revision] = "5798231"
projects[eva][download][branch] = "7.x-1.x"

projects[inline_conditions][version] = "1.0-alpha4"
projects[inline_conditions][type] = "module"
projects[inline_conditions][subdir] = "contrib"

projects[menu_attributes][version] = "1.0-rc3"
projects[menu_attributes][type] = "module"
projects[menu_attributes][subdir] = "contrib"

projects[message][version] = "1.10"
projects[message][type] = "module"
projects[message][subdir] = "contrib"

projects[message_notify][version] = "2.5"
projects[message_notify][type] = "module"
projects[message_notify][subdir] = "contrib"

projects[views_megarow][version] = "1.4"
projects[views_megarow][type] = "module"
projects[views_megarow][subdir] = "contrib"

projects[views_slideshow][version] = "1.x-dev"
projects[views_slideshow][type] = "module"
projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][download][type] = "git"
projects[views_slideshow][download][revision] = "3588fde"
projects[views_slideshow][download][branch] = "7.x-1.x"

; DF Connect
projects[charts][version] = "2.x-dev"
projects[charts][type] = "module"
projects[charts][subdir] = "contrib"
projects[charts][download][type] = "git"
projects[charts][download][revision] = "050670f"
projects[charts][download][branch] = "7.x-2.x"

projects[google_analytics][version] = "1.4"
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[google_analytics_reports][version] = "3.x-dev"
projects[google_analytics_reports][type] = "module"
projects[google_analytics_reports][subdir] = "contrib"
projects[google_analytics_reports][download][type] = "git"
projects[google_analytics_reports][download][revision] = "454af59"
projects[google_analytics_reports][download][branch] = "7.x-3.x"

projects[marketo_ma][version] = "1.1"
projects[marketo_ma][type] = "module"
projects[marketo_ma][subdir] = "contrib"

projects[mollom][version] = "2.4"
projects[mollom][type] = "module"
projects[mollom][subdir] = "contrib"

projects[oauth][version] = "3.2"
projects[oauth][type] = "module"
projects[oauth][subdir] = "contrib"

projects[purr_messages][version] = "2.0-beta3"
projects[purr_messages][type] = "module"
projects[purr_messages][subdir] = "contrib"

projects[sharethis][version] = "2.12"
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

projects[radioactivity][version] = "2.10"
projects[radioactivity][type] = "module"
projects[radioactivity][subdir] = "contrib"

projects[uuid][version] = "1.x-dev"
projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"
projects[uuid][download][type] = "git"
projects[uuid][download][revision] = "a7bf2db"
projects[uuid][download][branch] = "7.x-1.x"

projects[uuid_features][version] = "1.x-dev"
projects[uuid_features][type] = "module"
projects[uuid_features][subdir] = "contrib"
projects[uuid_features][download][type] = "git"
projects[uuid_features][download][revision] = "3fee14f"
projects[uuid_features][download][branch] = "7.x-1.x"

; DF Search
projects[custom_search][version] = "1.x-dev"
projects[custom_search][type] = "module"
projects[custom_search][subdir] = "contrib"
projects[custom_search][download][type] = "git"
projects[custom_search][download][revision] = "fead2f1"
projects[custom_search][download][branch] = "7.x-1.x"

projects[location][version] = "3.6"
projects[location][type] = "module"
projects[location][subdir] = "contrib"

projects[facetapi][version] = "1.5"
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

projects[schemaorg][version] = "1.0-rc1"
projects[schemaorg][type] = "module"
projects[schemaorg][subdir] = "contrib"

projects[search_api][version] = "1.15"
projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"

projects[search_api_db][version] = "1.x-dev"
projects[search_api_db][type] = "module"
projects[search_api_db][subdir] = "contrib"
projects[search_api_db][download][type] = "git"
projects[search_api_db][download][revision] = "643d96c"
projects[search_api_db][download][branch] = "7.x-1.x"

projects[search_api_page][version] = "1.2"
projects[search_api_page][type] = "module"
projects[search_api_page][subdir] = "contrib"

projects[search_api_ranges][version] = "1.5"
projects[search_api_ranges][type] = "module"
projects[search_api_ranges][subdir] = "contrib"

projects[search_api_solr][version] = "1.8"
projects[search_api_solr][type] = "module"
projects[search_api_solr][subdir] = "contrib"

projects[search_api_sorts][version] = "1.5"
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

projects[i18n][version] = "1.x-dev"
projects[i18n][type] = "module"
projects[i18n][subdir] = "contrib"
projects[i18n][download][type] = "git"
projects[i18n][download][revision] = "3777b86"
projects[i18n][download][branch] = "7.x-1.x"
; PHP Fatal Error Call to undefined method i18n_object_wrapper::strings_update()
; http://drupal.org/node/2082573
projects[i18n][patch][] = "http://drupal.org/files/issues/i18n_string-undefined-method-2082573-11.patch"

projects[i18nviews][version] = "3.x-dev"
projects[i18nviews][type] = "module"
projects[i18nviews][subdir] = "contrib"
projects[i18nviews][download][type] = "git"
projects[i18nviews][download][revision] = "fdc8c33"
projects[i18nviews][download][branch] = "7.x-3.x"

projects[language_switch][version] = "1.x-dev"
projects[language_switch][type] = "module"
projects[language_switch][subdir] = "contrib"
projects[language_switch][download][type] = "git"
projects[language_switch][download][revision] = "b79dd56"
projects[language_switch][download][branch] = "7.x-1.x"

projects[potx][version] = "1.x-dev"
projects[potx][type] = "module"
projects[potx][subdir] = "contrib"
projects[potx][download][type] = "git"
projects[potx][download][revision] = "f9ccfbe"
projects[potx][download][branch] = "7.x-1.x"

projects[title][version] = "1.0-alpha7"
projects[title][type] = "module"
projects[title][subdir] = "contrib"

projects[translation_helpers][version] = "1.0"
projects[translation_helpers][type] = "module"
projects[translation_helpers][subdir] = "contrib"

projects[variable][version] = "2.5"
projects[variable][type] = "module"
projects[variable][subdir] = "contrib"

projects[features_override][version] = "2.0-rc2"
projects[features_override][type] = "module"
projects[features_override][subdir] = "contrib"

; DF Tools

projects[restws][version] = "2.4"
projects[restws][type] = "module"
projects[restws][subdir] = "contrib"

projects[slick][version] = "2.0-beta1"
projects[slick][type] = "module"
projects[slick][subdir] = "contrib"

projects[views_datasource][version] = "1.0-alpha2"
projects[views_datasource][type] = "module"
projects[views_datasource][subdir] = "contrib"

; Libraries
libraries[jquery.cycle][destination] = "libraries"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"

libraries[slick][destination] = "libraries"
libraries[slick][download][type] = "get"
libraries[slick][download][url] = "https://github.com/kenwheeler/slick/archive/1.5.0.zip"

libraries[css.js][destination] = "libraries"
libraries[css.js][download][type] = "get"
libraries[css.js][download][url] = "https://github.com/mortenson/css.js/archive/master.zip"

libraries[spectrum][destination] = "libraries"
libraries[spectrum][download][type] = "get"
libraries[spectrum][download][url] = "https://github.com/bgrins/spectrum/archive/1.7.0.zip"

libraries[html2canvas][destination] = "libraries"
libraries[html2canvas][download][type] = "get"
libraries[html2canvas][download][url] = "https://github.com/niklasvh/html2canvas/archive/master.zip"

libraries[color-thief][destination] = "libraries"
libraries[color-thief][download][type] = "get"
libraries[color-thief][download][url] = "https://github.com/lokesh/color-thief/archive/master.zip"

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

projects[zurb-foundation][version] = "5.x-dev"
projects[zurb-foundation][type] = "theme"
projects[zurb-foundation][subdir] = "contrib"
projects[zurb-foundation][download][type] = "git"
projects[zurb-foundation][download][branch] = "7.x-5.x"

; Scenario
includes[media_entertainment] = modules/dfs/dfs_med/dfs_med.make
