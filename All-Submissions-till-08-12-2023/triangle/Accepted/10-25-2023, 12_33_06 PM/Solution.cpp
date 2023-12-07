// https://leetcode.com/problems/triangle

#define vvi vector<vector<int>>
class Solution {
public:
    // Memoization DP
    void memoize(int i, int j, vvi& dp, vvi& triangle) {
        if(i>=triangle.size()-1 || j>=triangle[i].size()) return;
        if(dp[i][j]!=-1) return;
        memoize(i+1,j+1,dp,triangle);
        memoize(i+1,j,dp,triangle);
        dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
    }
    int minimumTotal(vvi& triangle) {
        int n=triangle.size();
        vvi dp(n,vector<int>(n,-1)); // 2-D DP Table
        dp[n-1]=triangle[n-1];
        memoize(0,0,dp,triangle); // Top-Down Approach
        return dp[0][0];
    }
};