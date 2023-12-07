// https://leetcode.com/problems/range-sum-of-bst

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
    int rangeSum=0;
    void recSumTree(TreeNode* root,int low,int high){
        if(!root)
        return;
        if(root->val>=low && root->val<=high)
        rangeSum+=root->val;
        recSumTree(root->left,low,high);
        recSumTree(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root,int low,int high) {
        recSumTree(root,low,high);
        return(rangeSum);
    }
};