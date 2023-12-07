// https://leetcode.com/problems/find-mode-in-binary-search-tree

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
    void dfs(TreeNode* root,unordered_map<int,int>& umap){
        if(!root)
        return;
        umap[root->val]++;
        dfs(root->left,umap);
        dfs(root->right,umap);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> umap;
        dfs(root,umap);
        vector<int> modes;
        int max_freq=INT_MIN;
        for(auto it:umap)
        if(it.second>max_freq){
            max_freq=it.second;
            modes.clear();
            modes.push_back(it.first);
        }
        else if(it.second==max_freq)
        modes.push_back(it.second);
        return(modes);
    }
};