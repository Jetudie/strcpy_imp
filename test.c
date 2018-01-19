#include<stdio.h>
#include<string.h>
#include<limits.h>
#include"strcpy_bbb.h"
#include"strcpy_wbw.h"

#if defined STRCPY_BBB_H_
#define STRCPY strcpy_bbb
#else

#if defined STRCPY_WBW_H_
#define STRCPY(X,Y) strcpy_wbw
#endif
#endif

int main(){
	char text[] = "Let it go. Let it go. Can't hold it back anymore";
	char text1[100];

	printf("%s\n", STRCPY(text1, text));
	return 0;
}
