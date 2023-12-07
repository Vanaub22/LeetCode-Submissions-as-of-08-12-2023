// https://leetcode.com/problems/binary-tree-right-side-view

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
    void right_dfs(TreeNode* root,vector<int>& rightView){
        if(!root)
        return;
        rightView.push_back(root->val);
        if(root->right)
        right_dfs(root->right,rightView);
        else
        right_dfs(root->left,rightView);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightView;
        right_dfs(root,rightView);
        return(rightView);
    }
};