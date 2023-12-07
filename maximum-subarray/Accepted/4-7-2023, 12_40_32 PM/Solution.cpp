// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    //Kadane's Algorithm
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxSum=INT_MIN;
        for(int i:nums){
            sum+=i;
            maxSum=max(maxSum,sum);
            sum=(sum>0?sum:0);            
        }
        return(maxSum);
    }
};