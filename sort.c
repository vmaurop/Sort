


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, n, i, j;
	int values[] = { 7,12,21,11};

	printf("Before sorting the list is: \n");
	for (n = 0; n < 4; n++)
	{
		printf("%d ", values[n]);
	}

	for (i = 1; i<4; i++)
	{
		for (j = 3; j >=i ; j--)
		{
			if (values[j - 1]<values[j])
			{
				x = values[j - 1];
				values[j - 1] = values[j];
				values[j] = x;
			}
		}

	}

	printf("\nAfter sorting the list is: \n");
	for (n = 0; n < 4; n++)
	{
		printf("%d ", values[n]);
	}

	return(0);
}

