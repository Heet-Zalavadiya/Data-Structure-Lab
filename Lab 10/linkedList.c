#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertFirst() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = first;
    first = newNode; 
}

void insertLast() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if (first == NULL) {
        first = newNode;
        return;
    }
    struct node *save = first;
    while (save->link != NULL) {
        save = save->link;
    }
    save->link = newNode;
}

void deleteFirst() {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *deleteNode = first;
    first = first->link;
    free(deleteNode);
}

void deleteLast() {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (first->link == NULL) {
        free(first);
        first = NULL;
        return;
    }
    struct node *p = first;
    while (p->link->link != NULL) {
        p = p->link;
    }
    free(p->link);
    p->link = NULL;
}

void deleteIndex(int index) {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (index == 0) {
        deleteFirst();
        return;
    }
    struct node *p = first;
    for (int i = 0; i < index - 1 && p->link != NULL; i++) {
        p = p->link;
    }
    if (p->link == NULL) {
        printf("Invalid index.\n");
        return;
    }
    struct node *next = p->link;
    p->link = next->link;
    free(next);
}

void display() {
    struct node *save = first;
    while (save != NULL) {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}

void showMenu() {
    printf("1. Insert First\n");
    printf("2. Insert Last\n");
    printf("3. Delete First\n");
    printf("4. Delete Last\n");
    printf("5. Delete Index\n");
    printf("6. Display\n");
    printf("7. Exit\n");
}

int main() {
    // Initial list
    insertLast(10);
    insertLast(20);
    insertLast(30);

    while (1) {
        int choice;
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
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
            case 5: {
                int index;
                printf("Enter index to delete: ");
                scanf("%d", &index);
                deleteIndex(index);
                break;
            }
            case 6:
                display();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
