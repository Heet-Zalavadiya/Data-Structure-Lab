#include <stdio.h>
#include <stdbool.h>

int k[10];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int lb, int ub)
{
    bool flag = true;
    if (lb < ub)
    {
        int i = lb;
        int j = ub + 1;
        int key = k[lb];
        while (flag == true)
        {
            i++;
            while (i <= ub && k[i] < key)
            {
                i++;
            }
            j--;
            while (j >= lb && k[j] > key)
            {
                j--;
            }
            if (i < j)
            {
                swap(&k[i], &k[j]);
            }
            else
            {
                flag = false;
            }
        }
        swap(&k[lb], &k[j]);
        quicksort(lb, j - 1);
        quicksort(j + 1, ub);
    }
    return;
}

int main()
{
    int i;
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &k[i]);

    quicksort(0, 9);

    printf("Sorted array:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", k[i]);
    printf("\n");

    return 0;
}