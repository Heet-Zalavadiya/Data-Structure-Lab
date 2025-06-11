#include <stdio.h>

void main()
{
    int arr[] = {10, 9, 8, 7, 1, 2, 5, 6, 14, 5};
    int duplicate = arr[0];
    int flag = 0;
    int index = 0;
    for (int j = 0; j < 10; j++)
    {
        duplicate = arr[j];
        for (int i = j; i < 10; i++)
        {
            if (duplicate == arr[i])
            {
                flag = 1;
                index = i;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Duplicate found at index %d value : %d", index, duplicate);
    }
    else
    {
        printf("No duplicate of value : %d", duplicate);
    }
}