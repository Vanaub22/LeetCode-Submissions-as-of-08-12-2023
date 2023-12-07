// https://leetcode.com/problems/combinations

class Solution {
public:
    void findCombinations(int curr,int n,int k,vector<int>& combination,vector<vector<int>>& combinations){
        if(combination.size()==k){
            combinations.push_back(combination);
            return;
        }
        for(int i=curr;i<=n;i++){
            combination.push_back(i);
            findCombinations(i+1,n,k,combination,combinations);
            combination.pop_back();
        }
    }
    vector<vector<int>> combine(int n,int k) {
        vector<int> combination;
        vector<vector<int>> combinations;
        findCombinations(1,n,k,combination,combinations);
        return(combinations);
    }
};