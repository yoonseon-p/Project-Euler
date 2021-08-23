#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 40, b = 20, res = 1;
	for (int i = 0; i < 20; i++)
	{
		res *= (a - i) / (b - i);
	}
	printf("%.2f", round(res));
	return 0;
}
