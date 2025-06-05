#include <stdio.h>

int main()
{
    int start = 10;
    int end = 20;
    int flag = 0;
    for (int i = start + 1; i < end; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("%d number is not prime\n", i);
        }
        else
        {
            printf("%d number is prime\n", i);
        }
    }

    return 0;
}