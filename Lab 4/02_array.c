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

int deletion(int *arr, int index, int n)
{
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    return arr[index];
}
int main()
{
    int n = 7;
    int arr[100] = {1,5,6,10,8,90,11};
    int index = 2;
    int result = deletion(arr, index, n);
    printf("%d\n",result);
    n = n-1;
    display(arr, n);
    
    return 0;
}