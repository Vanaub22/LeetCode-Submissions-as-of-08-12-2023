// https://leetcode.com/problems/smallest-range-i

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size()==1)
        return(0);
        int min_diff=nums[1]-nums[0];
        if(min_diff<=k)
        return(0);
        else
        return(min_diff-(2*k));
    }
};