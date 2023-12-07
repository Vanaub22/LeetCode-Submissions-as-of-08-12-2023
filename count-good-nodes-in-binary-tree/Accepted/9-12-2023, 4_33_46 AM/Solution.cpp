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
        return countGoodNodes(root,maxNode);
    }
    int countGoodNodes(TreeNode* root, int maxNode){
        if(!root) return 0;
        if(root->val>=maxNode){
            maxNode=root->val;
            return 1+countGoodNodes(root->left,maxNode)+countGoodNodes(root->right,maxNode);
        }
        else return countGoodNodes(root->left,maxNode)+countGoodNodes(root->right,maxNode);
    }
};