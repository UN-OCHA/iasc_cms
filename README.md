# IASC CMS

This is the IASC CMS src repository and build tools.

You should install the [IASC CMS Environment](https://bitbucket.org/phase2tech/iasc_env) as part of the process of working with this repository.
The order of operations is:
  1.Clone this repo and follow the step up instructions below.
  2.On the same directory level, clone the IASC CMS Environment repo and follow the setup instructions in that README.md. So if you cloned this repo to ~/Sites/iasc_cms, then iasc_env would be found at ~/Sites/iasc_env.

## Build Tools
The IASC CMS build tools are run by [Grunt](http://gruntjs.com/). In order to build, make sure the following packages are installed:

- [NodeJS](http://nodejs.org/download/)
    - OS X developers are recommended to use Brew to install Node (`brew install node`).
    - Windows developers should download an appropriate binary from [nodejs.org](http://nodejs.org/download/).
    - Linux (Debian-based): `apt-get install nodejs` and `ln -s /usr/bin/nodejs /usr/bin/node`.
- [npm](https://www.npmjs.org/) (Should come with NodeJS; confirm that it is installed).
    - Not included in Debian-based Linux, so `apt-get install npm`.
- [Grunt](http://gruntjs.com/getting-started)
    - Windows users should also read [this note](http://gruntjs.com/frequently-asked-questions#does-grunt-work-on-windows).
- [Composer](https://getcomposer.org)
    - OS X developers are recommended to use Homebrew to install Composer with the following command (all one line): `brew update && brew tap josegonzalez/homebrew-php && brew tap homebrew/versions && brew install php55 && brew install homebrew/php/composer`
    - Windows developers should download the installer; see [this page](https://getcomposer.org/doc/00-intro.md#installation-windows) for more details.

Once you have Grunt installed, install the building tools by running this command at the root of this repo:

`npm install`

### Basic Grunt Commands

Currently to build your site, you should run `grunt` from the base directory of this repository. This will perform the necessary cleaning and preparation tasks and then invoke drush make to build our Drupal install.

You *must* do this from within the Vagrant-based development VM.
To open a shell on your VM, type `vagrant ssh` from the iasc_env clone folder.

## Repository Structure

Everything you will be modifying is in the `src` directory. Files/directories are as follows:

`src`

- `iasc.make`: The parent make file. Any additional contributed modules that need to be included are put here. Note that IASC CMS uses the [Open Atrium](http://git.drupal.org/project/openatrium.git) project as its basis, which includes many commonly used contributed modules.
- `modules`: This is where developers will add custom modules, both Features and "normal" modules. This gets copied to sites/all/modules/custom in the build.
- `profiles`: Profiles directory. `profiles/iasc` is our profile for the site. Any modules that you need added to the platform should go into the .info file. Don't forget! :)
- `sites`: Drupal's sites directory. Maps to `sites` in Drupal. Note that `sites/all` is not contained here; this is normal.
    - `sites/default`: Contains `settings.php`.
- `themes`: Themes directory. Maps to `sites/all/themes/custom`. Our theme code will go in here.

## Working with the build

If you are just building for the first time:
 First you will need to run `npm install` and `grunt`
 Then you can follow the instructions on the [IASC Environment Repo](https://bitbucket.org/phase2tech/iasc_env).

### Everyday workflow:

- Work on files within the `src` directory on your local machine, as described in the repository structure.
- Once you have run `vagrant up --provision` the very first time, you should not have to `vagrant destroy` often (if at all).
- To shut down the VM before powering down your local host, use `vagrant halt`, and then restart the next day with `vagrant up [--provision]`.  Here are some handy shortcuts:
    - `alias iascup='cd /path/to/iasc_env; vagrant up`
    - `alias iascdown=cd /path/to/iasc_env; vagrant halt`
    - `alias iascssh=cd /path/to/iasc_env; vagrant ssh`
- Changes to files within `modules`, `profiles`, `sites`, and `themes` will sync from your local machine to the VM and to the correct location within the build directory. **You do not need to run the build in this case.**
- **Your code should always install cleanly with a fresh site install.** Please make sure any custom Features or modules that you add to the repo are added to `src/profiles/iasc/iasc.info` so that they are enabled with a clean install.
- If you update components of a Feature module, you can export the update to code with `cd /opt/development/iasc_cms/build/html/sites/default && drush fu <your Feature> -y`. You can then sync code back to your local host machine by running `vagrant rsync-back` from the root of the `iasc_env` repo.
- On your local if you run `drush use @iasc` local drush commands will run on your VM.  (Run `drush site-reset` to "un-use".)

### Rebuilding (Drupal and/or SASS, etc):

- We use Grunt to rebuild (no need to rebuild the VM).  Do this when the makefile has added (or removed) modules, or for whatever other reason you like.
    - On your local, run `cd /path/to/iasc_env && ./vm-grunt`.
    - **NOTE:** If you want to force running the makefile and haven't made any changes to it, you may need to update its timestamp:
        - On your VM run: `touch /opt/development/iasc_cms/src/iasc.make`

### (Re-)install Drupal:

- Do this whenever you want to start over with a fresh Drupal install.  (Again, no need to do anything with Vagrant.)
    - On your VM, run `cd /opt/development/iasc_cms/build/html && drush si --account-pass=admin iasc -y`.

### Installing default content:

- Once Drupal is installed, you can install the default content by running `drush mi --all`. This will create content in the system which can be used for testing.

## Branching procedures

We are following [Gitflow](http://nvie.com/posts/a-successful-git-branching-model/) as our branching strategy. Our primary branches are `master` and `develop`. Working branches should be named as follows:

- `feature/IASC-123` where `IASC-123` is the JIRA ticket dicating the work in the feature. If there is no JIRA ticket, please use a short readable explanation of the work in the branch.
- `hotfix/IASC-123` for hotfixes/bug fixes. Same conventions apply.

  Here is a [cheatsheet](http://danielkummer.github.io/git-flow-cheatsheet/), it has instructions on how to install it and a cheatsheet for the commands.

Feel free to use the [git-flow git extension](https://github.com/nvie/gitflow) if it is useful to you. It is not required. If you do, run `git flow init` in your clone of the repo and accept all defaults.
- Make sure your local repo has both `master` and `develop` branches checked out to easily accept defaults.

Example:
1. I want to start on a new ticket IASC-123
2. I pull down the latest development branch into development on my clone.
3. `git flow feature start IASC-123`
4. Do great work!
5. I stage my files using git add ( `git add -A .` will add all files)
6. `git commit -m "IASC-123 some description for what I did"`
7. When you are ready to push your feature up to the main repository, `git flow feature publish IASC-123`
8. Go to bitbucket.org and make a pull request into the development branch from feature/IASC-123
9. You can assign a code reviewer if you like. If you're not assigning it to anyone, be sure to make add a message in our flowdock room to alert developers. Something like: `Hey guys, I submitted a PR for IASC-123`

To submit your working branch for merging, please push it to origin and create a pull request. Please note that developers in general will not be able to push directly to `develop`.

### Who do I talk to? ###

* Mai Irie