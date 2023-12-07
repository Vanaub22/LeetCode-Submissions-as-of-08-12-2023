// https://leetcode.com/problems/smallest-string-starting-from-leaf

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
    string smallestFromLeaf(TreeNode* root) {
        string result="~";
        buildStrings(root,"",result);
        return(result);
    }
    void buildStrings(TreeNode* root, string s, string& result){
        if(!root)
        return;
        s+=((char)('a'+root->val));
        if(!root->right && !root->left){
            string r=s;
            reverse(r.begin(),r.end());
            if(r<result)
            result=r;
            return;
        }
        buildStrings(root->left,s,result);
        buildStrings(root->right,s,result);
    }
};