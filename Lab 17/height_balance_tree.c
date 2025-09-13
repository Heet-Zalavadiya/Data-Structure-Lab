#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int isBalance(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 1;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return abs(leftHeight - rightHeight) <= 1 && isBalance(root->left) && isBalance(root->right);
}

int height(struct TreeNode *root) 
{
   if (root == NULL)
   {
     return 0;
   }

   return 1 + max(height(root->left), height(root->right));
   
}

int main()
{
    return 0;
}