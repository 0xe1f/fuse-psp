/* if1.h: Interface I handling routines
   Copyright (c) 2004-2005 Gergely Szasz, Philip Kendall

   $Id: if1.h 3327 2007-11-22 23:06:47Z zubzero $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

   Author contact information:

   Gergely: szaszg@hu.inter.net

*/

#ifndef FUSE_IF1_H
#define FUSE_IF1_H

#include <libspectrum.h>

#include "periph.h"

/* IF1 */
extern int if1_active;
extern int if1_available;

extern const periph_t if1_peripherals[];
extern const size_t if1_peripherals_count;

int if1_init( void );
libspectrum_error if1_end( void );

void if1_page( void );
void if1_unpage( void );
void if1_memory_map( void );

void if1_port_out( libspectrum_word port, libspectrum_byte val );
libspectrum_byte if1_port_in( libspectrum_word port, int *attached );

int if1_mdr_insert( int drive, const char *filename );
int if1_mdr_write( int drive, const char *filename );
int if1_mdr_eject( int drive, int write );
void if1_mdr_writeprotect( int drive, int wrprot );
void if1_plug( const char *filename, int what );
void if1_unplug( int what );

void if1_update_menu( void );

#endif				/* #ifndef FUSE_IF1_H */
