// https://leetcode.com/problems/leaf-similar-trees

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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ls1,ls2;
        findLeafSequence_dfs(root1,ls1);
        findLeafSequence_dfs(root2,ls2);
        return ls1==ls2;
    }
    void findLeafSequence_dfs(TreeNode* root, vector<int>& leafSequence){
        if(!root) return;
        if(!root->left && !root->right) leafSequence.push_back(root->val);
        findLeafSequence_dfs(root->left,leafSequence);
        findLeafSequence_dfs(root->right,leafSequence);
    }
};