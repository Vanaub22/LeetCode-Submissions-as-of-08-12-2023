// https://leetcode.com/problems/power-of-four

class Solution {
public:
    // Basic Bit Manipulation
    bool isPowerOfFour(int n) {
        // Powers of 2 will have only 1 Set Bit (MSB)
        // Therefore, on Bit-wise AND-ing n (a power of 2) with (n-1), we must get 0
        if(n<=0 || (n&(n-1))!=0) return false;
        int trailingZeroes=0;
        while(n>1) {
            trailingZeroes++;
            n>>=1; // Right Shift, i.e., dividing by 2 (Eventually it will become 1)
        }
        return trailingZeroes%2==0; // Must have Even Number of Trailing Zeroes
    }
};