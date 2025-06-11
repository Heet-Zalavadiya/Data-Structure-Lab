#include <stdio.h>

int main()
{
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     int value = 1;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", value);
    //         value = value * (i - j) / (j + 1);
    //     }
    //     printf("\n");
    // }

    int n = 5;
    int pascal[5][5] = {0};

    // Build Pascal's Triangle
    for (int i = 0; i < n; i++)
    {
        pascal[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", pascal[i][j]);
        printf("\n");
    }

    return 0;
}