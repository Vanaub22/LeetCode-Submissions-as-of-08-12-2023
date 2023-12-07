// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
    vector<int> inorderArr(vector<int>& inorder,TreeNode* root){
        if(!root)
        return(inorder);
        inorder=inorderArr(inorder,root->left);
        inorder.push_back(root->val);
        return(inorderArr(inorder,root->right));
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        return(inorderArr(inorder,root)[k-1]);
    }
};