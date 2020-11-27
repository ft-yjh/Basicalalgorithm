#include<stdio.h>

int main()
{
	FILE * fp = NULL;
	char buf[255]; 
	fp = fopen("test.txt", "r");
	//fprintf(fp,"This is a testing for fprintf \n");
	//fputs("This is a testing for fputs \n", fp);
	fscanf(fp, "%s", buf);
	printf("1:%s\n", buf);
	fgets(buf,255,fp);
	printf("2:%s\n",buf);
	fgets(buf,255,fp);
	printf("3:%s\n",buf);
	 
	fclose(fp);
	
	return 0;
 } 
