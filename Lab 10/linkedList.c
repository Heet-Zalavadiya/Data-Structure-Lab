#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first;
struct node *second;
struct node *third;

void insertFirst()
{
    int x;
    printf("Enter value of x ");
    scanf("%d", &x);
    if (first == NULL)
    {
        printf("UnderFlow");
        return;
    }
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;
}

void insertLast()
{
    int x;
    printf("Enter value of x ");
    scanf("%d", &x);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    struct node *save = first;
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = newNode;  
}

void deleteFirst()
{
    struct node *deleteNode = first;
    first = first->link;
    free(deleteNode);
}

void deleteLast()
{
    struct node *p = first;
    struct node *next = first->link;

    while (next->link != NULL)
    {
        p = p->link;
        next = next->link;
    }

    p->link = NULL;
    free(next);
}

void deleteIndex(int index)
{
    struct node *p = first;
    struct node *next = first->link;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->link;
        next = next->link;
    }
    p->link = next->link;
    free(next);
}

void display()
{
    struct node *save = first;
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
}

void showMenu()
{
    printf("1. Insert First\n");
    printf("2. Insert Last\n");
    printf("3. Delete First\n");
    printf("4. Delete Last\n");
    printf("5. Delete Index\n");
    printf("6. Display\n");
    printf("7. Exit\n");
}

int main()
{
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // for first
    first->link = second;
    first->info = 10;

    // for second
    second->link = third;
    second->info = 20;

    // for third
    third->link = NULL;
    third->info = 30;

    while (1)
    {
        int choice;
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertFirst();
            break;
        case 2:
            insertLast();
            break;
        case 3:
            deleteFirst();
            break;
        case 4:
            deleteLast();
            break;
        case 5:
        {
            int index;
            printf("Enter index to delete: ");
            scanf("%d", &index);
            deleteIndex(index);
        }
        break;
        case 6:
        {
            display();
            printf("\n");
            break;
        }
        case 7:
            exit(0);
        default:
            printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}