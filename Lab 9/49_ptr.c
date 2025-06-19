#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    char *cptr = (char *)malloc(sizeof(char));
    float *fptr = (float *)malloc(sizeof(float));

    if (ptr && cptr && fptr)
    {
        *ptr = 10;
        *cptr = 'H';
        *fptr = 10.2;

        printf("Integer %d\n", *ptr);
        printf("Charcter %c\n", *cptr);
        printf("Float :%0.2f\n", *fptr);
    }

    return 0;
}