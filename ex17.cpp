#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


class no_17
{
public:
      int funtion();
};

int no_17::funtion()
{
	int sum = 0;
	int second;
	string _hundred = "hundred";
	string _and = "and";
	string _oneThousand = "onethousand";
	string alphabet_1[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
	string alphabet_2[] = {"", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

	for(int i = 1; i < 100; i++){           
		if(i < 21){
			sum += alphabet_1[i].size();
		}
		if(i > 20 && i < 100){
			if(i / 10 == 2){
				sum += alphabet_1[20].size();
				sum += alphabet_1[i % 10].size();
			}
			if(i / 10 > 2){
				sum += alphabet_2[(i / 10) - 2].size();
				sum += alphabet_1[i % 10].size();
			}
		}
	}

	for(int i = 1; i < 10; i++){                   // 100~1000
		for(int j = 100; j < 200; j++){
			second = j - 100;
			if(second < 21){
				sum += alphabet_1[i].size() + _hundred.length();
				if(alphabet_1[second].size() != 0)
					sum += _and.length();
				sum += alphabet_1[second].size();
			}
			if(second > 20){
				sum += alphabet_1[i].size() + _hundred.length();
				if(second / 10 == 2){
					sum += _and.length();
					sum += alphabet_1[20].size();
					sum += alphabet_1[second % 10].size();
				}
				if(second / 10 > 2){
					sum += _and.length();
					sum += alphabet_2[(second / 10) - 2].size();
					sum += alphabet_1[second % 10].size();
				}
			}
		}
	}

	return sum+_oneThousand.length();
}

int main()
{
    no_17 n17;
    cout << "result : " << n17.funtion() << endl;
    return 0;
}
