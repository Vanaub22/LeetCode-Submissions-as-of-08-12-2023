// https://leetcode.com/problems/maximum-binary-tree

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
    TreeNode* construct(int left, int right, vector<int>& nums){
        if(left>right) return(NULL);
        int max_idx=max_element(nums.begin()+left,nums.begin()+right+1)-nums.begin();
        TreeNode* root=new TreeNode(nums[max_idx]);
        root->left=construct(left,max_idx-1,nums);
        root->right=construct(max_idx+1,right,nums);
        return(root);
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return(construct(0,nums.size()-1,nums));
    }
};