// https://leetcode.com/problems/number-of-strings-which-can-be-rearranged-to-contain-substring

#define MOD ((int)1e9+7)
#define ll long long
class Solution {
public:
    int stringCount(int n) {
        ll dp[n+1][5];
        memset(dp,0,sizeof(dp));
        dp[1][1]=1;
        for(int i=2;i<=n;i++) {
            dp[i][1]=(dp[i-1][2]+dp[i-1][3]+dp[i-1][4])%MOD;
            dp[i][2]=(dp[i-1][1]+dp[i-1][3])%MOD;
            dp[i][3]=(dp[i-1][2]+dp[i-1][4])%MOD;
            dp[i][4]=dp[i-1][3]%MOD;
        }
        ll result = 0;
        for(int j=1;j<=4;++j) result=(result+dp[n][j])%MOD;
        return result;
    }
};
