#include <stdio.h>

int main()
{
    int n;
    float avg;
    int sum = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element in array at index [%d] : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("%f ", avg);

    return 0;
}