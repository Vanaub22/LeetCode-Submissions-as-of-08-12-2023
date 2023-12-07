// https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int pairs=0;
        for(int i=0;i<nums.size();i++)
        for(int j=0;j<nums.size();j++)
        if(nums[i]+nums[j]==target && i!=j)
        pairs++;
        return(pairs);
    }
};