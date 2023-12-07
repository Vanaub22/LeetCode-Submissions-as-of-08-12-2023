// https://leetcode.com/problems/balanced-binary-tree

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
    int findHeight(TreeNode* root){
        if(!root)
        return(0);
        int leftHeight=findHeight(root->left),rightHeight=findHeight(root->right);
        if(abs(leftHeight-rightHeight)>1)
        return(-1);
        if(leftHeight==-1 || rightHeight==-1)
        return(-1);
        return(1+max(leftHeight,rightHeight));
    }
    bool isBalanced(TreeNode* root) {
        return(findHeight(root)!=-1);
    }
};