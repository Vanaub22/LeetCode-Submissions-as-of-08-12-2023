// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n){
    return((n<=1)?((n==1)?true:false):((n%3==0)?(isPowerOfThree(n/3)):false));
    }
};