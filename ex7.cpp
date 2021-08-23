	
#include <stdio.h>

int main() {
	int check = 2;
	int div = 2;
	int last = 0;
	int num = 0;
	
	calc:
		if(check == div) {
			goto print;
		}
		last = check % div;
		if(last == 0) {
			check += 1;
			div = 2;
			goto calc;
		}
		div += 1;
		goto calc;
		
	print:
		num++;
		if(num==10001)
			printf("%d", check);
		check += 1;
		div = 2;
		goto calc;
	    
		return 0;
		
}
