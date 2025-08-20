#include <stdio.h>
#include <stdlib.h>

int n;      // size
int *q;     // queue array
int f = -1; // front
int r = -1; // rear

void dqinsert_front(int y)
{
    if (f == 0)
    {
        printf("Overflow");
        return;
    }

    if (f == -1)
        f = r = 0;
    else
        f = f - 1;

    q[f] = y;
    return;
}

void dqinsert_rear(int y)
{
    if (r >= n - 1)
    {
        printf("Queue Overflow");
        return;
    }

    r = r + 1;
    q[r] = y;

    if (f == -1)
    {
        f = 0;
    }
}

int dqdelete_rear()
{
    if (q == -1)
    {
        printf("Underflow");
        return 0;
    }
    int y = q[r];

    if (r == f)
        r = f = -1;
    else
        r = r - 1;

    return y;
}

int dqdelete_front()
{
    if (f == -1)
    {
        printf("Queue Underflow");
        return 0;
    }
    int y = q[f];
    if (f == r)
    {
        f = r = 0;
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