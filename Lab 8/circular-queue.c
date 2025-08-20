#include <stdio.h>
#include <stdlib.h>

int n;      // size
int *q;     // queue array
int f = -1; // front
int r = -1; // rear

void cqinsert(int y)
{
    if (r == n)
    {
        r = 0;
    }
    else
    {
        r = r + 1;
    }

    if (f == r)
    {
        printf("Overflow");
        return;
    }

    q[r] = y;

    if (f == -1)
    {
        f = 0;
    }
    return;
}

int cqdelete()
{
    if (f == -1)
    {
        printf("Underflow");
        return 0;
    }
    int y = q[f];

    if (f == r)
    {
        f = r = 0;
        return y;
    }

    if (f == n)
    {
        f = 0;
    }
    else
    {
        f = f + 1;
    }
    return y;
}

int main()
{
    q = (int *)malloc(n * sizeof(int));
    return 0;
}