/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: erl-support.c 1150 2005-06-12 11:42:08Z pixel $
# The erl-tags support
*/

#include <erl.h>

/**** please note ****/
/* libc should be dependant on libmc, only for fflush support */
/* however, I decided to not put it here */
/* add manual loading of libmc if you need fflush */

char * erl_id = "libc";

char * erl_dependancies[] = {
    "libkernel",
    0
};
