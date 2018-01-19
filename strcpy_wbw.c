#include "strcpy_imp.h"

/* Nonzero if either X or Y is not aligned on a "long" boundary.  */
#define UNALIGNED(X) \
  (((long)X & (sizeof (long) - 1)) )

#if LONG_MAX == 2147483647L
#define DETECTNULL(X) (((X) - 0x01010101) & ~(X) & 0x80808080)
#endif

#ifndef DETECTNULL
#error long int is not a 32bit
#endif

void strcpy1(char* dst0, const char* src0){
	char *dst = dst0;
	char *src = src0;
	long *dstl;
	long *srcl;

	for(int i = 0; i < UNALIGNED(dst0); ++i){
		*dst++ = *src++;
	}
	
	/* If SRC or DEST is aligned, then copy four-byte wise.  */
	dstl = (long*)dst;
	srcl = (long*)src;

	/* SRC and DEST are both "long int" aligned, try to do "long int" sized copies.  */
	while (!DETECTNULL(*srcl)){
		*dstl++ = *srcl++;
	}

	dst = (char*)dstl;
	src = (char*)srcl;
	while(*dst++ = *src++)
		;
}
