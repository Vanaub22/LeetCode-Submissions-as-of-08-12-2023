// https://leetcode.com/problems/binary-tree-preorder-traversal

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
    //using the recursive approach
    vector<int> traversal;
    void preorder(TreeNode* root){
        if(root==NULL)
        return;
        else{
            traversal.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        return(traversal);
        else{
            preorder(root);
            return(traversal);
        }
    }
};