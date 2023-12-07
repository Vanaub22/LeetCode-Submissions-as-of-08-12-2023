// https://leetcode.com/problems/complement-of-base-10-integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int ans,mask=0,copy=n;
        while(copy>0)
        {
            mask=(mask<<1)|1;
            copy=copy>>1;
        }
        return((n==0)?1:((~n)&mask));
    }
};