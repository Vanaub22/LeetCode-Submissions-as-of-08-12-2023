// https://leetcode.com/problems/distribute-candies-among-children-i

class Solution {
public:
    int distributeCandies(int n, int limit) {
        int validWays=0,lim1=min(n,limit);
        for(int i=0;i<=lim1;i++) {
            int lim2=min(n-i,limit);
            for(int j=0;j<=lim2;j++) {
                int k=min(n-i-j,limit);
                if(i+j+k==n) validWays++;
            }
        }
        return validWays;
    }
};