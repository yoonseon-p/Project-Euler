#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    long long num = 2000000;
    long long sum = 0;

    vector<long long> era;

    for (long long i = 1; i <= num; i++)
    {
        era.push_back(i);
    }

    era[0] = 0; 

    for (long long j = 1; j < num; j++)
    {
        if (era[j] != 0)
        {
            for (long long k = (j + 1) * 2; k <= num; k += (j + 1))
            {
                era[k - 1] = 0;
            }
            sum += era[j];
        }
    }

    cout << "Answer is : " << sum << endl;
    
    return 0;
}
