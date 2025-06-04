#include <stdio.h>

int main()
{
    int num = 5;
    char c = 95;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", c);
            }
            else
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}