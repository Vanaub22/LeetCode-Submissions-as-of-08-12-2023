// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent

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
    // Using DFS to traverse, keeping track of parent and grandparent for each node
    int sumEvenGrandparent(TreeNode* root) {
        int result=0,parent,grandParent=parent=-1; // Invalid ancestors for root node
        solve_DFS(root,grandParent,parent,result);
        return result;
    }
    void solve_DFS(TreeNode* root, int grandParent, int parent, int& result) {
        if(!root) return;
        if(grandParent%2==0) result+=root->val;
        solve_DFS(root->left,parent,root->val,result);
        solve_DFS(root->right,parent,root->val,result);
    }
};