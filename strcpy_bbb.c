#include"strcpy_bbb.h"

char* strcpy_bbb(char* dst,const char* src){
	char* ptr = dst;
	while(*dst++ = *src++)
		;
	*dst = '\0';
	return ptr;
}
