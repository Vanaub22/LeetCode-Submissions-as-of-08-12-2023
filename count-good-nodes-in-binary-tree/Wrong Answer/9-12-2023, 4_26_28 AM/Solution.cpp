// https://leetcode.com/problems/count-good-nodes-in-binary-tree

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
    int goodNodes(TreeNode* root) {
        int goodNodeCount=0,maxNode=INT_MIN;
        countGoodNodes(root,maxNode,goodNodeCount);
        return goodNodeCount;
    }
    void countGoodNodes(TreeNode* root, int& maxNode,int& goodNodeCount){
        if(!root) return;
        if(root->val>=maxNode){
            goodNodeCount++;
            maxNode=root->val;
        }
        countGoodNodes(root->left,maxNode,goodNodeCount);
        countGoodNodes(root->right,maxNode,goodNodeCount);
    }
};