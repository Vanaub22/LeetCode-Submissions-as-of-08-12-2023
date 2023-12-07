// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    // Using Top-Down Dynamic Programming (Memoization)
    int memoize(int stair, int dp[], vector<int>& cost) {
        if(stair<0) return 0;
        if(stair<=1) return cost[stair];
        if(dp[stair]!=-1) return dp[stair];
        return dp[stair]=cost[stair]+min(memoize(stair-1,dp,cost),memoize(stair-2,dp,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n];
        memset(dp,-1,sizeof(dp));
        return min(memoize(n-1,dp,cost),memoize(n-2,dp,cost));
    }
};