// https://leetcode.com/problems/combination-sum

class Solution {
public:
    void findCombination(int idx,int target,vector<int>& candidates,vector<int>& combination,vector<vector<int>>& combinations){
        if(idx==candidates.size() || target<0){
            if(target==0)
            combinations.push_back(combination);
            return;
        }
        combination.push_back(candidates[idx]);
        findCombination(idx,target-candidates[idx],candidates,combination,combinations);
        combination.pop_back();
        findCombination(idx+1,target,candidates,combination,combinations);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates,int target) {
        vector<vector<int>> combinations;
        vector<int> combination;
        findCombination(0,target,candidates,combination,combinations);
        return(combinations);
    }
};