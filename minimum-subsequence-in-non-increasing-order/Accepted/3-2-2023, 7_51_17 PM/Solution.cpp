// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int fwd_sum=0;
        vector<int> minsub;
        sort(nums.begin(),nums.end(),greater<int>());
        int total=accumulate(nums.begin(),nums.end(),0);
        for(int i:nums){
        fwd_sum+=i;
        minsub.push_back(i);
        if(fwd_sum>total-fwd_sum)
        break;
        } 
        return(minsub);  
    }
};