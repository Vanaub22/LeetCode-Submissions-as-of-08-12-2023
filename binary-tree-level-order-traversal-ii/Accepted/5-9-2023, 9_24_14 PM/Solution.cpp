// https://leetcode.com/problems/binary-tree-level-order-traversal-ii

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
        return{};
        queue<TreeNode*> Q;
        vector<vector<int>> level_order;
        Q.push(root);
        while(!Q.empty()){
            int n=Q.size();
            vector<int> level;
            for(int i=1;i<=n;i++){
                if(Q.front()->left)
                Q.push(Q.front()->left);
                if(Q.front()->right)
                Q.push(Q.front()->right);
                level.push_back(Q.front()->val);
                Q.pop();
            }
            level_order.push_back(level);
        }
        reverse(level_order.begin(),level_order.end());
        return(level_order);
    }
};