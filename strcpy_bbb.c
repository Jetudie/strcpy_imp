#include<stdio.h>

char* strcpy_bbb(char* dst,const char* src){
	char* ptr = dst;
	while(*dst++ = *src++)
		;
	*dst = '\0';
	return ptr;
}

int main(){
	char text[] = "Hello";
	char text1[20];

	printf("%s\n", strcpy_bbb(text1, text));
	return 0;
}