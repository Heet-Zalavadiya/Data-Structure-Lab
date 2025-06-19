#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += *(arr + i);
    }
    printf("sum : %d",sum);

    return 0;
}