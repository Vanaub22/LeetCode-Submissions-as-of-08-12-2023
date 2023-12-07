// https://leetcode.com/problems/recover-binary-search-tree

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
    void inorder(TreeNode* root){
        if(!root)
        return;
        inorder(root->left);
        traversal.push_back(root);
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        int f=-1,b=-1;
        for(int i=0;i<traversal.size()-1;i++){
            if(traversal[i]->val>traversal[i+1]->val)
            if(f==-1)
            f=i;
            else
            b=i;
        }
        if(f==-1 && b!=-1)
        swap(traversal[b]->val,traversal[b+1]->val);
        if(f!=-1 && b==-1)
        swap(traversal[f]->val,traversal[f+1]->val);
        if(f!=-1 && b!=-1)
        swap(traversal[f]->val,traversal[b+1]->val);
    }
};