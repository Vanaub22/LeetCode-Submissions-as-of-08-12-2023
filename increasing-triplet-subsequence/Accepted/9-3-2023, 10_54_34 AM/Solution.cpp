// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int low=INT_MAX,mid=INT_MAX,n=nums.size();
        if(n<3) return false;
        for(int i=0;i<n;i++){
            if(nums[i]>mid) return true;
            if(nums[i]>low && nums[i]<mid) mid=nums[i];
            else if(nums[i]<low) low=nums[i];
        }
        return false;
    }
};