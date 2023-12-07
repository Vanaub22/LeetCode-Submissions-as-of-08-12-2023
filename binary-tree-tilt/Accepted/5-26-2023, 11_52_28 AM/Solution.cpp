// https://leetcode.com/problems/binary-tree-tilt

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
    int dfs_sum(TreeNode* root,int sum){
        if(!root)
        return(sum);
        return(root->val+dfs_sum(root->left,sum)+dfs_sum(root->right,sum));
    }
    int tilt(TreeNode* root){
        return(abs(dfs_sum(root->left,0)-dfs_sum(root->right,0)));
    }
    int findTilt(TreeNode* root) {
        if(!root ||(!root->left && !root->right))
        return(0);
        queue<TreeNode*> q;
        int tiltSum=0;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=1;i<=n;i++){
                if(q.front()->left)
                q.push(q.front()->left);
                if(q.front()->right)
                q.push(q.front()->right);
                tiltSum+=tilt(q.front());
                q.pop();
            }
        }
        return(tiltSum);
    }
};