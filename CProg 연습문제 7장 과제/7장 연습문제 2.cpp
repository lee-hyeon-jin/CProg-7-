#include <stdio.h>

int main(void)
{
	int j, i;
	for (j = 1; j < 6; j++)
	{
		for (i = 5; i > 0; i--)
		{
			if (i <= j)
				printf("%d", i);
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}