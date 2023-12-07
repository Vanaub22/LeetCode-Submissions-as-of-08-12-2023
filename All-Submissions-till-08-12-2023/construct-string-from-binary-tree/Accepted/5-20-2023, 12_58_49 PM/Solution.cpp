// https://leetcode.com/problems/construct-string-from-binary-tree

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
    string tree2str(TreeNode* root) {
        string str="";
        if(!root)
        return("");
        str+=to_string(root->val);
        if(root->left)
        str+=("("+tree2str(root->left)+")");
        if(!root->left && root->right)
        str+="()"; // to maintain the one-to-one mapping b/w i/p and o/p
        if(root->right)
        str+=("("+tree2str(root->right)+")");
        return(str);
    }
};