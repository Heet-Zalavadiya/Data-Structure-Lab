#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }
    int max = *arr;
    for (int i = 0; i < 5; i++)
    {
        if (max < *(arr + i))
        {
            max = *(arr + i);
        }
    }
    printf("max : %d",max);
    
    return 0;
}