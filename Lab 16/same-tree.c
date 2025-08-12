#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct TreeNode
{
    int key;
    struct TreeNode *left;
    struct TreeNode *right;
};


bool isSameTree(struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL || q == NULL)
    {
        return (p == q);
    }

    return (p->key == q->key && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    
}


// function to create new bst node
struct TreeNode *newNode(int item)
{
    struct TreeNode *temp = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


// function to insert a new node with given key
struct TreeNode *insert(struct TreeNode *node, int key)
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


int main()
{

    struct TreeNode *p = NULL;
    p = insert(p, 3);
    insert(p, 2);
    insert(p, 4);
    insert(p, 1);

    struct TreeNode *q = NULL;
    q = insert(q, 3);
    insert(q, 2);
    insert(q, 4);
    insert(q, 1);


    bool result = isSameTree(p, q);
    printf("%d\n", result);
    return 0;
}