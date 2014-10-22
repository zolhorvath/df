# Demo Framework
[![Build Status](https://magnum.travis-ci.com/acquia/demo_framework.svg?token=fkKCDWeX7fUCfybPUjJb&branch=master)](https://magnum.travis-ci.com/acquia/demo_framework)

The Demo Framework (DF) is a distribution consisting of modules, themes and libraries. It highlights powerful features created by the Drupal community. It is intended to be used as a starterkit for promoting enterprise-ready solutions.

## Basics
-----
*Powered by Lightning!*
- DF is built upon the Lightning base distribution.  
- We employ the Lightning Features modules to enable DF core componenets
- A set of features including a make file that Drush picks up recursively
- See http://github.com/acquia/lightning and http://github.com/acquia/lightning-features

The following modules are stored on D.O. as projects as they are provided by Lightning:
- Assemble -- Manifest enables Panels, Views, Beans, and Webform/Form Builder
- Curate -- Manifest enables In-place Editing, Site Previews and Workbench
- Import -- Migrate extensions for injecting demo entities from CSV

All other DF  modules are in this repo, they are:
- DF Admin -- Demo Framework's drush commands and user interfaces
- DF Commerce -- Drupal Commerce configurations and migrate classes
- DF Connect -- Integrations with 3rd Party Apps (ex: Mollom)
- DF Engage -- Personalization, Rules, Groups, Segmentation
- DF Search -- Search API configurations and core search overrides
- DF Translate -- Translation Tools, i18n, l10n, Multilingual

> drush si df [include environment specific site-install arguments]

## Scenarios
-----
__DFS WEM -- Web Experience Management Scenario (contains content)__

This is the full 'WEM Demo' that we usually use, aka "World Travel Nexus"

Option #1: via drush, after DF is installed just run:

> drush df-es dfs_wem

Option #2: when DF is installed, home is set to admin/df

1. Click on (Enable) next to DFS WEM
1. The Feature may take a while to load, then a batch content import will run.
1. The homepage will be set to the Nexus homepage.
1. Visit admin/df to reset content.

-----

__DFS ME -- "Media & Entertainment" themed, microsite scenario (contains content)__

This is a fictional Media and Entertainment company similar to a major TV Network.

Option #1:  via Drush, after DF is installed run:

> drush df-es dfs_me

Option #2:  Install DF as normal.  Visit admin/df

1. Click on (Enable) next to DFS ME
1. The Feature may take some time loading, then a batch content import will run.
1. The homepage will be set to the 'Skate City LA' landing page.
1. Visit admin/df to reset content.

-----

__DFS Valen -- Commerce Demo (contains content)__

This will enable a full content, community and commerce demo for the fictional brand Valen.

Option #1:  via Drush, after DF is installed run:

> drush en dfs_valen

Option #2:  Install DF as normal.  Visit admin/df

1. Click on (Enable) next to Valen Commerce Demo
1. The Feature will take an epic amount of time to load, then a batch content import will run.
1. The homepage will be set to the Valen homepage.
1. Visit admin/df to reset content.

## Acquia Secret Sauce
----

There are some additional API keys that you might need for demoing.  You can get these by enabling the acquia_secret module.  In addition, there are some specific integrations that can be used, such as Salesforce mapping and Marketo lead scoring.

> drush en acquia_secret -y

## Distribution Installation
-----

### Using build.sh (build distro - quick, easy, no frills)
----
> sh build.sh [docroot]

### Using apache ant
----
To start, copy the `build.properties.dist` file to `build.properties` and configure the values to your specific environment.

Running `ant` with no targets will ensure that Drush is available, run `drush make`, and run `drush site install`. This gets you from 0 to full Demo Framework install in less than 10 minutes, running one command. Pretty cool.

Running `ant drush-make` will effectively rebuild your docroot using `drush make`.

If you want to uninstall the the site (a.k.a. drop the database) then run `ant uninstall`. If you want to re-install the database without re-running drush make, execute `ant -Ddrush.nomake=1 install`.

Futher documentation can be found here:  https://github.com/cpliakas/drupal-ant#usage

### Using dice.sh (build and install distro - fully automated, handy)
-----
> wget https://gist.github.com/brantwynn/5110901/raw/dice.sh

Source the dice.sh file from your .bash_profile
> source /path/to/df/dice.sh

Run the 'dice' command to install this distro (or others).

> dice build-df.make ~/Sites/demo root password demo.db demosite df

> dice [makefile] [docroot] [dbuser] [dbpass] [database] [sitename] [distro]

### Using Vagrant with Virtualbox
---
Download and Install Virtualbox
- Virtualbox: https://www.virtualbox.org/wiki/Downloads

Download and Install Vagrant
- Vagrant: http://downloads.vagrantup.com

Install Berkshelf for Vagrant
> vagrant plugin install vagrant-berkshelf

Build the distribution as you normally would using build-df.make

Add the following Vagrantfile and Berksfile to your docroot
- https://gist.github.com/brantwynn/5680085/raw/Vagrantfile
- https://gist.github.com/brantwynn/5680070/raw/Berksfile

Set the following environmental variables (or edit the Vagrantfile and hardcode them).
> export DRUPAL_DISTRO=df

> export DRUPAL_PROJECT=localdemo

Use Vagrant to build the virtual machine or reload it
> vagrant up

### Automating your Vagrant build process using vice.sh
---
> wget https://gist.github.com/brantwynn/5680040/raw/vice.sh

Add this line to your .bash_profile or .zshrc
> source /path/to/vice.sh

Now you can skip everything but installing Virtualbox/Vagrant/Berkshelf in the instructions above...
Just use the vice.sh shell script.
> vice [makefile] [destination] [distro] [sitename] [vagrant command]

> vice /path/to/df/build-df.make /path/to/your/demo/docroot df demo-test reload


