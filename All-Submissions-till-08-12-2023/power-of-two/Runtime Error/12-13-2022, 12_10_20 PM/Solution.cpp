// https://leetcode.com/problems/power-of-two

// #include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int power=1;
        while(power<n){
            power*=2;
        }
        return((n==0)?false:((power==n)?true:false));
    }
};