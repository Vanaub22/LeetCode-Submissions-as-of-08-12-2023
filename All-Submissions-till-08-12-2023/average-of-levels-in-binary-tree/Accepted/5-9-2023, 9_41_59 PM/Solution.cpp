// https://leetcode.com/problems/average-of-levels-in-binary-tree

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
    double level_avg(vector<int>& level){
        long long sum=0;
        for(int i:level)
        sum+=i;
        return((double)sum/level.size());
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> level_averages;
        queue<TreeNode*> Q;
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
            level_averages.push_back(level_avg(level));
        }
        return(level_averages);
    }
};