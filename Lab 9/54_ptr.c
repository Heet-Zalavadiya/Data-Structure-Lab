#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = (char *)malloc(10 * sizeof(char));
    str = "GooG";
    char *first = str;
    char *end = str + (strlen(str) - 1) * sizeof(char);
    while (first < end)
    {
        if (*first == *end)
        {
            first++;
            end--;
        }
        else
        {
            printf("String is not Palidrom");
            return 0;
        }
    }
    printf("String is plalidrom");

    return 0;
}