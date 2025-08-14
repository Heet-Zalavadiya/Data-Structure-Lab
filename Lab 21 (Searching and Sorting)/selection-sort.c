#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *a, int n) // O(n ^2)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        int min = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&a[i], &a[min]);
        }
    }
}

void display(int *a, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {20, 30, 40, 50, 88, 44, 66, 22, 99};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n);
    display(a, n);
    return 0;
}