// https://leetcode.com/problems/diagonal-traverse-ii

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        // Solving using BFS (1-Pass)
        queue<pair<int,int>> q;
        q.push(make_pair(0,0));
        vector<int> diagonalTraversal;
        int m=nums.size();
        while(!q.empty()) {
            int row=q.front().first,col=q.front().second;
            q.pop();
            diagonalTraversal.emplace_back(nums[row][col]);
            if(row+1<m && col==0) q.push(make_pair(row+1,col));
            if(col+1<nums[row].size()) q.push(make_pair(row,col+1));
        }
        return diagonalTraversal;
    }
};