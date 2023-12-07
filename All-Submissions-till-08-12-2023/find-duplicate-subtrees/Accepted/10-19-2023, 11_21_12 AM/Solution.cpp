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
    string hashSerialized(TreeNode* root,unordered_map<string,int>& strFreq, unordered_map<string,TreeNode*>& treeRep, vector<TreeNode*>& duplicates) {
        // Delimiters need to be included to distinguish properly between left and right subtrees
        if(!root) return "#";
        string serialized=to_string(root->val)+","+hashSerialized(root->left,strFreq,treeRep,duplicates)+","+hashSerialized(root->right,strFreq,treeRep,duplicates);
        // Will include duplicate subtree only once for the first repetition
        if(strFreq[serialized]==1) duplicates.push_back(treeRep[serialized]);
        strFreq[serialized]++;
        treeRep[serialized]=root;
        return serialized;
    }
    // Using String Representation of Tree as key for Hash Table
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> duplicates;
        unordered_map<string,int> strFreq;
        unordered_map<string,TreeNode*> treeRep;
        hashSerialized(root,strFreq,treeRep,duplicates);
        return duplicates;
    }
};