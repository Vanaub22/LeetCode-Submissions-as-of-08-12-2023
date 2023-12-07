// https://leetcode.com/problems/alternating-digit-sum

class Solution {
public:
    int alternateDigitSum(int n) {
        int sign=1,altsum=0;
        string num=to_string(n);
        if(num.size()%2==0)
        sign=-1;
        while(n>0){
            altsum+=((n%10)*sign);
            sign*=(-1);
            n/=10;
        }
        return(altsum);
    }
};