// https://leetcode.com/problems/sum-of-left-leaves

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
    void dfs_leftSum(TreeNode* root,int& sum){
        if(!root)
        return;
        if(root->left)
        sum+=root->left->val;
        dfs_leftSum(root->left,sum);
        dfs_leftSum(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        dfs_leftSum(root,sum);
        return(sum);
    }
};