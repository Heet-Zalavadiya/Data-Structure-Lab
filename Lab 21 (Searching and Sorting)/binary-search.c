#include <stdio.h>

int binarySearch(int *a, int n, int target) // O(log n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
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
    int a[] = {20, 22, 30, 40, 44, 50, 66, 88, 99}; // Sorted array
    int n = sizeof(a) / sizeof(a[0]);
    int searchIdx = binarySearch(a, n, 50);
    if (searchIdx != -1)
        printf("Element found at index %d\n", searchIdx);
    else
        printf("Element not found\n");
    return 0;
}