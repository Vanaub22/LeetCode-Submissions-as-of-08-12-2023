// https://leetcode.com/problems/perfect-number

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int divisor_sum=1;
        for(int i=2;i<num;i++)
        if(num%i==0)
        divisor_sum+=i;
        return(divisor_sum==num && num!=1);   
    }
};