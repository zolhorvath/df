api = 2
core = 7.x

; DF Modules manage own dependencies
includes[] = modules/df/df_assembler/df_assembler.make
includes[] = modules/df/df_curator/df_curator.make
includes[] = modules/df/df_engage/df_engage.make
includes[] = modules/df/df_import/df_import.make

; Contributed Modules
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

projects[features][version] = "2.x-dev"
projects[features][type] = "module"
projects[features][subdir] = "contrib"

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

projects[navbar][version] = "1.0-alpha5"
projects[navbar][type] = "module"
projects[navbar][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[responsive_preview][version] = "1.0-beta1"
projects[responsive_preview][type] = "module"
projects[responsive_preview][subdir] = "cotnrib"

projects[rules][version] = "2.3"
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[views][version] = "3.6"
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_autocomplete_filters][version] = "1.0-beta2"
projects[views_autocomplete_filters][type] = "module"
projects[views_autocomplete_filters][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

; Themes
projects[responsive_bartik][version] = "1.x-dev"
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][subdir] = "contrib"
