// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int n=nums.size(),max_xor=INT_MIN;
        for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) max_xor=max(max_xor,nums[i]^nums[j]);
        return max_xor;
    }
};