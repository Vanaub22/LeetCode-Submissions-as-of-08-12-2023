// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    // Using Bit Manipulation to achieve the required result
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        unsigned int a=abs(dividend),b=abs(divisor),quotient=0; // To avoid Overflow
        // Sign of the Quotient will be handled later
        bool result_sign=(dividend<0 && divisor<0) || (dividend>=0 && divisor>0);
        while(a>=b) {
            int powerOf2=0;
            while(a>b<<(powerOf2+1)) powerOf2++;
            quotient+=1<<powerOf2; // Adding to the Result
            a-=(b<<powerOf2);
        }
        return result_sign?quotient:-quotient;
    }
};