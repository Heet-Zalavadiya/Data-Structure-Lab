#include <stdio.h>

int main()
{
    int num = 7;
    int flag = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("%d number is not prime ", num);
    }
    else
    {
        printf("%d number is prime", num);
    }
}