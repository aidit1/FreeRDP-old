/*
   rdesktop: A Remote Desktop Protocol client.
   Miscellaneous protocol constants
   Copyright (C) Matthew Chapman 1999-2008
   Copyright (C) Marc-Andre Moreau <marcandre.moreau@gmail.com> 2009

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __CONSTANTS_H
#define __CONSTANTS_H

#include <freerdp/constants_ui.h>
#include "constants_pdu.h"
#include "constants_core.h"
#include "constants_rail.h"
#include "constants_crypto.h"
#include "constants_license.h"
#include "constants_capabilities.h"

#define DEFAULT_CODEPAGE	"UTF-8"
#define WINDOWS_CODEPAGE	"UTF-16LE"

#define MCS_CONNECT_INITIAL	0x7f65
#define MCS_CONNECT_RESPONSE	0x7f66
#define MCS_TAG_DOMAIN_PARAMS	0x30
#define MCS_GLOBAL_CHANNEL	1003
#define MCS_USERCHANNEL_BASE    1001

#define BER_TAG_BOOLEAN		1
#define BER_TAG_INTEGER		2
#define BER_TAG_OCTET_STRING	4
#define BER_TAG_RESULT		10

/* Raster operation masks */
#define ROP2_S(rop3) (rop3 & 0xf)
#define ROP2_P(rop3) ((rop3 & 0x3) | ((rop3 & 0x30) >> 2))

#define ROP2_COPY	0xc
#define ROP2_XOR	0x6
#define ROP2_AND	0x8
#define ROP2_NXOR	0x9
#define ROP2_OR		0xe

#define MIX_TRANSPARENT	0
#define MIX_OPAQUE	1

#define TEXT2_VERTICAL		0x04
#define TEXT2_IMPLICIT_X	0x20

#define ALTERNATE	1
#define WINDING		2

/* RDP bitmap cache (version 2) constants */
#define BMPCACHE2_C0_CELLS	0x78
#define BMPCACHE2_C1_CELLS	0x78
#define BMPCACHE2_C2_CELLS	0x150
#define BMPCACHE2_NUM_PSTCELLS	0x9f6

/* User Data Header Types */
#define CS_CORE         0xC001
#define CS_SECURITY     0xC002
#define CS_NET          0xC003
#define CS_CLUSTER      0xC004
#define CS_MONITOR      0xC005
#define SC_CORE         0x0C01
#define SC_SECURITY     0x0C02
#define SC_NET          0x0C03

#define BMPCACHE2_FLAG_PERSIST	((uint32)1<<31)

#define RDP_SOURCE		"MSTSC"

/* Keymap flags */
#define MapRightShiftMask   (1<<0)
#define MapLeftShiftMask    (1<<1)
#define MapShiftMask (MapRightShiftMask | MapLeftShiftMask)

#define MapRightAltMask     (1<<2)
#define MapLeftAltMask      (1<<3)
#define MapAltGrMask MapRightAltMask

#define MapRightCtrlMask    (1<<4)
#define MapLeftCtrlMask     (1<<5)
#define MapCtrlMask (MapRightCtrlMask | MapLeftCtrlMask)

#define MapRightWinMask     (1<<6)
#define MapLeftWinMask      (1<<7)
#define MapWinMask (MapRightWinMask | MapLeftWinMask)

#define MapNumLockMask      (1<<8)
#define MapCapsLockMask     (1<<9)

#define MapLocalStateMask   (1<<10)

#define MapInhibitMask      (1<<11)

#define MASK_ADD_BITS(var, mask) (var |= mask)
#define MASK_REMOVE_BITS(var, mask) (var &= ~mask)
#define MASK_HAS_BITS(var, mask) ((var & mask)>0)
#define MASK_CHANGE_BIT(var, mask, active) (var = ((var & ~mask) | (active ? mask : 0)))

/* Sound format constants */
#define WAVE_FORMAT_PCM		1
#define WAVE_FORMAT_ADPCM	2
#define WAVE_FORMAT_ALAW	6
#define WAVE_FORMAT_MULAW	7

/* Smartcard constants */
#define SCARD_LOCK_TCP		0
#define SCARD_LOCK_SEC		1
#define SCARD_LOCK_CHANNEL	2
#define SCARD_LOCK_RDPDR	3
#define SCARD_LOCK_LAST		4

#endif // __CONSTANTS_H

