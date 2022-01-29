#include "Header.h"
int main()
{
	int array[4][2] = {			// 2D array
		{1,2},
		{3,4},
		{5,6},
		{7,8}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Element at array[%d][%d]: %d\n", i, j, array[i][j]);
		}
		
	
	}
	
	for (int i = 0; i < 4; i++)
	{
		
		for (int j = 0; j < 2; j++)
		{
			printf("%d,",array[i][j]);
			
		}
		printf("\n");
	}

	/***************************************************************************/
	char hey[] = "morda"; // NOT MODIFIABLE
	puts(hey);
	
	char* key = "Hoi";	  // HOLDS FIRST INDEX POS OF STRING AT MEMORY ADDRESS
	puts(key);
	
	key = "homo";
	puts(key);			  // prints from first index pos until terminator \0
	/***************************************************************************/

	/***************************************************************************/
	 // a = 5(00000101), b = 9(00001001) 
	 unsigned char a = 5, b = 9;

	 // The result is 00001010  
	 printf("a<<1 = %d\n", a << 1);

	 // The result is 00010010  
	 printf("b<<1 = %d\n", b << 1);
	/***************************************************************************/


	 struct aap {
	 
		 int aap1;
		 int aap2;
	 
		 int aap3;
		 
	 };
	return EXIT_SUCCESS;
}
