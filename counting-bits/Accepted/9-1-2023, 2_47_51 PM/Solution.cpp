// https://leetcode.com/problems/counting-bits

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bitsCnt(n+1,0);
        for(int i=1;i<=n;i++) bitsCnt[i]=bitsCnt[i/2]+i%2;
        return bitsCnt;
    }
};