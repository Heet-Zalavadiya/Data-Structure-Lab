#include <stdio.h>

int main()
{
    int num = 5;
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= num; j++)
        {
            if (i == 0 || i == num || j == 0 || j == num)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}