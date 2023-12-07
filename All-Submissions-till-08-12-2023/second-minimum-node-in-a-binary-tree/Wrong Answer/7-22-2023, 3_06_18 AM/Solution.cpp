// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree

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
    int minVal,secondMin=INT_MAX;
    void dfs(TreeNode* root){
        if(!root || root->val>secondMin) return;
        if(root->val>minVal && root->val<secondMin){
            secondMin=root->val;
            return;
        }
        dfs(root->left);
        dfs(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        minVal=root->val;
        dfs(root);
        return secondMin==INT_MAX?-1:secondMin;
    }
};