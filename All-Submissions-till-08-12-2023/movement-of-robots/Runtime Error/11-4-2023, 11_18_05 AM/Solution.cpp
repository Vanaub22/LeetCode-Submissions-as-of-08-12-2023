// https://leetcode.com/problems/movement-of-robots

#define MOD 1000000007
class Solution {
public:
    int sumDistance(vector<int>& positions, string s, int t) {
        // After collision, the robots are simply swapping positions.
        // Therefore, it is safe to assume that no collision occurs.
        // We will advance each robot to its position at 't' seconds.
        // After that we will simply calculate the total pair-wise sum of distances.
        int n=s.length();
        for(int i=0;i<n;i++) {
            if(s[i]=='L') positions[i]-=t;
            else positions[i]+=t;
        }
        long long pairwise_dist=0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                pairwise_dist+=(abs(positions[i]-positions[j])%MOD);
            }
        }
        return pairwise_dist%MOD;
    }
};