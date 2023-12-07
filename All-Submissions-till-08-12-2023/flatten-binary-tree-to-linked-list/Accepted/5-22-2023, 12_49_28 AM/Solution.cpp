// https://leetcode.com/problems/flatten-binary-tree-to-linked-list

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
    vector<TreeNode*> traversal;
    void preorder(TreeNode* root){
        if(!root)
        return;
        traversal.push_back(root);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
        if(!root)
        return;
        preorder(root);
        int i,n=traversal.size();
        for(i=0;i<n-1;i++){
            traversal[i]->left=NULL;
            traversal[i]->right=traversal[i+1];
        }
        traversal[i]->right=NULL;
    }
};