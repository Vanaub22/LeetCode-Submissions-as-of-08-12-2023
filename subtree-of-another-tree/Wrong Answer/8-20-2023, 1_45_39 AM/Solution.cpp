// https://leetcode.com/problems/subtree-of-another-tree

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
    bool checkSameTree(TreeNode* root_a, TreeNode* root_b){
        if(!root_a && !root_b) return true;
        if(!root_a || !root_b) return false;
        if(root_a->val!=root_b->val) return false;
        return checkSameTree(root_a->left,root_b->left) && checkSameTree(root_a->right,root_b->right); 
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(checkSameTree(root,subRoot)) return true;
        return checkSameTree(root->left,subRoot) || checkSameTree(root->right,subRoot);
    }
};