#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int num, originalNum, remainder, n = 0;
    int result = 0;
    for (int i = 1; i < 1000; i++)
    {
        result = 0;
        n = 0; // Reset n for each number
        originalNum = i;
        while (originalNum != 0)
        {
            originalNum = originalNum / 10;
            ++n;
        }

        originalNum = i;

        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            int temp = power(remainder, n);
            result = result + temp;
            originalNum = originalNum / 10;
        }
        if (result == i)
        {
            printf("number is armstrong : %d\n", i);
        }
        else
        {
            // printf("number is not armstrong : %d", i);
        }
    }
}