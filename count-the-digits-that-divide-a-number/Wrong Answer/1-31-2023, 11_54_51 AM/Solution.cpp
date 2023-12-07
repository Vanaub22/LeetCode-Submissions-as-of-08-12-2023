// https://leetcode.com/problems/count-the-digits-that-divide-a-number

class Solution {
public:
    int countDigits(int num) {
        array<int,10> digits={0};
        int copy=num;
        while(copy>0){
            if(digits[copy%10]==0)
            digits[copy%10]=1;
            copy/=10;
        }
        return(accumulate(digits.begin(),digits.end(),0));
    }
};