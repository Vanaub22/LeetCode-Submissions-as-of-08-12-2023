// https://leetcode.com/problems/monotonic-array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    if(nums[0]==nums[nums.size()-1]){
        for(int i:nums)
        if(i!=nums[0])
        return(false);
    }
    if(nums[0]<nums[nums.size()-1]){
        int min=nums[0];
        for(int i:nums){
            if(i<min)
            return(false);
            min=i;
        }
    }
    if(nums[0]>nums[nums.size()-1]){
        int max=nums[0];
        for(int i:nums){
            if(i>max)
            return(false);
            max=i;
        }
    }
    return(true);
    }
};