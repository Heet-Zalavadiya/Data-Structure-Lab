#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b)
    {
        if (a > c)
        {
            printf("a is largest number %d\n", a);
        }
        else
        {
            printf("c is largest number %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is largest number %d\n", b);
        }
        else
        {
            printf("c is largest number %d\n", c);
        }
    }
}