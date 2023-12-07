// https://leetcode.com/problems/find-triangular-sum-of-an-array

class Solution {
public:
    // Looking at the contraints, it is clear that we can apply Brute Force (Recursion)
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> newNums(n-1,0);
        for(int i=0;i<n-1;i++) newNums[i]=(nums[i]+nums[i+1])%10;
        nums=newNums;
        return triangularSum(nums);
    }
};