#include <stdio.h>

int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter value of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter value of b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Performing Addition of 2 matrix \n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("c[%d][%d] = %d ", i, j, c[i][j]);
        }
        printf("\n");
    }

    return 0;
}