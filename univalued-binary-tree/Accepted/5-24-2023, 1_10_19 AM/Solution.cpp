// https://leetcode.com/problems/univalued-binary-tree

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
    bool isUnivalTree(TreeNode* root) {
        if(!root || (!root->left && !root->right))
        return(true);
        bool rightCheck=true,leftCheck=true;
        if(root->right)
        rightCheck=(root->val==root->right->val);
        if(root->left)
        leftCheck=(root->val==root->left->val);
        return(rightCheck && leftCheck && isUnivalTree(root->left) && isUnivalTree(root->right));
        
    }
};