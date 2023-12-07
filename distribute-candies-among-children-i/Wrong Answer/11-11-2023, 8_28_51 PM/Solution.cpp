// https://leetcode.com/problems/distribute-candies-among-children-i

#define ll long long
class Solution {
public:
    int distributeCandies(int n, int limit) {
        int validWays=0,lim1=min(n,limit);
        for(int i=0;i<=lim1;i++) {
            ll remaining=n-i,maxForSecondChild=min((ll)limit,remaining/2),minForSecondChild=max((ll)i,remaining-limit*2);
            validWays+=max(0LL,(maxForSecondChild-minForSecondChild)/2+1);
        }
        return validWays;
    }
};