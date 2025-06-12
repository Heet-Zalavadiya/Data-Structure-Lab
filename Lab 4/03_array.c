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

void insertSorted(int *arr, int value, int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (value < arr[i])
        {
            index = i;
            break;
        }
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
}

int main()
{
    int arr[100] = {1, 2, 5, 10, 15};
    int value = 12;
    int size = 5;
    insertSorted(arr, value, size);
    size++;
    display(arr, size);
    return 0;
}