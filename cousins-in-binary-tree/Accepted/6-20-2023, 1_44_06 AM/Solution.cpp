// https://leetcode.com/problems/cousins-in-binary-tree

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
    void findParentandDepth(unordered_map<int,pair<int,int>>& mp, TreeNode* root, int depth, int parent){
        if(!root)
        return;
        mp[root->val]={parent,depth};
        findParentandDepth(mp,root->left,depth+1,root->val);
        findParentandDepth(mp,root->right,depth+1,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,pair<int,int>> mp;
        findParentandDepth(mp,root,0,-1);
        return(mp[x].first==mp[y].first?false:mp[x].second==mp[y].second);
    }
};