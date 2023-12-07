// https://leetcode.com/problems/monotonic-array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool increasing=true;
        if(nums[0]>=nums[1]) increasing=false;
        for(int i=1;i<n-1;i++)
        if((nums[i]<nums[i+1] && !increasing) || (nums[i]>nums[i+1] && increasing)) return false;
        return true;
    }
};