#include <stdio.h>

int main()
{
    int num = 5;
    int m = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}