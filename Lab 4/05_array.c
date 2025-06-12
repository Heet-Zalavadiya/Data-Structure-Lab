#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int deleteDuplicate(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        int index = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
        }
    }
    return size;
}

int main()
{
    int arr[100] = {12, 12, 123, 56, 65, 65, 78, 78, 92, 45};
    int size = 10;
    size = deleteDuplicate(arr, size);
    display(arr, size);
    return 0;
}