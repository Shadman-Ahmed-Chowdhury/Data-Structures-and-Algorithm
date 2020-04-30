
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max_sum;
    int pathSum(TreeNode* root) {
        if(root == NULL)
            return 0;
        int l = pathSum(root->left);
        int r = pathSum(root->right);

        int max_single = max(max(l, r) + root->val, root->val);
        int max_top = max(max_single, l + r + root->val);
        max_sum = max(max_sum, max_top);
        return max_single;
    }

    int maxPathSum(TreeNode* root) {
        max_sum = INT_MIN;
        pathSum(root);
        return max_sum;
    }
};
