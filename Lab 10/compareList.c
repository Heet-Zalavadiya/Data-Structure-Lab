#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *first1;
struct node *first2;

int compare()
{
    struct node *p = first1;
    struct node *q = first2;
    while (p->data == q->data && p->next != NULL && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (p->next == NULL && q->next == NULL)
    {
        return 1;
    }
    return 0;
}

int main()
{
    first1 = (struct node *)malloc(sizeof(struct node));
    struct node *second1;
    struct node *third1;
    second1 = (struct node *)malloc(sizeof(struct node));
    third1 = (struct node *)malloc(sizeof(struct node));

    // for first1
    first1->next = second1;
    first1->data = 10;

    // for second1
    second1->next = third1;
    second1->data = 20;

    // for third1
    third1->next = NULL;
    third1->data = 30;

    first2 = (struct node *)malloc(sizeof(struct node));

    struct node *second2 = (struct node *)malloc(sizeof(struct node));
    struct node *third2 = (struct node *)malloc(sizeof(struct node));
    // for first2
    first2->next = second2;
    first2->data = 10;

    // for second2
    second2->next = third2;
    second2->data = 20;

    // for third2
    third2->next = NULL;
    third2->data = 30;

    int result = compare();
    if (result == 1)
    {
        printf("Both are same");
    }
    else
    {
        printf("Not same");
    }

    return 0;
}