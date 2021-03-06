# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: Rules.make 1055 2005-04-27 10:08:39Z loser $


# Common rules shared by all build targets.

.PHONY: dummy

# Use SUBDIRS to descend into subdirectories.
subdir_list  = $(patsubst %,all-%,$(SUBDIRS))
subdir_clean = $(patsubst %,clean-%,$(SUBDIRS))
subdir_release = $(patsubst %,release-%,$(SUBDIRS))
subdirs: dummy $(subdir_list)

ifdef SUBDIRS
$(subdir_list): dummy
	$(GNUMAKE) -C $(patsubst all-%,%,$@)
$(subdir_clean): dummy
	$(GNUMAKE) -C $(patsubst clean-%,%,$@) clean
$(subdir_release): dummy
	$(GNUMAKE) -C $(patsubst release-%,%,$@) release

endif

all: $(subdir_list)

# Default rule for clean.
clean: $(subdir_clean)

#Default rule for release
release: $(subdir_release)

# A rule to do nothing.
dummy:
