// https://leetcode.com/problems/check-if-there-is-a-valid-partition-for-the-array

class Solution {
public:
    bool isValidPartition(vector<int>& nums, int i, unordered_map<int,bool>& dp){
        if(dp.find(i)!=dp.end()) return dp[i];
        if(i>0 && nums[i]==nums[i-1] && isValidPartition(nums,i-2,dp)) return true;
        if(i>1 && nums[i]==nums[i-1] && nums[i-1]==nums[i-2] && isValidPartition(nums,i-3,dp)) return true;
        if(i>1 && nums[i]==nums[i-1]+1 && nums[i-1]==nums[i-2]+1 && isValidPartition(nums,i-3,dp)) return true;
        return false;
    }
    bool validPartition(vector<int>& nums) {
        unordered_map<int,bool> dp;
        dp[-1]=true;
        return isValidPartition(nums,nums.size()-1,dp);
    }
};