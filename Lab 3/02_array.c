#include <stdio.h>

int main()
{
    int m;
    int n;
    int sum = 0;
    printf("Enter value of m : \n");
    scanf("%d", &m);
    printf("Enter value of n : \n");
    scanf("%d", &n);
    int arr[n - m + 1];
    for (int i = m; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = m; i <= n; i++)
    {
        sum += arr[i];
    }
    printf("%d ", sum);

    return 0;
}