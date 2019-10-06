/*
	tiny26noise - ATtiny26 based brown(ish) noise generator
	Copyright (C) 2019-2019 Johannes Bauer

	This file is part of tiny26noise.

	tiny26noise is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; this program is ONLY licensed under
	version 3 of the License, later versions are explicitly excluded.

	tiny26noise is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with tiny26noise; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

	Johannes Bauer <JohannesBauer@gmx.de>
*/

#ifndef __NOISEGEN_H__
#define __NOISEGEN_H__

#include <stdint.h>

/*************** AUTO GENERATED SECTION FOLLOWS ***************/
void noisegen_set_divisor(uint8_t new_divisor);
uint8_t noisegen_next(void);
/***************  AUTO GENERATED SECTION ENDS   ***************/

#endif
