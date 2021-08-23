#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	int n = 201;
	int * arr = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
		arr[i] = 0;

	arr[n-1] = 1;
	for (j = 1; j <= 100; j++)
	{
		for (i = 0; i < n; i++)
			arr[i] *= j;
		for (i = n-1; i >= 0; i--)
			if (arr[i] >= 10)
			{
				arr[i - 1] += arr[i] / 10;
				arr[i] %= 10;
			}
	}
	
	int sum=0;
	for (i = 0; i < n; i++)
		sum += arr[i];

	printf("%d\n", sum);
	free(arr);
	return 0;
}
