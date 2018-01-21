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
	char text[2000];
	char text1[2000];
	int len;
	char in_file[] = "TEXT.txt";
	char out_file[] = "Time.txt";
	
	FILE *fp = fopen(in_file, "r");
	
	if(!fp){
		fprintf(stderr, "error: file open failed '%s'.\n", out_file);
		return 1;
	}

	/* read the string in the in_file */
	fscanf(fp, "%s", text);
	len = strlen(text);
	printf("%s", text);
	fclose(fp);

	fp = fopen(out_file, "w");
	
	if(!fp){
		fprintf(stderr, "error: file open failed '%s'.\n", out_file);
		return 1;
	}

	while(len--){
		/* store the time right before and after strcpy */
		t1 = tvgetf();
		strcpy1(text1, text);
		t2 = tvgetf();

		/* make the null terminator one more byte ahead */
		*(text+len) = '\0';
		printf("%s\n", text1);
		fprintf(fp, "%d %.8f sec\n", len, t2-t1);

		printf("Complete in %.8f sec.\n", t2-t1);
	}
	fclose(fp);
	return 0;
}
