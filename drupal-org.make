api = 2
core = 8.x

; Modules
projects[address][version] = "1.x-dev"
projects[address][type] = "module"
projects[address][subdir] = "contrib"
projects[address][download][type] = "git"
projects[address][download][branch] = "8.x-1.x"

projects[admin_toolbar][version] ="1.10"
projects[admin_toolbar][type] ="module"
projects[admin_toolbar][subdir] ="contrib"

projects[block_class][version] = "1.x-dev"
projects[block_class][type] = "module"
projects[block_class][subdir] = "contrib"
projects[block_class][download][type] = "git"
projects[block_class][download][branch] = "8.0.x-1.x"
projects[block_class][download][url] = "http://git.drupal.org/sandbox/YaronTal/2345855.git"
; Add support for page manager.
; http://drupal.org/node/2509142
projects[block_class][patch][2509142] = "http://drupal.org/files/issues/add-page-manager-support-2509142-2.patch"

projects[dropzonejs][version] = "1.x-dev"
projects[dropzonejs][type] = "module"
projects[dropzonejs][subdir] = "contrib"
projects[dropzonejs][download][type] = "git"
projects[dropzonejs][download][branch] = "8.x-1.x"

projects[composer_manager][version] = "1.x-dev"
projects[composer_manager][type] = "module"
projects[composer_manager][subdir] = "contrib"
projects[composer_manager][download][type] = "git"
projects[composer_manager][download][branch] = "8.x-1.x"

projects[config_update][version] = "1.x-dev"
projects[config_update][type] = "module"
projects[config_update][subdir] = "contrib"
projects[config_update][download][type] = "git"
projects[config_update][download][branch] = "8.x-1.x"

projects[crop][version] = "1.x-dev"
projects[crop][type] = "module"
projects[crop][subdir] = "contrib"
projects[crop][download][type] = "git"
projects[crop][download][branch] = "8.x-1.x"

projects[ctools][version] ="3.x-dev"
projects[ctools][type] ="module"
projects[ctools][subdir] ="contrib"
projects[ctools][download][type] = "git"
projects[ctools][download][branch] = "8.x-3.x"

projects[embed][version] = "1.x-dev"
projects[embed][type] = "module"
projects[embed][subdir] = "contrib"
projects[embed][download][type] = "git"
projects[embed][download][branch] = "8.x-1.x"

projects[entity_browser][version] = "1.x-dev"
projects[entity_browser][type] = "module"
projects[entity_browser][subdir] = "contrib"
projects[entity_browser][download][type] = "git"
projects[entity_browser][download][url]= "git@github.com:drupal-media/entity_browser.git"
projects[entity_browser][download][branch] = "8.x-1.x"

projects[entity_embed][version] = "1.x-dev"
projects[entity_embed][type] = "module"
projects[entity_embed][subdir] = "contrib"
projects[entity_embed][download][type] = "git"
projects[entity_embed][download][branch] = "8.x-1.x"

projects[features][version] = "3.x-dev"
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"
projects[features][download][branch] = "8.x-3.x"

projects[file_browser][version] = "1.x-dev"
projects[file_browser][type] = "module"
projects[file_browser][subdir] = "contrib"
projects[file_browser][download][type] = "git"
projects[file_browser][download][branch] = "8.x-1.x"

projects[file_entity][version] = "2.x-dev"
projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"
projects[file_entity][download][type] = "git"
projects[file_entity][download][branch] = "8.x-2.x"

projects[geolocation][version] = "1.x-dev"
projects[geolocation][type] = "module"
projects[geolocation][subdir] = "contrib"
projects[geolocation][download][type] = "git"
projects[geolocation][download][branch] = "8.x-1.x"

projects[import][version] = "1.x-dev"
projects[import][type] = "module"
projects[import][subdir] = "contrib"
projects[import][download][type] = "git"
projects[import][download][branch] = "8.x-1.x"

projects[inline_entity_form][version] = "1.x-dev"
projects[inline_entity_form][type] = "module"
projects[inline_entity_form][subdir] = "contrib"
projects[inline_entity_form][download][type] = "git"
projects[inline_entity_form][download][branch] = "8.x-1.x"

projects[layout_plugin][version] = "1.x-dev"
projects[layout_plugin][type] = "module"
projects[layout_plugin][subdir] = "contrib"
projects[layout_plugin][download][type] = "git"
projects[layout_plugin][download][branch] ="8.x-1.x"

