#include <stdio.h>

int main(void)
{
	int j, i;
	for (j = 0; j < 5; j++)
	{
		for (i = 5; i > j; i--)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}