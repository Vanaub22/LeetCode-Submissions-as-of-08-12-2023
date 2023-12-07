// https://leetcode.com/problems/removing-minimum-and-maximum-from-array

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int max_idx=max_element(nums.begin(),nums.end())-nums.begin(),min_idx=min_element(nums.begin(),nums.end())-nums.begin();
        int closer=min(min_idx,max_idx),farther=max(min_idx,max_idx);
        int del_front=farther+1,del_back=nums.size()-closer,del_front_back=closer+1+nums.size()-farther;
        return min(min(del_front,del_back),del_front_back);
    }
};