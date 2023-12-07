// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    //Kadane's Algorithm
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxSum=INT_MIN;
        for(int i:nums){
            sum=(sum+i>=0?sum+i:0);
            maxSum=max(maxSum,sum);
        }
        return(maxSum);
    }
};