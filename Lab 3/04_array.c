#include <stdio.h>

int main()
{
    int arr[] = {10, 9, 8, 7, 1, 2, 5, 6, 14};
    int small = arr[0];
    int big = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
        if (big < arr[i])
        {
            big = arr[i];
        }
    }

    printf("small : %d , big : %d ", small, big);

    return 0;
}