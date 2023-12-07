// https://leetcode.com/problems/find-duplicate-subtrees

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
    // Function to obtain the String Representation of Tree with passed node as root
    string hashSerialized(TreeNode* root,unordered_map<string,int>& strFreq, unordered_map<string,TreeNode*>& treeRep, vector<TreeNode*>& dup) {
        // Delimiters need to be included to distinguish properly between left and right subtrees
        if(!root) return "#";
        string serialized=to_string(root->val)+","+hashSerialized(root->left,strFreq,treeRep,dup)+","+hashSerialized(root->right,strFreq,treeRep,dup);
        if(strFreq[serialized]==1) dup.push_back(treeRep[serialized]);
        strFreq[serialized]++;
        treeRep[serialized]=root;
        return serialized;
    }
    // Using String Representation of Tree as key for Hash Table
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> dup;
        unordered_map<string,int> strFreq;
        unordered_map<string,TreeNode*> treeRep;
        hashSerialized(root,strFreq,treeRep,dup);
        return dup;
    }
};