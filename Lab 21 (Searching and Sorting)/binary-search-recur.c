#include <stdio.h>

int binarySearch(int *a, int left, int right, int target) // O(log n)
{
    int mid = (left + right) / 2;

    if (left < right)
    {
        if (target == a[mid])
        {
            return mid;
        }
        else if (target < a[mid])
        {
            return binarySearch(*a, left, mid - 1, target);
        }
        else
        {
            return binarySearch(*a, mid + 1, right, target);
        }
    }
    return -1;
}

int main()
{
    int a[] = {20, 30, 40, 50, 88, 44, 66, 22, 99};
    int n = sizeof(a) / sizeof(a[0]);
    int left = 0;
    int right = n - 1;
    int searchIdx = binarySearch(a, left, right, 50);
    return 0;
}