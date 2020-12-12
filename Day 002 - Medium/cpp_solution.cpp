#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};

Node *newNode(int data) {
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

bool countSingleRec(Node *root, int &count)
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

    count++;
    return true;
}

int countSingle(Node *root)
{
    int count = 0;
    countSingleRec(root, count);
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

    Node *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(0);
    root->right->left = newNode(1);
    root->right->right = newNode(0);
    root->right->left->left = newNode(1);
    root->right->left->right = newNode(1);

    cout << "Unival count is " << countSingle(root);
    return 0;
}