#include <stdio.h>

int main()
{
    int num = 5;
    for (int i = num - 1; i >= 0; i--)
    {
        for (int j = 0; j <= num - i - 1; j++)
        {
            printf(" ");
        }
        for (int m = 0; m <= i; m++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}