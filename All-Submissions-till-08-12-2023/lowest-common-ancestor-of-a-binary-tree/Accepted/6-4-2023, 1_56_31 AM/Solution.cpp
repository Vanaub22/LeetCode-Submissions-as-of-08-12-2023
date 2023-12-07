// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q)
        return(root);
        TreeNode* leftSide=lowestCommonAncestor(root->left,p,q),*rightSide=lowestCommonAncestor(root->right,p,q);
        if(!leftSide || !rightSide)
        return(rightSide?rightSide:leftSide);
        return(root);
    }
};