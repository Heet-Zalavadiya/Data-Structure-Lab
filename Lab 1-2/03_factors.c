#include <stdio.h>

int main()
{
    int number = 6;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("%d is factor of %d\n", i, number);
        }
    }
    return 0;
}