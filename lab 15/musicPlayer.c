#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char music[20];
    struct Node *next;
    struct Node *prev;
};

struct Node *l;
struct Node *r;
struct Node *curr;

void LinkedListTraversal()
{
    struct Node *ptr = l;

    // Traverse forward (next)
    printf("Forward Traversal:\n");
    do
    {
        printf("%s\t", ptr->music);
        if (ptr->next == l)
            break;
        ptr = ptr->next;
    } while (ptr != l);

    printf("\n");

    // Traverse backward (prev)
    printf("Backward Traversal:\n");
    do
    {
        printf("%s\t", ptr->music);
        ptr = ptr->prev;
    } while (ptr != r);

    printf("\n");
}

// circular doubly linked list
void insertEndMusic(char *song)
{
    struct Node *pointNode;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->music, song);
    if (r == NULL)
    {
        newNode->prev = newNode;
        newNode->next = newNode;
        l = r = newNode;
        curr = l;
    }
    else
    {
        r->next = newNode;
        newNode->next = l;
        newNode->prev = r;
        r = newNode;
        l->prev = r;
        curr = l;
    }
}

void display()
{
    printf("Playing : %s\n", curr->music); 
}

void deleteAtPosition()
{
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    curr = curr->next;
    display();
    free(curr->prev);
}

void playNextSong()
{
    curr = curr->next;
    display();
}
void playPreviousSong()
{
    curr = curr->prev;
    display();
}


int main()
{
    l = NULL;
    r = NULL;
    curr = l;

    insertEndMusic("ram stuti");
    display();
    insertEndMusic("saraswati vandana");
    playNextSong();
    playPreviousSong();
    insertEndMusic("madhurastakam");
    insertEndMusic("hanuman chalisha");

    return 0;
}