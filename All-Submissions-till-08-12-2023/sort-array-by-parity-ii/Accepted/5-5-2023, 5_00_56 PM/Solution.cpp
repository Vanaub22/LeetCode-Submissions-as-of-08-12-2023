// https://leetcode.com/problems/sort-array-by-parity-ii

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evens,odds;
        int even_pos=0,odd_pos=0;
        for(int i:nums)
        if(i%2==0)
        evens.push_back(i);
        else
        odds.push_back(i);
        for(int i=0;i<nums.size();i++)
        if(i%2==0)
        nums[i]=evens[even_pos++];
        else
        nums[i]=odds[odd_pos++];
        return(nums);
    }
};