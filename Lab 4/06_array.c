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

int main()
{
    int a1[5] = {5, 1, 6, 2, 7};
    int a2[5] = {8, 3, 9, 4, 10};
    int b[10];

    int j = 0;
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            b[i] = a1[j++];
        }
        if (i >= 5)
        {
            b[i] = a2[k++];
        }
    }

    display(b, 10);

    return 0;
}