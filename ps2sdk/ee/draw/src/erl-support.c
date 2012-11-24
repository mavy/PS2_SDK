/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: erl-support.c 1669 2010-03-29 16:41:15Z jim $
# The erl-tags support
*/

#include <erl.h>

char * erl_id = "libdraw";
char * erl_dependancies[] = {
	"libc",
	"libmf",
    0
};