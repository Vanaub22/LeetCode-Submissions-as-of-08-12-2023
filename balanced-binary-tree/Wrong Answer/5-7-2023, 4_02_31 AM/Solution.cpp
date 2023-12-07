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
        return(root?1+max(findHeight(root->left),findHeight(root->right)):0);
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
        return(true);
        int leftHeight=findHeight(root->left),rightHeight=findHeight(root->right);
        if(abs(leftHeight-rightHeight)>1)
        return(false);
        return(true);
    }
};