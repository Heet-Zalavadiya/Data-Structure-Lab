#include <stdio.h>

int main()
{
    int num = 5;
    int m = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (m == 0)
            {
                m = 1;
            }
            else if (m == 1)
            {
                m = 0;
            }
            printf("%d ", m);
        }
        printf("\n");
    }

    return 0;
}