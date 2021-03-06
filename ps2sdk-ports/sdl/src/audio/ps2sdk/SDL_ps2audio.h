/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2004 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Gil Megidish 
    gil@megidish.net
*/

#ifdef SAVE_RCSID
static char rcsid =
 "@(#) $Id: SDL_ps2audio.h 1120 2005-05-27 17:02:01Z gawd $";
#endif

#ifndef _SDL_ps2audio_h
#define _SDL_ps2audio_h

#include "SDL_sysaudio.h"

/* Hidden "this" pointer for the video functions */
#define _THIS	SDL_AudioDevice *this

struct SDL_PrivateAudioData {
	Uint8 playing;
	Uint8 *mixbuf;
	Uint32 mixlen;
	int sema;
};

#endif /* _SDL_ps2audio_h */
