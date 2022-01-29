#include <stdio.h>

unsigned int length = 0;

int strlength(char* str)
{
	
	while (str[length] != 0x0)
	{
		length++;
	}
	
	return length;
}



int main(int argc, char* argv[])
{

	char array[20];
	
	printf("Enter a nice string: ");
	fgets(array, sizeof(array), stdin);
	
	strlength(array);
	if (length >= 15)
	{
		printf("%d\nnope brudda", length);
		return -1;
	}
	
	strlength(array);

	printf("number of chars + newline = %d\n", length);



	return 0;
}
