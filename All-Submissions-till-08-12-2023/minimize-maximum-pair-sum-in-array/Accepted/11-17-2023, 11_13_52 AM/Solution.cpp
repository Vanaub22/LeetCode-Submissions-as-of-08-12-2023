// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // Maximum Pair Sum needs to be minimized
        // We can pair the least element with the greatest element, the second least with the second greatest and so on...
        int n=nums.size(),minMaxPairSum=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++) minMaxPairSum=max(minMaxPairSum,nums[i]+nums[n-i-1]);
        return minMaxPairSum;
    }
};