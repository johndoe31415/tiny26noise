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

#include <stdbool.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "hal.h"

/* (100 * SECONDS_UNTIL_NEXT_DIVISOR) seconds until shutoff */
#define SECONDS_UNTIL_NEXT_DIVISOR		20

volatile uint8_t divisor = 20;
volatile bool enabled = true;

static uint8_t prng(void) {
	static uint32_t state = 2303917084;
	state ^= state << 13;
	state ^= state >> 17;
	state ^= state << 5;
	return state & 0xff;
}


ISR(TIMER0_OVF0_vect) {
	/* ISR every 16.384ms */

	static uint16_t ctr;
	ctr++;
	if (ctr >= 61 * SECONDS_UNTIL_NEXT_DIVISOR) {
		/* 10 seconds */
		if (divisor < 120) {
			divisor++;
		} else {
			enabled = false;
		}
		ctr = 0;
	}
}

int main(void) {
	initHAL();

	TCCR0 = _BV(CS02) | _BV(CS00);	/* 16 MHz / 1024 */
	TIMSK = _BV(TOIE0);	/* Timer0 OVF */
	sei();

	int16_t value = 0;
	while (true) {
		int8_t addsub = ((int8_t)prng()) / divisor;
		value += addsub;
		if (value < 0) {
			value = 0;
		} else if (value > 255) {
			value = 255;
		}
		if (enabled) {
			PORTA = value;
		} else {
			PORTA = 0;
		}
	}

	return 0;
}
