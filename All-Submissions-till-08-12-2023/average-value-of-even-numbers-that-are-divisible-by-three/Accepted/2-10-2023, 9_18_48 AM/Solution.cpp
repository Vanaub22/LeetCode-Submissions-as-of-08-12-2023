// https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three

class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0,n=0;
        for(int i:nums)
        if(i%6==0){
            sum+=i;
            n++;
        }
        return((n==0)?(0):(int)(sum/n));
    }
};