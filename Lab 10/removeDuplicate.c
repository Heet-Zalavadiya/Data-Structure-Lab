#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *first;

void insertLast()
{
    int x;
    printf("Enter value of x ");
    scanf("%d", &x);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    struct node *save = first;
    while (save->next != NULL)
    {
        save = save->next;
    }
    save->next = newNode;
}

void removeDuplicate()
{
    struct node *p = first;
    struct node *q = first->next;
    while (q->next != NULL)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            q = q->next;
            if (q == NULL)
            {
                return;
            }
        }
        else    
        {
            p = p->next;
            q = q->next;
        }
    }
    if (p->data == q->data)
    {
        p->next = q->next;
        free(q);
    }
    
}

void display()
{
    struct node *save = first;
    while (save != NULL)
    {
        printf("%d ", save->data);
        save = save->next;
    }
}

void showMenu()
{
    printf("1. Insert Last\n");
    printf("2. Display\n");
    printf("3. RemoveDuplicate");
    printf("4. Exit\n");
}

int main()
{
    first = (struct node *)malloc(sizeof(struct node));
    first->data = 1;
    first->next = NULL;

    while (1)
    {
        int choice;
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertLast();
            break;

        case 2:
        {
            display();
            printf("\n");
            break;
        }
        case 3:
        {
            removeDuplicate();
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}