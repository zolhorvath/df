api = 2
core = 8.x

; Modules
projects[admin_toolbar][version] ="1.6"
projects[admin_toolbar][type] ="module"
projects[admin_toolbar][subdir] ="contrib"

projects[block_class][version] = "x-1.x-dev"
projects[block_class][type] = "module"
projects[block_class][subdir] = "contrib"
projects[block_class][download][type] = "git"
projects[block_class][download][branch] = "8.0.x-1.x"
projects[block_class][download][url] = "http://git.drupal.org/sandbox/YaronTal/2345855.git"
; Add support for page manager.
; http://drupal.org/node/2509142
projects[block_class][patch][2509142] = "http://drupal.org/files/issues/add-page-manager-support-2509142-1.patch"

;projects[default_content][version] = "1.x-dev"
;projects[default_content][type] = "module"
;projects[default_content][subdir] = "contrib"
;projects[default_content][download][type] = "git"
;projects[default_content][download][url] = "http://github.com/larowlan/default_content.git"
;projects[default_content][download][branch] = "8.x"

projects[config_update][version] = "1.x-dev"
projects[config_update][type] = "module"
projects[config_update][subdir] = "contrib"
projects[config_update][download][type] = "git"
projects[config_update][download][branch] = "8.x-1.x"

projects[features][version] = "3.x-dev"
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"
projects[features][download][branch] = "8.x-3.x"

projects[import][version] = "1.x-dev"
projects[import][type] = "module"
projects[import][subdir] = "contrib"
projects[import][download][type] = "git"
projects[import][download][branch] = "8.x-1.x"
; Allow Articles to be migrated with HTML content
; https://www.drupal.org/node/2514194
projects[import][patch][2514194] = "https://www.drupal.org/files/issues/import-article-allow-html.patch"

projects[migrate_plus][version] = "1.x-dev"
projects[migrate_plus][type] = "module"
projects[migrate_plus][subdir] = "contrib"
projects[migrate_plus][download][type] = "git"
projects[migrate_plus][download][branch] = "8.x-1.x"
projects[migrate_plus][download][url] = "http://git.drupal.org/sandbox/mikeryan/migrate_plus.git"
; Port MigrateSourceCSV to Drupal 8 migrate source plugin
; http://drupal.org/node/2458003
projects[migrate_plus][patch][2458003] = "http://drupal.org/files/issues/migrate_plus-csv_migrate-2458003-29.patch"
; Implement migrate-rollback command for D8
; http://drupal.org/node/2403411
;projects[migrate_plus][patch][2403411] = "http://drupal.org/files/issues/implement-2403411-5.patch"

projects[page_manager][version] = "1.x-dev"
projects[page_manager][type] = "module"
projects[page_manager][subdir] = "contrib"
projects[page_manager][download][type] = "git"
projects[page_manager][download][branch] = "8.x-1.x"
; Rename the core "Page with blocks" admin_label and sort display variants
; https://www.drupal.org/node/2503947
projects[page_manager][patch][2503947] = "https://www.drupal.org/files/issues/page_manager-asort-admin-label-etc-0.patch"


projects[panels][version] = "3.x-dev"
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"
projects[panels][download][branch] = "8.x-3.x"

projects[pathauto][version] = "1.x-dev"
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"
projects[pathauto][directory_name] = "pathauto"
projects[pathauto][download][type] = "git"
projects[pathauto][download][url]= "git@github.com:md-systems/pathauto.git"
projects[pathauto][download][branch] = "8.x-1.x"

projects[token][version] = "1.x-dev"
projects[token][type] = "module"
projects[token][subdir] = "contrib"
projects[token][download][type] = "git"
projects[token][download][branch] = "8.x-1.x"

projects[inline_entity_form][version] = "1.x-dev"
projects[inline_entity_form][type] = "module"
projects[inline_entity_form][subdir] = "contrib"
projects[inline_entity_form][download][type] = "git"
projects[inline_entity_form][download][branch] = "8.x-1.x"

projects[geolocation][version] = "1.x-dev"
projects[geolocation][type] = "module"
projects[geolocation][subdir] = "contrib"
projects[geolocation][download][type] = "git"
projects[geolocation][download][branch] = "8.x-1.x"
; Adds a configurable Google Maps formatter to geolocation, along with other bugfixes
; https://www.drupal.org/node/2474345
projects[geolocation][patch][2474345] = "https://www.drupal.org/files/issues/2474345-14.patch"

; Libraries
libraries[slick][destination] = "libraries"
libraries[slick][download][type] = "get"
libraries[slick][download][url] = "https://github.com/kenwheeler/slick/archive/1.5.0.zip"

; Themes
projects[zurb-foundation][version] = "5.x-dev"
projects[zurb-foundation][type] = "theme"
projects[zurb-foundation][subdir] = "contrib"
projects[zurb-foundation][directory_name] = "zurb_foundation"
projects[zurb-foundation][download][type] = "git"
projects[zurb-foundation][download][url]="git@github.com:mortenson/Zurb-Foundation-Drupal-8.git"
projects[zurb-foundation][download][branch] = "master"
