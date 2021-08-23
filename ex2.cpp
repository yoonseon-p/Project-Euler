#include <stdio.h>


int fibo(int num)
{
	if (num == 1) { return 1; }
	else if (num == 2) { return 2; }
	else { return fibo(num - 1) + fibo(num - 2); }
}

int main(void)
{
	int sum = 0;
	for (int i = 1;; i++)
	{
		
		if ( fibo(i) % 2 == 0)
			sum += fibo(i);

		if (fibo(i) >= 4000000) { break; }
		
	}
	printf("%d", sum);
}
