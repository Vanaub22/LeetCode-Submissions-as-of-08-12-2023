// https://leetcode.com/problems/minimum-absolute-difference-in-bst

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
    void dfs(int& minimum, TreeNode* root){
        if(!root || (!root->left && !root->right))
        return;
        if(!root->left && root->right)
        minimum=min(minimum,root->right->val-root->val);
        else if(root->left && !root->right)
        minimum=min(minimum,root->val-root->left->val);
        else
        minimum=min(minimum,min((root->val-root->left->val),(root->right->val-root->val)));
        dfs(minimum,root->left);
        dfs(minimum,root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        int minimum=INT_MAX;
        dfs(minimum,root);
        return(minimum);
    }
};