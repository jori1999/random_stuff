#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>



int main(int argc, char* argv[])
{
	char str1[10];
	
	FILE* fptr = fopen("file.txt", "w+");
	fprintf(fptr, "jori");
	rewind(fptr);
	fscanf(fptr, "%s", str1);
	printf("%s", str1);


	return 0;
}
