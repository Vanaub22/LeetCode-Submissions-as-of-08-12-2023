// https://leetcode.com/problems/delete-nodes-and-return-forest

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
    // To determine the condition of the main tree after deletions (Pruning)
    void pruneMainTree(TreeNode*& root,set<int>& to_delete) {
        if(!root) return;
        if(root->left && to_delete.find(root->left->val)!=to_delete.end()) root->left=nullptr;
        if(root->right && to_delete.find(root->right->val)!=to_delete.end()) root->right=nullptr;
        pruneMainTree(root->left,to_delete);
        pruneMainTree(root->right,to_delete);
    }
    // To find trees apart from the main tree that have been formed as a result of the deletions
    void findMoreTrees(TreeNode* root, set<int>& to_delete, vector<TreeNode*>& forest) {
        if(!root) return;
        if(to_delete.find(root->val)!=to_delete.end()) {
            if(root->left) forest.emplace_back(root->left);
            if(root->right) forest.emplace_back(root->right);
        }
        findTrees(root->left,to_delete,forest);
        findTrees(root->right,to_delete,forest);
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& values) {
        set<int> to_delete; // Using a Set For O(1) access to values that are to be deleted
        for(int value:values) to_delete.insert(value);
        vector<TreeNode*> forest;
        findMoreTrees(root,to_delete,forest);
        // If the root node is deleted then there's no need to prune the main tree because it doesn't exist anymore
        if(to_delete.find(root->val)==to_delete.end()) {
            pruneMainTree(root,to_delete);
            forest.emplace_back(root);
        }
        return forest;
    }
};