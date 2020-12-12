#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node *newNode(int data) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
};

bool countSingleRec(struct Node *root, int *count)
{
    if (root == NULL)
        return true;

    bool left = countSingleRec(root->left, count);
    bool right = countSingleRec(root->right, count);

    if (left == false || right == false)
        return false;

    if (root->left && root->data != root->left->data)
        return false;

    if (root->right && root->data != root->right->data)
        return false;

    *count += 1;
    return true;
}

int countSingle(struct Node *root)
{
    int count = 0;
    countSingleRec(root, &count);
    return count;
}

int main()
{
    /* Testing out tree:
              0  
            /   \  
          1      0  
                / \  
               1   0
              / \     
             1   1         */

    struct Node *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(0);
    root->right->left = newNode(1);
    root->right->right = newNode(0);
    root->right->left->left = newNode(1);
    root->right->left->right = newNode(1);

    printf("Unival count is %d.", countSingle(root));
    return 0;
}