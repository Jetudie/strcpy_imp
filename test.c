#include<stdio.h>
#include<string.h>
#include<limits.h>
#include"strcpy_imp.h"

int main(){
	char text[] = "Let it go. Let it go. Can't hold it back anymore";
	char text1[100];

	printf("%s\n", strcpy(text1, text));
	return 0;
}
