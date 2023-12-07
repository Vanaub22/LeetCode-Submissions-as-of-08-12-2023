// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> z_order;
        if(!root)
        return(z_order);
        queue<TreeNode*> Q;
        Q.push(root);
        z_order.push_back({root->val});
        int step=0;
        while(!Q.empty()){
            ++step;
            int n=Q.size();
            vector<int> level;
            for(int i=1;i<=n;i++){
                if(Q.front()->left){
                    level.push_back(Q.front()->left->val);
                    Q.push(Q.front()->left);
                }
                if(Q.front()->right){
                    level.push_back(Q.front()->right->val);
                    Q.push(Q.front()->right);
                }
                Q.pop();
            }
            if(level.size()){
                if(step%2)
                reverse(level.begin(),level.end());
                z_order.push_back(level);
            }
        }
        return(z_order);
    }
};