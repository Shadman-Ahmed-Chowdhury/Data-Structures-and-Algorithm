/**

Return the root node of a binary search tree that matches the given preorder traversal.

(Recall that a binary search tree is a binary tree where for every node,
any descendant of node.left has a value < node.val, and any descendant of node.right has a value > node.val.
Also recall that a preorder traversal displays the value of the node first, then traverses node.left,
then traverses node.right.)



Example 1:

Input: [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]

**/

#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode* newNode(int data)
{
    TreeNode *temp = new TreeNode();

    temp->val = data;
    temp->left = temp->right = NULL;

    return temp;
}

int cnt =0 ;
TreeNode* create(vector <int>& preorder, int constraint)
{

    TreeNode* node = newNode(preorder[cnt]);
    cnt++;
    if(cnt < preorder.size() && preorder[cnt] < node->val) {
        node->left = create(preorder, node->val);
    }

    if(cnt < preorder.size() && preorder[cnt] < constraint) {
        node->right = create(preorder, constraint);
    }
    return node;
}

TreeNode* bstFromPreorder(vector<int>& preorder)
{
    if(preorder.size() < 1)
        return NULL;
    return create(preorder, INT_MAX);
}


void inOrderTraversal(TreeNode *root)
{
    if(root == NULL)
        return;

    inOrderTraversal(root->left);
    printf("%d ", root->val);
    inOrderTraversal(root->right);
}

int main()
{
    int n;
    cin >> n;
    vector<int> preorder;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        preorder.push_back(a);
    }
    TreeNode *root = bstFromPreorder(preorder);
    inOrderTraversal(root);
    return 0;
}

/**


Input:

6
8 5 1 7 10 12

Output:

1 5 7 8 10 12

**/

