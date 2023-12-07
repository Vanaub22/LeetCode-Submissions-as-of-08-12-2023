// https://leetcode.com/problems/minimum-number-of-coins-for-fruits

class Solution {
public:
    int minimumCoins(vector<int>& prices) {
    int n=prices.size();
    vector<int> dp(n + 1, 0);
    for(int i=1;i<=n;++i) {
        dp[i]=prices[i-1]+dp[i-1];
        for(int j=i-1;j>0;--j) {
            dp[i]=min(dp[i],prices[j-1]+dp[j-1]);
        }
    }
    return dp[n]+1;
    }
};