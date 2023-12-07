// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        for(int i=1;i<=k;i++)
        nums[min_element(nums.begin(),nums.end())-nums.begin()]*=-1;
        return(accumulate(nums.begin(),nums.end(),0));
    }
};