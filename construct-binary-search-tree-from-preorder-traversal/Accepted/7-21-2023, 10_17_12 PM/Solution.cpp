// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

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
    TreeNode* construct(vector<int>& preorder, int start, int end){
        if(end<start) return nullptr;
        TreeNode* root=new TreeNode(preorder[start]);
        if(start==end) return root;
        int i=start+1;
        for(;i<=end;i++) if(preorder[i]>preorder[start]) break;
        root->left=construct(preorder,start+1,i-1);
        root->right=construct(preorder,i,end);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return construct(preorder,0,preorder.size()-1);
    }
};