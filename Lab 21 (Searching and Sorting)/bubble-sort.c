#include <stdio.h>

void bubbleSort(int *a, int n) // O(n^2)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (size_t j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                size_t temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
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
    bubbleSort(a, n);
    display(a, n);
    return 0;
}