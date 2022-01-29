#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>


#define PASSWORD "kees"

int main()
{
	
	printf("Enter a password: \n");
	char* buf = malloc(15);
	
	// printf("%d\n", sizeof(buf));									SIZE OF THE CHAR* in 64 BIT IS 8 BYTES!!!
	if (buf != NULL)
	{
		fgets(buf,  (sizeof(buf) / 2) + 1, stdin);					//THATS WHY WE NEED TO HALF IT!!!

		char isPassCorrect = 0;
		

		if (strncmp(buf, PASSWORD, (sizeof(buf) / 2) + 1) == 0)
		{
			isPassCorrect = 1;
		}

		if (isPassCorrect == 1)
		{
			printf("Access Granted!\n");
		}

		
	}

	free(buf);
	buf = NULL;





	return 0;
}
