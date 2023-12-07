// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> second_occurrence(10000,false);
        for(int i:nums){
            if(second_occurrence[i-1])
            return(i);
            second_occurrence[i-1]=true;
        }
        return(nums[0]);
    }
};