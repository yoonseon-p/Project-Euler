#include <iostream>
using namespace std;
int main(){
	int sum, ans = 0;
	int fact[10] = { 1, };
	for (int i = 1; i < 10; i++) fact[i] = fact[i - 1] * i;
	for (int i = 10; i < 420000; i++) {
		int n = i * 10;
		sum = 0;
		while (n /= 10) sum += fact[n % 10];
		if (sum == i) ans += i;
	}
	cout << ans;
}
