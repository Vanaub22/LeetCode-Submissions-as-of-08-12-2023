// https://leetcode.com/problems/sum-of-two-integers

class Solution {
public:
    int getSum(int a, int b) {
        if(b==0)
        return(a);
        if(a&b==0)
        return(a^b);
        return(getSum(a^b,(unsigned int)(a&b)<<1));
    }
};