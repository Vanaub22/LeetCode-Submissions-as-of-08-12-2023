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
    string serializedPreorderString(TreeNode* root) {
        // Delimiters need to be included to distinguish properly between left and right subtrees
        if(!root) return "#";
        return to_string(root->val)+","+preorderString(root->left)+","+preorderString(root->right);
    }
    // Function to traverse the entire tree and populate the Map
    void hashBinString(TreeNode* root, unordered_map<string,int>& strFreq, unordered_map<string,TreeNode*>& treeRep) {
        if(!root) return; // To represent absence of nodes, i.e., Null
        hashBinString(root->left,strFreq,treeRep);
        string representation=serializedPreorderString(root);
        strFreq[representation]++;
        treeRep[representation]=root;
        hashBinString(root->right,strFreq,treeRep);
    }
    // Using String Representation of Tree as key for Hash Table
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> dup;
        unordered_map<string,int> strFreq;
        unordered_map<string,TreeNode*> treeRep;
        hashBinString(root,strFreq,treeRep);
        for(auto& it:strFreq) if(it.second>1) dup.push_back(treeRep[it.first]);
        return dup;
    }
};