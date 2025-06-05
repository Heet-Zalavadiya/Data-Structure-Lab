#include <stdio.h>

int main()
{
    int num;
    int m = 1;
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += m;
            m++;
        }
        m = 1;
    }
    printf(" %d ", sum);

    return 0;
}