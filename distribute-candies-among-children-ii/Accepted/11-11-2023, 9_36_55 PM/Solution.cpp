// https://leetcode.com/problems/distribute-candies-among-children-ii

#define ll long long
class Solution {
public:
    ll distributeCandies(int n, int limit) {
        ll validWays=0;
        for(int i=0;i<=limit;i++) {
            ll remaining=n-i,a=abs(remaining-limit);
            if(a>limit) continue;
            else validWays+=abs(limit-a)+1;
        }
        return validWays;
    }
};