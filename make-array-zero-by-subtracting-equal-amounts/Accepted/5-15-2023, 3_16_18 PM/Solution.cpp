// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> unique;
        for(int i:nums)
        if(i>0)
        unique.insert(i);
        return(unique.size());  
    }
};