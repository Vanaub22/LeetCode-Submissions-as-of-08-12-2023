// https://leetcode.com/problems/movement-of-robots

#define MOD 1000000007
class Solution {
public:
    int sumDistance(vector<int> positions, string s, int t) {
        // After collision, the robots are simply swapping positions.
        // Therefore, it is safe to assume that no collision occurs.
        // We will advance each robot to its position at 't' seconds.
        // After that we will simply calculate the total pair-wise sum of distances by using Prefix Sum Logic.
        int n=s.length();
        for(int i=0;i<n;i++)
        if(s[i]=='L') positions[i]=(1LL*positions[i]-t)%MOD;
        else positions[i]=(1LL*positions[i]+t)%MOD;
        long long dist=0,prev=0;
        sort(positions.begin(),positions.end());
        for(int i=0;i<n;i++) {
            // Too many Overflow checks in this step (For every binary operation we have one overflow check)
            dist=(((dist+((positions[i]*1LL*i)%MOD)%MOD)-prev)%MOD+MOD)%MOD;
            prev=(prev+positions[i])%MOD;
        }
        return (dist+MOD)%MOD;
    }
};