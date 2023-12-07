// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void simultaneousDFS(TreeNode* original_node, TreeNode* cloned_node, TreeNode* target, TreeNode*& dest){
        if(!original_node)
        return;
        if(original_node==target){
            dest=cloned_node;
            return;
        }
        simultaneousDFS(original_node->left,cloned_node->left,target,dest);
        simultaneousDFS(original_node->right,cloned_node->right,target,dest);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* dest=NULL;
        simultaneousDFS(original,cloned,target,dest);
        return(dest);
    }
};