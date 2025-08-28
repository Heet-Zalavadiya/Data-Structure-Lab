#include <stdio.h>

int a[10];

void mergesort(int low, int high)
{
    if (low < high)
    {
        int mid = floor((low + high) / 2);
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merge(low, mid, high);
    }
}

void merge(int low, int mid, int high)
{
    int h, i, j, k;
    int b[10];
    int h = low;
    int i = low;
    int j = mid + 1;

    while (h <= mid && j <= high)
    {
        if (a[h] <= a[j])
        {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > mid)
    {
        for (size_t k = j; k < high; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for (size_t k = h; k < mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for (size_t k = low; k < high; k++)
    {
        a[k] = b[k];
    }
}

int main()
{
    int high = 9;
    int low = 0;
    return 0;
}