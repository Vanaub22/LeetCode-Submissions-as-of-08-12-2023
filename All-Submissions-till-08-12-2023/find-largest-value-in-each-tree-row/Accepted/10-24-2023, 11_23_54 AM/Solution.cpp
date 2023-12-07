// https://leetcode.com/problems/find-largest-value-in-each-tree-row

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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        // Level-order Traversal
        vector<int> largestRowValues;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n=q.size(),maxNodeVal=INT_MIN;
            for(int i=1;i<=n;i++) {
                TreeNode* node=q.front();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                maxNodeVal=max(maxNodeVal,node->val); // Finding the largest value in this row
                q.pop();
            }
            largestRowValues.emplace_back(maxNodeVal);
        }
        return largestRowValues;
    }
};