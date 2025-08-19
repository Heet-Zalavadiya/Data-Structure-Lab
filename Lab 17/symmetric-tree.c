#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};

// function to create new bst node
struct Node *newNode(int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// function to insert a new node with given key
struct Node *insert(struct Node *node, int key)
{
    if (node == NULL)
        return newNode(key);

    if (node->key == key)
        return node;

    // insert at right
    if (node->key < key)
        node->right = insert(node->right, key);
    else
        node->left = insert(node->left, key);

    return node;
}

int isSymmetric(struct Node *root)
{
    if (root == NULL)
        return 1;
    return isMirror(root->left, root->right);
}

int isMirror(struct Node *p, struct Node *q)
{
    if (p == NULL || q == NULL)
    {
        return (p == q);
    }

    return (p->key == q->key && isMirror(p->left, q->right) && isMirror(p->right, q->left));
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int isSym = isSymmetric(root);
    if (!isSym)
    {
        printf("BST is not symmetric");
    }
    else
    {
        printf("BST is symmetric");
    }

    return 0;
}
