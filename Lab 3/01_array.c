#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element in array at index [%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", i, arr[i]);
    }
    printf("]");

    return 0;
}