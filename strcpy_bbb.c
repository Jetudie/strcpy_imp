#include"strcpy_imp.h"

char* strcpy(char* dst,const char* src){
	char* ptr = dst;
	while(*dst++ = *src++)
		;
	*dst = '\0';
	return ptr;
}
