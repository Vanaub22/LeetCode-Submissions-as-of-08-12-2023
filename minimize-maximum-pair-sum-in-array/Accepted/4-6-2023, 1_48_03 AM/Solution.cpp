// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int minMaxSum=INT_MIN,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++)
        minMaxSum=max(minMaxSum,nums[i]+nums[n-i-1]);
        return(minMaxSum);
    }
};