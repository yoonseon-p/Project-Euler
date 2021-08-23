#include<stdio.h>

int main()
{
	int Result = 0;
	char Num[1000] = { 0, };
	Num[0] = 2;
	for (int A = 1; A <= 999; A++) {
		for (int N = 0; N <= 999; N++) {
			if (Num[N] != 0) {
				Num[N] *= 2; 
			}
		}
		for (int C = 0; C <= 999; C++) {
			if (Num[C] >= 10) {
				Num[C + 1]++;
				Num[C] = Num[C] % 10;
			}
		}
	}
	for (int B = 0; B <= 999; B++) {
		Result += Num[B];
	}
	printf("결과값은 %d%입니다.\n", Result);
}
