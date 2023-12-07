// https://leetcode.com/problems/distribute-candies-among-children-ii

#define ll long long
class Solution {
public:
    ll distributeCandies(int n, int limit) {
        ll validWays=0,lim1=min(n,limit);
        for(ll i=0;i<=lim1;i++) {
            ll lim2=min((ll)n-i,(ll)limit);
            for(ll j=0;j<=lim2;j++) {
                ll k=min((ll)n-i-j,(ll)limit);
                if(i+j+k==n) validWays++;
            }
        }
        return validWays;
    }
};