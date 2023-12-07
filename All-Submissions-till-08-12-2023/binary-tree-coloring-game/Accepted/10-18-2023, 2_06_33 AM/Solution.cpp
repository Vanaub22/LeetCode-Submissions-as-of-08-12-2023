// https://leetcode.com/problems/binary-tree-coloring-game

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
    // To find the number of nodes assuming the passed node as the root node
    int countNodesFromRoot(TreeNode* root) {
        if(!root) return 0;
        return 1+countNodesFromRoot(root->left)+countNodesFromRoot(root->right);
    }
    // To find and return a node in the tree with same value as the passed value 
    TreeNode* findNodeWithValue(TreeNode* root, int x) {
        if(!root || root->val==x) return root;
        TreeNode* search=findNodeWithValue(root->left,x);
        if(search) return search;
        return findNodeWithValue(root->right,x);
    }
    // To determine if winning is possible for the 2nd Player
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        TreeNode* xnode=findNodeWithValue(root,x);
        int leftCount=countNodesFromRoot(xnode->left),rightCount=countNodesFromRoot(xnode->right);
        // There are 3 cases in which the 2nd player can Win:
        // 1. There are less than n/2 nodes left in that Subtree => Choose Parent Node
        // 2. The Left Subtree of xnode has more than n/2 nodes => Choose Left Child
        // 3. The Right Subtree of xnode has more than n/2 nodes => Choose Right Child 
        return leftCount+rightCount<n/2 || leftCount>n/2 || rightCount>n/2;        
    }
};