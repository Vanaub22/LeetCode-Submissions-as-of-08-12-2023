// https://leetcode.com/problems/combination-sum-ii

class Solution {
public:
    void findCombinations(int idx, int target, vector<int>& candidates, vector<int>& combination, set<vector<int>>& combinations){
        if(idx==candidates.size() || target==0){
            if(target==0) combinations.insert(combination);
            return;
        }
        combination.push_back(candidates[idx]);
        findCombinations(idx+1,target-candidates[idx],candidates,combination,combinations);
        combination.pop_back();
        findCombinations(idx+1,target,candidates,combination,combinations);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        set<vector<int>> combinations;
        vector<int> combination;
        findCombinations(0,target,candidates,combination,combinations);
        return vector<vector<int>>(combinations.begin(),combinations.end());
    }
};