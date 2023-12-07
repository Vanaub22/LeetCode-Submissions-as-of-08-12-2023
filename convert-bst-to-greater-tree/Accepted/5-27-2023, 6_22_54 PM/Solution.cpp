// https://leetcode.com/problems/convert-bst-to-greater-tree

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
    int total=0;
    void inorder(TreeNode* root){
        if(!root)
        return;
        inorder(root->left);
        nodes.push_back(root);
        total+=root->val;
        inorder(root->right);
    }
    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        int curr=0,n=nodes.size();
        for(int i=0;i<n;i++){
            int t=nodes[i]->val;
            nodes[i]->val=total-curr;
            curr+=t;
        }
        return(root);
    }
};