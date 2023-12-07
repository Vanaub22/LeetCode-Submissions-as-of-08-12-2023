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
    void traversal(TreeNode* root, unordered_map<int,int>& freq) {
        if(!root) return;
        freq[root->val]++;
        traversal(root->left,freq);
        traversal(root->right,freq);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> freq;
        traversal(root,freq);
        vector<int> modes;
        int maxFreq=-1;
        for(auto it:freq) {
            if(it.second>=maxFreq) {
                if(it.second>maxFreq) {
                    modes.clear();
                    maxFreq=it.second;
                }
                modes.emplace_back(it.first);
            }
        }
        return modes;
    }
};