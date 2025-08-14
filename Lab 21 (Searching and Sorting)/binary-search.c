#include <stdio.h>

int binarySearch(int *a, int n, int target) // O(log n)
{
    int l = 0, r = n - 1;
    int mid = (l + r) / 2;

    while (l < r)
    {
        if (target == a[mid])
        {
            return mid;
        }
        else if (target < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {20, 30, 40, 50, 88, 44, 66, 22, 99};
    int n = sizeof(a) / sizeof(a[0]);
    int searchIdx = binarySearch(a, n, 50);
    return 0;
}