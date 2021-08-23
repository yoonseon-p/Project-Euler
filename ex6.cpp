	
#include<stdio.h>

int main() {
	int sum1=0;
	int sum2=0;
	
	for(int i=0; i<101; i++) {
		sum1 += i*i;
	}
	printf("%d\n", sum1);
	for(int i=0; i<101; i++) {
		sum2 += i;
	}
	sum2=sum2*sum2;
	int num=sum2-sum1;
	printf("%d", num);
}
