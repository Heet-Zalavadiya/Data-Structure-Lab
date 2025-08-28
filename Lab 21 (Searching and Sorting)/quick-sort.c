#include <stdio.h>

int k[10];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int lb, int ub)
{
    int flag = 1;
    if (lb < ub)
    {
        int i = lb;
        int j = ub + 1;
        int key = k[lb];
        while (flag == 1)
        {
            i++;
            while (k[i] < key)
            {
                i++;
            }
            j--;
            while (k[j] > key)
            {
                j--;
            }
            if (i < j)
            {
                swap(k[i], k[j]);
            }
            else
            {
                flag = 0;
            }
            swap(k[lb], k[j]); 
        }
    }
}

int main()
{
    return 0;
}