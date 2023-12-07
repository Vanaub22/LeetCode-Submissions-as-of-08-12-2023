// https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i;
        for(i=1;i<nums.size();i++)
        if(nums[i-1]!=i)
        break;
        return {i-1,i};
    }
};