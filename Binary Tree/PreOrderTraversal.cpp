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

void printPreOrder(TreeNode *root)
{
    if(root == NULL)
        return;
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
int main()
{
    TreeNode *root;;
    root = newTreeNode(1);
    root->left = newTreeNode(2);
    root->right = newTreeNode(3);
    root->left->left = newTreeNode(4);
    root->left->right = newTreeNode(5);

    cout << "Pre Order Traversal of the tree: ";
    printPreOrder(root);
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
