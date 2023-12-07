// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

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
    TreeNode* buildTree(vector<int>& preorder,vector<int>& inorder) {
        map<int,int> inMap;
        for(int i=0;i<inorder.size();i++)
        inMap[inorder[i]]=i;
        int preStart=0,preEnd=preorder.size()-1,inStart=0,inEnd=preEnd;
        return(recBuildTree(preorder,preStart,preEnd,inorder,inStart,inEnd,inMap));
    }
    TreeNode* recBuildTree(vector<int>& preorder,int preStart,int preEnd,vector<int>&inorder,int inStart,int inEnd,map<int,int>&inMap){
        if(preStart>preEnd||inStart>inEnd)
        return(NULL);
        TreeNode* root=new TreeNode(preorder[preStart]);
        int inRoot=inMap[root->val],left=inRoot-inStart;
        root->left=recBuildTree(preorder,preStart+1,preStart+left,inorder,inStart,inRoot-1,inMap);
        root->right=recBuildTree(preorder,preStart+left+1,preEnd,inorder,inRoot+1,inEnd,inMap);
        return(root);
    }
};