// https://leetcode.com/problems/unique-paths

class Solution {
public:
    int countPaths(int i, int j, int m, int n, vector<vector<int>>& dp){
        if(i==m-1 && j==n-1)
        return(1);
        if(i>=m || j>=n)
        return(0);
        if(dp[i][j]==-1)
        dp[i][j]=countPaths(i+1,j,m,n,dp)+countPaths(i,j+1,m,n,dp);
        return(dp[i][j]);
    }
    int uniquePaths(int m, int n) {
        if(m==1 && n==1)
        return(1);
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        countPaths(0,0,m,n,dp);
        return(dp[0][0]);
    }
};