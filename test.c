#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<time.h>
#include"strcpy_imp.h"

/* timing helper function */
static double tvgetf(void){
	struct timespec ts;
	double sec;

	clock_gettime(CLOCK_REALTIME, &ts);
	sec = ts.tv_nsec;
	sec /= 1e9;
	sec += ts.tv_sec;

	return sec;
}

int main(){
	double t1, t2;
	char text[] = "Let it go. Let it go. Can't hold it back anymore";
	char text1[100];


	t1 = tvgetf();
	printf("%s\n", strcpy(text1, text));
	t2 = tvgetf();

	printf("Complete in %f sec.\n", t2-t1);
	return 0;
}
