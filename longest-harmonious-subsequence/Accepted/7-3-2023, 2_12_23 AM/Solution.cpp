// https://leetcode.com/problems/longest-harmonious-subsequence

class Solution {
public:
    int findLHS(vector<int> nums) {
        int n=nums.size(),maxlen=0;
        unordered_map<int,int> freq;
        for(int i:nums) freq[i]++;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        if(nums[i+1]-nums[i]==1) 
        maxlen=max(maxlen,freq[nums[i]]+freq[nums[i+1]]);
        return maxlen;
    }
};