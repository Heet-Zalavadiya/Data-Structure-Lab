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

void insert(int *arr, int index, int value, int size)
{

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
}

int main()
{
    int index = 1;
    int arr[100] = {1, 5, 10, 15, 80};
    int value = 11;
    int size = 5;
    insert(arr, index, value, size);
    size++;
    display(arr, size);
    return 0;
}