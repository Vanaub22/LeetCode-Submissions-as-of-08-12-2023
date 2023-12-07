// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal

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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n=preorder.size();
        unordered_map<int,int> post_idx;
        for(int i=0;i<n;i++) post_idx[postorder[i]]=i;
        return constructRecursive(post_idx,preorder,postorder,0,n-1,0,n-1);
    }
    TreeNode* constructRecursive(unordered_map<int,int>& post_idx, vector<int>& preorder, vector<int>& postorder, int preStart, int preEnd, int postStart, int postEnd){
        TreeNode* root=new TreeNode(preorder[preStart]);
        if(preStart==preEnd) return root;
        int idx=post_idx[preorder[preStart+1]], leftSubLength=idx-postStart+1; 
        root->left=constructRecursive(post_idx,preorder,postorder,preStart+1,preStart+leftSubLength,postStart,idx);
        if(idx==postEnd-1) return root;
        root->right=constructRecursive(post_idx,preorder,postorder,preStart+leftSubLength+1,preEnd,idx+1,postEnd-1);
        return root;
    }
};