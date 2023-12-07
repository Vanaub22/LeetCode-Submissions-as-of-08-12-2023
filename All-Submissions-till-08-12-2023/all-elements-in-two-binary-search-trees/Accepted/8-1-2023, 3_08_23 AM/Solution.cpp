// https://leetcode.com/problems/all-elements-in-two-binary-search-trees

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
    void inorder(TreeNode* root, vector<int>& traversal){
        if(!root) return;
        inorder(root->left,traversal);
        traversal.push_back(root->val);
        inorder(root->right,traversal);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> L1,L2,L;
        inorder(root1,L1);
        inorder(root2,L2);
        int m=L1.size(),n=L2.size(),i=0,j=0,k=0;
        L=vector<int>(m+n);
        while(i<m && j<n)
        if(L1[i]<L2[j]) L[k++]=L1[i++];
        else L[k++]=L2[j++];
        while(i<m) L[k++]=L1[i++];
        while(j<n) L[k++]=L2[j++];
        return L;
    }
};