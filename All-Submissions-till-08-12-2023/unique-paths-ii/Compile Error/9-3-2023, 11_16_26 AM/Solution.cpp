// https://leetcode.com/problems/unique-paths-ii

class Solution {
public:
    int countPaths(int i, int j, int m, int n, vector<vector<int>>& dp, vector<vector<int>>& obstacleGrid){
        if(i==m-1 && j==n-1) return obstacleGrid[i][j]==0;
        if(i>=m || j>=n || obstacleGrid[i][j]==1) return 0;
        if(dp[i][j]==-1) dp[i][j]=countPaths(i+1,j,m,n,dp,obstacleGrid)+countPaths(i,j+1,m,n,dp,obstacleGrid);
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        if(m==1 && n==1) return obstacleGrid[i][j]==0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        countPaths(0,0,m,n,dp,obstacleGrid);
        return dp[0][0];
    }
};