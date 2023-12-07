// https://leetcode.com/problems/binary-tree-paths

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
    void dfs(TreeNode* root,vector<string>& paths,string path){
        if(!root)
        return;
        if(!root->left && !root->right){
            path+=to_string(root->val);
            paths.push_back(path);
            return;
        }
        else{
            path+=(to_string(root->val)+"->");
            if(root->left)
            dfs(root->left,paths,path);
            if(root->right)
            dfs(root->right,paths,path);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> paths;
       string path="";
       dfs(root,paths,path);
       return(paths);
    }
};