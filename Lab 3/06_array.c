#include <stdio.h>

int main()
{
    int arr[] = {10, 9, 8, 7, 1, 2, 5, 6, 14, 5};
    int n, m;
    int index = 0;
    printf("Enter value of index 1 : ");
    scanf("%d", &n);
    printf("Enter value fo index 2 : ");
    scanf("%d", &m);
    for (int i = 0; i < 10; i++)
    {
        if (n == arr[i])
        {
            printf("Number which have been replace is at index %d\n ", i);
            index = i;
            break;
        }
        }
    arr[index] = m;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}