// https://leetcode.com/problems/sum-root-to-leaf-numbers

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
    void leafPathSum(TreeNode* root, int num, int& sum){
        if(!root)
        return;
        num=(num*10)+root->val;
        if(!root->left && !root->right){
            sum+=num;
            return;
        }
        leafPathSum(root->left,num,sum);
        leafPathSum(root->right,num,sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        leafPathSum(root,0,sum);
        return(sum);
    }
};