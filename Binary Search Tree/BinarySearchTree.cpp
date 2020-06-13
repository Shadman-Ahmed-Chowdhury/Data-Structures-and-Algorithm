#include <bits/stdc++.h>

using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left, *right;

};

TreeNode *newTreeNode(int newData)
{
    TreeNode* node = new TreeNode();
    node->data = newData;
    node->left = node->right = NULL;
    return node;
}

void printInOrder(TreeNode *root)
{
    if(root == NULL)
        return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

TreeNode* insert(TreeNode* node, int key) {
    if(node == NULL)
        return newTreeNode(key);
    if(key < node -> data)
        node -> left = insert(node -> left, key);
    else if(key > node -> data)
        node -> right = insert(node -> right, key);

    return node;
}

int main()
{
    TreeNode *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout << "In Order Traversal of the tree: ";
    printInOrder(root);
    printf("\n");

    return 0;
}

/**
Given Tree

      1
     / \
    2   3
   / \
  4   5

**/

