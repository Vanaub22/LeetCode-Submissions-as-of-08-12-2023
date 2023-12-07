// https://leetcode.com/problems/nth-digit

class Solution {
public:
    int findNthDigit(int n) {
        if(n<=9) return n;
        int digit_cnt=1,numbers_in_range=9;
        while(n-(numbers_in_range*digit_cnt)>0){
            n-=(numbers_in_range*digit_cnt);
            digit_cnt++;
            numbers_in_range*=10;
        }
        numbers_in_range/=10;
        digit_cnt--;
        return((stoi("1"+string(digit_cnt-1,'0'))+(n/digit_cnt))%digit_cnt);
    }
};