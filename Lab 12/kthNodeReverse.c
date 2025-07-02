#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->info);
        ptr = ptr->link;
    }
}

struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *fifth;

void swap(int x)
{

    struct Node *save = head;
    struct Node *p2 = head;
    struct Node *p1 = head;
    int count = 0;
    while (save != NULL)
    {
        save = save->link;
        count++;
    }
    for (int i = 0; i < count - x; i++)
    {
        p2 = p2->link;
    }
    for (int i = 0; i < x - 1; i++)
    {
       p1 = p1->link;
    }
    int temp = p1->info;
    p1->info = p2->info;
    p2->info = temp;
    
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->info = 7;
    head->link = second;

    second->info = 11;
    second->link = third;

    third->info = 66;
    third->link = fourth;

    fourth->info = 13;
    fourth->link = fifth;

    fifth->info = 14;
    fifth->link = NULL;

    swap(11);

    return 0;
}