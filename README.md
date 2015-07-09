# Demo Framework

The Demo Framework (DF) is a distribution consisting of modules, themes and libraries. It highlights powerful features created by the Drupal community. It is intended to be used as a starterkit for promoting enterprise-ready solutions.

### Installation

Installation currently only supported via Drush commands. First, build the profile using Drush make.

  ``drush make build-df.make ~/Destination/docroot``

Use the ``site-install`` command to install Drupal with the Demo Framework installation profile.

  ``drush si df``

Enable a Demo Framework Scenario using the ``df-es`` command provided by DF Admin.

  ``drush df-es dfs_dev``

If everything worked correctly, you should see console output that some migrations ran.

You may now login to your site.

  ``drush uli -l http://mysite.dd``

You may also reset the content of a Demo Framework Scenario if it is enabled.

  ``drush df-rs dfs_dev``

### Behat tests

Install the drupal-extension for mink/behat from the DF profile.

  ``cd profiles/df/tests && composer install``

Set up the behat.local.yml file replacing ``BASE_URL`` with your own url.

  ``cp behat.local.example.yml behat.local.yml``

Check that behat is installed and running under the dev profile.

  ``bin/behat --help --profile=dev``

Execute a specific feature scenario using the "dev" Behat profile.

  ``bin/behat --name="Welcome" --profile=dev``

Execute a batch of tagged features for the Drupal installation profile using the "default" Behat profile.

  ``bin/behat --tags=df``

Execute a batch of tagged features for a Demo Framework Scenario using the "dev" Behat profile.

  ``bin/behat --tags=dfs_dev --profile=dev``
