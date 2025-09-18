// #include <stdio.h>
// #include <stdlib.h>

// int n;      // size
// int *q;     // queue array
// int f = -1; // front
// int r = -1; // rear

// void cqinsert(int y)
// {
//     if (r == n)
//     {
//         r = 0;
//     }
//     else
//     {
//         r = r + 1;
//     }

//     if (f == r)
//     {
//         printf("Overflow");
//         return;
//     }

//     q[r] = y;

//     if (f == -1)
//     {
//         f = 0;
//     }
//     return;
// }

// int cqdelete()
// {
//     if (f == -1)
//     {
//         printf("Underflow");
//         return 0;
//     }
//     int y = q[f];

//     if (f == r)
//     {
//         f = r = 0;
//         return y;
//     }

//     if (f == n)
//     {
//         f = 0;
//     }
//     else
//     {
//         f = f + 1;
//     }
//     return y;
// }



// int main()
// {
//     q = (int *)malloc(n * sizeof(int));
//     return 0;
// }

#include <stdio.h>
int f = -1;
int r = -1;
int n = 5;
int q[5];

void enqueue(int);
int dequeue();
void display();

int main()
{
    int choice, val, ans;
    while (1)
    {
        printf("\n1 To Enqueue\n2 To Dequeue\n3 To Display\n4 To Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Number : ");
            scanf("%d", &val);
            enqueue(val);
            break;
        case 2:
            ans = dequeue();
            if (ans != -1)
                printf("Deleted Element : %d\n", ans);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting\n");
            return 0;
        default:
            printf("Enter Valid Choice\n");
        }
    }
    return 0;
}

void enqueue(int y)
{
    if ((f == 0 && r == n - 1) || (r + 1) % n == f)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (f == -1) // first element
    {
        f = r = 0;
    }
    else
    {
        r = (r + 1) % n;
    }

    q[r] = y;
}

int dequeue()
{
    if (f == -1)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int y = q[f];
    if (f == r)
    {
        f = r = -1; // queue empty
    }
    else
    {
        f = (f + 1) % n;
    }
    return y;
}

void display()
{
    if (f == -1)
    {
        printf("Queue Is Empty\n");
        return;
    }

    int i = f;
    printf("-----Displaying Circular Queue-----\n");
    do
    {
        printf("%d --> ", q[i]);
        i = (i + 1) % n;
    } while (i != (r + 1) % n);

    printf("NULL\n");
}
