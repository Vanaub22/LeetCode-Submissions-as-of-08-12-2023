// https://leetcode.com/problems/combination-sum-iv

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> combinationCount(target+1,-1);
        combinationCount[0]=1;
        countCombinations(target,nums,combinationCount);
        return combinationCount[target];
    }
    int countCombinations(int target, vector<int>& nums, vector<int>& count){
        if(count[target]>=0) return count[target];
        int ways=0;
        for(int i:nums) if(i<=target) ways+=countCombinations(target-i,nums,count);
        count[target]=ways;
        return count[target];
    }
};