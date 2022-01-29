#include <stdio.h>

int main()
{

	int i, a[5], sum = 0;
	printf("Enter 5 numbers: \n");

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);		// &a[i] is same as a + i

		sum += a[i];			// a[i] is same as *(a + i)

	}

	printf("sum = %d\n", sum);

	return 0;
}
