// https://leetcode.com/problems/print-binary-tree

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
        return root?1+max(findHeight(root->left),findHeight(root->right)):0;
    }
    void dfs_solve(TreeNode* root, int row, int col, int height, vector<vector<string>>& res){
        if(!root) return;
        res[row][col]=to_string(root->val);
        dfs_solve(root->left,row+1,col-pow(2,height-row-2),height,res);
        dfs_solve(root->right,row+1,col+pow(2,height-row-2),height,res);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int h=findHeight(root),n=pow(2,h)-1;
        vector<vector<string>> res(h,vector<string>(n,""));
        dfs_solve(root,0,(n-1)/2,h,res);
        return res;
    }
};