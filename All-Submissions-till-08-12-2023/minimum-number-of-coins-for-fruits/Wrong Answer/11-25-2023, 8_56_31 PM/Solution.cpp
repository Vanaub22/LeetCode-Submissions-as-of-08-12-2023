// https://leetcode.com/problems/minimum-number-of-coins-for-fruits

class Solution {
public:
    int minimumCoins(vector<int>& prices) {
        int n=prices.size();
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++) {
            int total_cost=0;
            for(int j=i;j>0;j--) {
                total_cost+=prices[i-1];
                dp[i]=min(dp[i],dp[j-1]+total_cost);
            }
        }
        return dp[n];
    }
};