#include <stdio.h>
#include <stdlib.h>

int n = 3;  // size
int *q;     // queue array
int f = -1; // front
int r = -1; // rear

void enqueue(int y)
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

int dequeue()
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

void display()
{
    if (f == -1)
    {
        printf("Queue is empty\\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = f; i <= r; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int main()
{
    q = (int *)malloc(n * sizeof(int));
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d ", dequeue());
    display();
    return 0;
}
