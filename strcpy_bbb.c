#include"strcpy_imp.h"
#define STRCPY strcpy_bbb

char* strcpy_bbb(char* dst,const char* src){
	char* ptr = dst;
	while(*dst++ = *src++)
		;
	*dst = '\0';
	return ptr;
}
