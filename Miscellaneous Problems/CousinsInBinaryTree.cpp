//Check if two nodes in a binary tree are cousins or not.

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
map <int, int> level, parent;
void printPreOrder(TreeNode *root)
{
    if(root == NULL)
        return;

    //cout << root->data << " ";
    if(root->left != NULL)
        level[root->left->data] = level[root->data] + 1, parent[root->left->data] = root->data;
    if(root->right != NULL)
        level[root->right->data] = level[root->data] + 1, parent[root->right->data] = root->data;

    printPreOrder(root->left);
    printPreOrder(root->right);
}

bool isCousins(TreeNode* root, int x, int y) {
    printPreOrder(root);
    if(level[x] == level[y] && parent[x] != parent[y])
        return true;
    return false;
}
int main()
{
    TreeNode *root;
    root = newTreeNode(1);
    root->left = newTreeNode(2);
    root->right = newTreeNode(3);
    root->left->left = newTreeNode(4);
    root->right->right = newTreeNode(5);

    if(isCousins(root, 4, 5))
        cout << "True" << endl;
    else
        cout << "False" << endl;



    return 0;
}

/**
Given Tree

      1
     / \
    2   3
   /     \
  4       5

Output:
True;

**/

