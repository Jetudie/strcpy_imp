#include<stdio.h>
#include<string.h>
#include<limits.h>
#include"strcpy_bbb.h"
#include"strcpy_wbw.h"

#ifdef STRCPY_BBB_H_
#define STRCPY strcpy_bbb
#else

#ifdef STRCPY_WBW_H_
#define STRCPY strcpy_wbw
#endif
#endif

int main(){
	char text[] = "Let it go. Let it go. Can't hold it back anymore";
	char text1[100];

	printf("%s\n", STRCPY(text1, text));
	return 0;
}
