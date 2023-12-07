// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree

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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root->left && !root->right) return root;
        queue<TreeNode*> q;
        int level=0;
        // Performing Level-Order Traversal
        q.push(root);
        while(!q.empty()) {
            vector<TreeNode*> oddLevel;
            int n=q.size();
            for(int i=1;i<=n;i++) {
                TreeNode* node=q.front();
                if(level%2!=0) oddLevel.emplace_back(node);
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            // For odd levels, simply reversing the node values by swapping
            if(level%2!=0) {
                int m=oddLevel.size();
                for(int i=0;i<m/2;i++) swap(oddLevel[i]->val,oddLevel[m-i-1]->val);
            }
            level++;
        }
        return root;
    }
};