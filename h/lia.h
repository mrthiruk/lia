#ifndef _LIA_H_
#define _LIA_H_

#include <stdint.h>
#include <stdboo.h>

#ifdef LIA_BIT16
typedef uint16_t lia_digit;
#endif
#ifdef LIA_BIT32
typedef uint32_t lia_digit;
#endif

typedef struct {
	uint32_t used, alloc;
	bool sign;
	lia_digit *dp;
} lia_int;

#endif
