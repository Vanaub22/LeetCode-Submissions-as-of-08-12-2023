// https://leetcode.com/problems/count-the-digits-that-divide-a-number

class Solution {
public:
    int countDigits(int num) {
        int div=0,copy=num;
        while(copy>0){
            if(num%(copy%10)==0)
            div++;
            copy/=10;
        }
        return(div);
    }
};