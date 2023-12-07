// https://leetcode.com/problems/trim-a-binary-search-tree

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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        // Base Case
        if(!root) return nullptr;
        // If value is in Range => Go both sides to check
        else if(root->val>=low && root->val<=high) {
            root->left=trimBST(root->left,low,high);
            root->right=trimBST(root->right,low,high);
            return root;
        }
        // If value is Lesser => Trim the Left Side because their values will be even smaller
        // If value is Greater => Trim the Right Side because their values will be even Greater
        return root->val<low?trimBST(root->right,low,high):trimBST(root->left,low,high);
    }
};