// https://leetcode.com/problems/distribute-coins-in-binary-tree

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
    int distributeCoins(TreeNode* root) {
        int moves=0;
        calcMoves(root,moves);
        return moves;
    }
    // Will be using Post-Order Traversal DFS
    int calcMoves(TreeNode* root, int& moves) {
        if(!root) return 0;
        int left_need,right_need=left_need=0;
        if(root->left) left_need=calcMoves(root->left,moves);
        if(root->right) right_need=calcMoves(root->right,moves);
        moves+=abs(left_need)+abs(right_need);
        return root->val+left_need+right_need-1;
    }
};