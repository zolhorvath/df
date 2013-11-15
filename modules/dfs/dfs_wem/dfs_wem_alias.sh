# @file dfs_wem.sh

drush $1 en dfs_wem -vy
drush $1 mi DFSWEMInterestsTerms
drush $1 mi DFSWEMUserPictures
drush $1 mi DFSWEMUsers
drush $1 mi DFSWEMProducts
drush $1 mi DFSWEMCommerceNodes
drush $1 mi DFSWEMCommerceNodesTranslations
drush $1 mi DFSWEMProductReviewNodes
drush $1 mi DFSWEMContestNodes
drush $1 mi DFSWEMContestNodesTranslations
drush $1 mi DFSWEMGroupsWEMContestUsers
drush $1 mi DFSWEMNewsVideo
drush $1 mi DFSWEMNewsNodes
drush $1 mi DFSWEMNewsNodesTranslations
drush $1 mi DFSWEMTweetNodes
drush $1 tei-rebuild
