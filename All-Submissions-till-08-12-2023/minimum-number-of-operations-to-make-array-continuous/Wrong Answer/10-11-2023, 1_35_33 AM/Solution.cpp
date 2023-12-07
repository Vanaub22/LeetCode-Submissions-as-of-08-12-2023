// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),op=0;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> umap;
        for(int i:nums) umap[i]++;
        for(int i=nums[0];i<=nums[0]+n-1;i++) if(umap[i]==0) op++;
        return op;
    }
};