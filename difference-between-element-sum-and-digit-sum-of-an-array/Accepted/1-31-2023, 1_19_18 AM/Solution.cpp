// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
    int digitsum(int num){
        int sum=0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        return(sum);
    }
    int differenceOfSum(vector<int>& nums) {
        int digit_sum=0;
        for(int i:nums)
        digit_sum+=digitsum(i);
        return(abs(accumulate(nums.begin(),nums.end(),0)-digit_sum));
    }
};