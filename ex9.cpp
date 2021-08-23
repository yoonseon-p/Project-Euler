#include <math.h>
#include <stdio.h>
int main()
{
	long int a, b, c;
	for (c=1;c<1000;c++)
	{
		for (b=1;b<c;b++)
		{
			a = 1000 - b - c;
			if (pow(c, 2) == pow(a, 2) + pow(b, 2)&&a>0)
			{
				printf("%ld", a * b * c);
				break;
			}
		}
	}
	return 0;
}
