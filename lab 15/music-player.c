#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char music[100];
    struct Node *next;
    struct Node *prev;
};

struct Node *l;
struct Node *r;
struct Node *curr;


void playSong(char *filename) {
    char command[200];
    sprintf(command, "start vlc \"%s\"", filename);
    system(command);
}

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
    playSong(curr->music);  // Play the current song 
}

void deleteAtPosition()
{
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    curr = curr->next;
    display();
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


void showMenu() {
    printf("\n--- 🎵 Music Player Menu ---\n");
    printf("1. Add Song to Playlist\n");
    printf("2. Play Current Song\n");
    printf("3. Play Next Song\n");
    printf("4. Play Previous Song\n");
    printf("5. Delete Current Song\n");
    printf("6. Show Playlist\n");
    printf("0. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    char songPath[100];

    while (1) {
        showMenu();
        scanf("%d", &choice);
        getchar(); // consume newline after number

        switch (choice) {
            case 1:
                printf("Enter full path of song (.mp3): ");
                fgets(songPath, sizeof(songPath), stdin);
                songPath[strcspn(songPath, "\n")] = 0;  // remove newline
                insertEndMusic(songPath);
                break;

            case 2:
                display();
                break;

            case 3:
                playNextSong();
                break;

            case 4:
                playPreviousSong();
                break;

            case 5:
               deleteAtPosition();
                break;

            case 6:
                LinkedListTraversal();
                break;

            case 0:
                printf("Exiting Music Player. Goodbye! 🎧\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}