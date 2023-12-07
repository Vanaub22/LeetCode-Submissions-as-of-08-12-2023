// https://leetcode.com/problems/path-sum

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
    bool addPath(TreeNode* root,int pathSum,int targetSum){
        pathSum+=root->val;
        if(root->left)
        return(root->right?(addPath(root->left,pathSum,targetSum)||addPath(root->right,pathSum,targetSum)):addPath(root->left,pathSum,targetSum));
        return(root->right?addPath(root->right,pathSum,targetSum):pathSum==targetSum);
    }
    bool hasPathSum(TreeNode* root,int targetSum) {
        if(!root)
        return(false);
        int pathSum=0;
        return(addPath(root,pathSum,targetSum));
    }
};