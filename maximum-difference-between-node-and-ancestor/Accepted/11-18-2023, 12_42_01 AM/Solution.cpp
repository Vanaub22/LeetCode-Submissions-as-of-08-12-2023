// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor

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
    int findMaxMinDiff(TreeNode* root, int maxVal, int minVal) {
        if(!root) return maxVal-minVal;
        maxVal=max(maxVal,root->val);
        minVal=min(minVal,root->val);
        return max(findMaxMinDiff(root->left,maxVal,minVal),findMaxMinDiff(root->right,maxVal,minVal));
    }
    int maxAncestorDiff(TreeNode* root) {
        return findMaxMinDiff(root,root->val,root->val);
    }
};