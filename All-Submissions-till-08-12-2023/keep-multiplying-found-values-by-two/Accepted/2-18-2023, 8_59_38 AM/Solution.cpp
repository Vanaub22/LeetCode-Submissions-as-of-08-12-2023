// https://leetcode.com/problems/keep-multiplying-found-values-by-two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
    return(find(nums.begin(),nums.end(),original)==nums.end()?original:(findFinalValue(nums,original*2)));
    }
};