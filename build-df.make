api = 2
core = 7.x
includes[] = drupal-org-core.make

; DF Modules manage own dependencies
includes[] = modules/df/df_assembler/df_assembler.make
includes[] = modules/df/df_curator/df_curator.make
includes[] = modules/df/df_engage/df_engage.make
includes[] = modules/df/df_import/df_import.make

projects[df][type] = "profile"
projects[df][download][type] = "git"
projects[df][download][branch] = "7.x-1.x"
