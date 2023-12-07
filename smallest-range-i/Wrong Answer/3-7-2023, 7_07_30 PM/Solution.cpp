// https://leetcode.com/problems/smallest-range-i

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size()==1)
        return(0);
        int min_diff=nums[1]-nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(min_diff>nums[i+1]-nums[i])
            min_diff=nums[i+1]-nums[i];
        }
        if(min_diff<=k)
        return(0);
        else
        return(min_diff-(2*k));
    }
};