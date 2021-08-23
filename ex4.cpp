#include <stdio.h>
#include <stdlib.h>

int main()
{
    int biggestPalindrome = 0;
    int num1, num2;
    char temp[6];
    
    for (int i = 999; i > 99; i--)
    {
        for (int j = i; j > 99; j--)
        {
            int number = i * j;
            if (number > biggestPalindrome && number > 99999)
            {               
                sprintf(temp, "%d", number);
                if (temp[0] == temp[5] && temp[1] == temp[4] && temp[2] == temp[3])
                {            
                    biggestPalindrome = number;
                    num1 = i;
                    num2 = j;
                    break;
                }
            }
            else if (number > biggestPalindrome && number < 100000)
            {
                sprintf(temp, "%d", number);
                if (temp[0] == temp[4] && temp[1] == temp[3])
                {
                    biggestPalindrome = number;
                    num1 = i;
                    num2 = j;
                    break;
                }
            }
        }
    }

    printf("%d * %d = %d", num1, num2, biggestPalindrome);
    return 0;
}
