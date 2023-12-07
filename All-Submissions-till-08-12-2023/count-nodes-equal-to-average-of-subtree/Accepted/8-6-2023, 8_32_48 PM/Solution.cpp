// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree

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
    int findSubtreeAvg(TreeNode* root){
        return findSumOfSubtree(root)/findNodesInSubtree(root);
    }
    int findSumOfSubtree(TreeNode* root){
        if(!root) return 0;
        return root->val+findSumOfSubtree(root->left)+findSumOfSubtree(root->right);
    }
    int findNodesInSubtree(TreeNode* root){
        if(!root) return 0;
        return 1+findNodesInSubtree(root->left)+findNodesInSubtree(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        if(root->val==findSubtreeAvg(root)) 
        return 1+averageOfSubtree(root->left)+averageOfSubtree(root->right);
        return averageOfSubtree(root->left)+averageOfSubtree(root->right);
    }
};