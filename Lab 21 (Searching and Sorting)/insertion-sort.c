#include <stdio.h>

void inerstionSort(int *a, int n) // O(n^2)
{
    for (size_t i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{
    int a[] = {20, 30, 40, 50, 88, 44, 66, 22, 99};
    int n = sizeof(a) / sizeof(a[0]);
    inerstionSort(a, n);
    return 0;
}