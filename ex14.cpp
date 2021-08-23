#include <iostream>
#include <stdio.h>

using namespace std;

int LenCol(unsigned int num)
{
	int len=1;

	if (num == 1)
		return 1;
	else if (num % 2 == 0)
	{
		return 1 + LenCol(num / 2);
	}
	else if (num % 2 == 1)
	{
		return 1 + LenCol(3 * num + 1);
	}
}

int main(void)
{
	unsigned int i;
	long int maxlen = 1;
	int max=0;

	for (i = 1; i <= 1000000; i++)
	{
		if (maxlen < LenCol(i))
		{
			maxlen = LenCol(i);
			max = i;
		}
	}

	printf("%d %d \n", max, maxlen);

	return 0;
}
