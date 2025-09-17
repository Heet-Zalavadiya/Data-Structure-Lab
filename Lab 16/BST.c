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

// function to find the value node in a tree
struct Node *search(struct Node *root, int key)
{
    if (root == NULL || root->key == key)
    {
        return root;
    }
    if (root->key < key)
    {
        return search(root->right, key);
    }
    return search(root->left, key);
}

// pre order traversal
void preorder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}

// in order traversal
void inorder(struct Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

// post order traversal
void postorder(struct Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->key);
}

// in order predecessor
struct Node *inOrderPredecessor(struct Node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

// delete a node
struct Node *deleteNode(struct Node *root, int key)
{
    struct Node *ipre;
    if (root == NULL)
    {
        return NULL;
    }

    // search for the node to be deleted
    if (key < root->key)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = deleteNode(root->right, key);
    }
    // deletion method when root is found
    else
    {
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        ipre = inOrderPredecessor(root);
        root->key = ipre->key;
        root->left = deleteNode(root->left, ipre->key);
    }

    return root;
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

    struct Node *found = search(root, 60);
    printf("Found %d\n", found->key);

    printf("PreOrder Traversal: ");
    preorder(root);
    printf("\n");
    printf("InOrder Traversal: ");
    inorder(root);
    printf("\n");
    printf("PostOrder Traversal: ");
    postorder(root);
    printf("\n");

    root = deleteNode(root, 80);
    root = deleteNode(root, 30);
    inorder(root);
    printf("\n");
    return 0;
}
