#include <stdio.h>

int main()
{
	int tri_num = 0;
	int i, j;
	int count;
	int tmp;

	i = 0;
	do
	{
		count = 0;
		tri_num += ++i;

		
		for (j = 1, tmp = tri_num / i; j <= tmp; j++)
		{
			if (!(tri_num % j)) count++;
		}

	} while (count <= 250);

	printf("%d\n", tri_num);

	return 0;
}