projects[manualcrop][version] = "x-1.x-dev"
projects[manualcrop][type] = "module"
projects[manualcrop][subdir] = "contrib"
projects[manualcrop][download][type] = "git"
projects[manualcrop][download][branch] = "8.x-1.x"
projects[manualcrop][download][url] = "http://git.drupal.org/sandbox/DevinCarlson/2572651.git"

projects[migrate_plus][version] = "1.x-dev"
projects[migrate_plus][type] = "module"
projects[migrate_plus][subdir] = "contrib"
projects[migrate_plus][download][type] = "git"
projects[migrate_plus][download][branch] = "8.x-1.x"

projects[migrate_source_csv][version] = "1.x-dev"
projects[migrate_source_csv][type] = "module"
projects[migrate_source_csv][subdir] = "contrib"
projects[migrate_source_csv][download][type] = "git"
projects[migrate_source_csv][download][branch] = "8.x-1.x"

projects[migrate_tools][version] = "1.x-dev"
projects[migrate_tools][type] = "module"
projects[migrate_tools][subdir] = "contrib"
projects[migrate_tools][download][type] = "git"
projects[migrate_tools][download][branch] = "8.x-1.x"

projects[page_manager][version] = "1.x-dev"
projects[page_manager][type] = "module"
projects[page_manager][subdir] = "contrib"
projects[page_manager][download][type] = "git"
projects[page_manager][download][branch] = "8.x-1.x"
; Rename the core "Page with blocks" admin_label and sort display variants
; https://www.drupal.org/node/2503947
projects[page_manager][patch][2503947] = "https://www.drupal.org/files/issues/page_manager-asort-admin-label-etc-0.patch"

projects[oauth][version] = "1.x-dev"
projects[oauth][type] = "module"
projects[oauth][subdir] = "contrib"
projects[oauth][download][type] = "git"
projects[oauth][download][branch] = "8.x-1.x"

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
; Accessing an id on a new entity results in EntityMalformedException
; http://drupal.org/node/2627822
projects[pathauto][patch][2627822] = "https://www.drupal.org/files/issues/pathauto-check-for-id-2627822-8.x-1.x.patch"

projects[restui][version] = "1.x-dev"
projects[restui][type] = "module"
projects[restui][subdir] = "contrib"
projects[restui][download][type] = "git"
projects[restui][download][branch] = "8.x-1.x"

projects[scenarios][version] = "1.x-dev"
projects[scenarios][type] = "module"
projects[scenarios][subdir] = "contrib"
projects[scenarios][download][type] = "git"
projects[scenarios][download][branch] = "8.x-1.x"

projects[token][version] = "1.x-dev"
projects[token][type] = "module"
projects[token][subdir] = "contrib"
projects[token][download][type] = "git"
projects[token][download][branch] = "8.x-1.x"

projects[url_embed][version] = "1.x-dev"
projects[url_embed][type] = "module"
projects[url_embed][subdir] = "contrib"
projects[url_embed][download][type] = "git"
projects[url_embed][download][branch] = "8.x-1.x"

projects[workbench_moderation][version] = "1.x-dev"
projects[workbench_moderation][type] = "module"
projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][download][type] = "git"
projects[workbench_moderation][download][branch] = "8.x-1.x"

; Libraries
libraries[dropzone][destination] = "../../libraries"
libraries[dropzone][download][type] = "get"
libraries[dropzone][download][url] = "https://github.com/enyo/dropzone/archive/v4.2.0.zip"

libraries[masonry][destination] = "../../libraries"
libraries[masonry][download][type] = "get"
libraries[masonry][download][url] = "https://github.com/desandro/masonry/archive/v3.3.1.zip"

libraries[imagesloaded][destination] = "../../libraries"
libraries[imagesloaded][download][type] = "get"
libraries[imagesloaded][download][url] = "https://github.com/desandro/imagesloaded/archive/v3.1.8.zip"

libraries[slick][destination] = "libraries"
libraries[slick][download][type] = "get"
libraries[slick][download][url] = "https://github.com/kenwheeler/slick/archive/1.5.0.zip"

; Themes
projects[adminimal_theme][version] = "1.1"
projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][subdir] = "contrib"
projects[adminimal_theme][download][type] = "git"
projects[adminimal_theme][download][branch] = "8.x-1.x"

projects[zurb-foundation][version] = "5.0-beta2"
projects[zurb-foundation][type] = "theme"
projects[zurb-foundation][subdir] = "contrib"
projects[zurb-foundation][directory_name] = "zurb_foundation"
projects[zurb-foundation][download][type] = "git"
projects[zurb-foundation][download][branch] = "8.x-5.x"
