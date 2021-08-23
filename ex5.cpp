	
#include<stdio.h>

int main()
{
	int i = 20;
	int j = 21;
	int sol = 0;
	while(1)
	{
		if (j % 20 == 0 && j % 19 == 0 && j % 18 == 0 && j % 17 == 0 && j % 16 == 0 && j % 15 == 0 && j % 14 == 0 && j % 13 == 0 && j % 12 == 0 && j % 11 == 0)
		{
			sol = j;
			printf(" 정답은 %d 입니다.", sol);
			break;
		}
		j++;
	}
	return 0;
}
