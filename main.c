#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* fp; //file pointer declaring
	char name[100];
	
	printf("Input a file name >> "); //printf, scanf
	scanf("%s", name);
	
	fp = fopen(name, "r"); //fopen
	
	if (fp == NULL) //NULL
	{
		printf("ERROR. Check the file name >> %s\n", name);
		return -1;
	}
	
	printf("%c\n", fgetc(fp)); 
	fclose(fp); //fclose
	return 0;
}
