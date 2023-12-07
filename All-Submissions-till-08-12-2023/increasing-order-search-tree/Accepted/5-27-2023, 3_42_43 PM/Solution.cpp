// https://leetcode.com/problems/increasing-order-search-tree

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
    vector<TreeNode*> nodes;
    void inorder(TreeNode* root){
        if(!root)
        return;
        inorder(root->left);
        nodes.push_back(root);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        int n=nodes.size();
        nodes[n-1]->left=nodes[n-1]->right=NULL;
        for(int i=0;i<nodes.size()-1;i++){
            nodes[i]->left=NULL;
            nodes[i]->right=nodes[i+1];
        }
        return(nodes[0]);
    }
};