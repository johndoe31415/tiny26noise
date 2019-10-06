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

#include <stdint.h>
#include "noisegen.h"

struct prng_range_t {
	uint8_t mask;
	uint8_t maxval;
};

static struct prng_range_t generator_range;

static uint8_t prng(void) {
	static uint32_t state = 2303917084;
	state ^= state << 13;
	state ^= state >> 17;
	state ^= state << 5;
	return state & 0xff;
}

static uint8_t prng_range(const struct prng_range_t *range) {
	const uint8_t raw_value = prng();
	uint8_t result = raw_value & range->mask;
	const uint8_t subtract = (result > range->maxval) ? range->maxval : 0;
	result -= subtract;
	return result;
}

static int8_t prng_range_signed(const struct prng_range_t *range) {
	uint8_t unsigned_value = prng_range(range);
	return (int8_t)unsigned_value - (range->maxval / 2);
}

static void prng_range_init(struct prng_range_t *range, uint8_t maxval) {
	for (int8_t bit = 8; bit >= 0; bit--) {
		uint8_t mask = (1 << bit) - 1;
		if (mask >= maxval) {
			range->mask = mask;
		} else {
			break;
		}
	}
	range->maxval = maxval;
	//printf("mask = %d maxval = %d\n", range->mask, range->maxval);
}

void noisegen_set_divisor(uint8_t new_divisor) {
	prng_range_init(&generator_range, new_divisor);
}

uint8_t noisegen_next(void) {
	if (generator_range.maxval == 0) {
		return 0;
	}

	static int16_t value = 0;
	int8_t addsub = prng_range_signed(&generator_range);
//	printf("%d %d\n", generator_range.maxval, addsub);
	value += addsub;
	if (value < 0) {
		value = 0;
	} else if (value > 255) {
		value = 255;
	}
	return value;
}

#ifdef __TEST_NOISEGEN__
// gcc -o noisegen -Wall -std=c11 -D__TEST_NOISEGEN__ noisegen.c && ./noisegen && sox -t raw -r 11025 -b 8 -c 1 -e unsigned-integer output.raw output.wav

#include <stdio.h>

#define PIECES 		20
#define PIECE_SIZE	(32 * 1024)

int main(void) {
#if 0
	struct prng_range_t range;
	prng_range_init(&range, 255);
	for (int i = 0; i < 100; i++) {
		uint8_t value = prng_range(&range);
		printf("%d\n", value);
	}
#endif

	uint8_t data[PIECES * PIECE_SIZE];

	uint8_t *ptr = data;
	for (unsigned int pieceno = 0; pieceno < PIECES; pieceno++) {
		noisegen_set_divisor(20 + pieceno);
		for (unsigned int i = 0; i < PIECE_SIZE; i++) {
			*ptr++ = noisegen_next();
		}
	}

	FILE *f = fopen("output.raw", "w");
	if (f) {
		if (fwrite(data, 1, sizeof(data), f) != sizeof(data)) {
			perror("fwrite");
		}
		fclose(f);
	}
	return 0;
}
#endif
