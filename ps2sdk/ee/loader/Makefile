# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: Makefile 1421 2007-07-07 01:56:53Z radad $


EE_OBJS_DIR = obj/
EE_BIN_DIR = bin/
EE_SRC_DIR = src/
EE_INC_DIR = include/

EE_INCS = -I$(PS2SDKSRC)/ee/rpc/hdd/include -I$(PS2SDKSRC)/ee/rpc/poweroff/include -I$(PS2SDKSRC)/ee/rpc/filexio/include

EE_OBJS = loader.o fakehost.o poweroff.o
EE_OBJS := $(EE_OBJS:%=$(EE_OBJS_DIR)%)

EE_LDFLAGS = -L$(PS2SDKSRC)/ee/kernel/lib -L$(PS2SDKSRC)/ee/libc/lib -L$(PS2SDKSRC)/ee/rpc/hdd/lib -L$(PS2SDKSRC)/ee/rpc/filexio/lib -L$(PS2SDKSRC)/ee/rpc/poweroff/lib
EE_LIBS = -lpoweroff -lhdd -lfileXio -lc -lkernel

EE_BIN = $(EE_BIN_DIR)loader.elf

all: $(EE_OBJS_DIR) $(EE_BIN_DIR) $(EE_BIN)

clean:
	rm -f -r $(EE_OBJS_DIR) $(EE_BIN_DIR)

obj/fakehost.o: obj/fakehost.s
	$(EE_AS) $(EE_ASFLAGS) $< -o $@

obj/fakehost.s:
	$(PS2SDKSRC)/tools/bin2s/bin/bin2s $(PS2SDKSRC)/iop/fs/fakehost/bin/fakehost.irx obj/fakehost.s fakehost_irx

obj/poweroff.o: obj/poweroff.s
	$(EE_AS) $(EE_ASFLAGS) $< -o $@

obj/poweroff.s:
	$(PS2SDKSRC)/tools/bin2s/bin/bin2s $(PS2SDKSRC)/iop/dev9/poweroff/bin/poweroff.irx obj/poweroff.s poweroff_irx

include $(PS2SDKSRC)/Defs.make
include $(PS2SDKSRC)/ee/Rules.make
include $(PS2SDKSRC)/ee/Rules.release
