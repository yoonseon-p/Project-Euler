#include <stdio.h>

#define LIMIT 100

int sumC(char lpstr[LIMIT][51], int n){
	int sum = 0;
	for(int i = 0; i < LIMIT; i++){
		sum += lpstr[i][n] - '0';
	}

	return sum;
}

int main(){

	int c = 0;
	int IU[50] = {0,};

	char lpstrArr[LIMIT][51] = {"371..50",...,"535...690"};

	for(int i = 49; i >= 0; i--){
		c += sumC(lpstrArr, i);

		IU[i] = c % 10;
		c /= 10;
	}

	printf("%d", c);
	for(int i = 0; i < 50; i++){
		printf("%d", IU[i]);
	}

	printf("\n");

