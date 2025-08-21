#include <stdio.h>
#define N 10 // size

struct PriorityQueue // Priority Queue
{
    int data;
    int priority;
};

struct PriorityQueue q[N];
int size = 0;

void enqueue(int val, int p)
{
    if (size >= N)
    {
        printf("Queue Overflow\n");
        return;
    }

    q[size].data = val;
    q[size].priority = p;
    size++;
}

int dequeue()
{
    if (size == 0)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int i, pos = 0;
    for (i = 1; i < size; i++)
    {
        if (q[i].priority < q[pos].priority)
        {
            pos = i;
        }
        else if (q[i].priority == q[pos].priority && q[i].data < q[pos].data)
        {
            pos = i;
        }
    }

    int val = q[pos].data;

    for ( i = pos; i < size - 1; i++)
    {
        q[i] = q[i + 1];
    }
    size--;

    return val;
}

void display() {
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("Priority Queue: \n");
    for (int i = 0; i < size; i++) {
        printf("Data = %d, Priority = %d\n", q[i].data, q[i].priority);
    }
}

int main() {
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);
    enqueue(13, 1);

    display();

    printf("\nDequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());

    display();

    return 0;
}