// https://leetcode.com/problems/permutations-ii

class Solution {
public:
    void generatePermutations(vector<int>& nums, vector<bool>& usedIndex, vector<int>& permutation, set<vector<int>>& permutations){
        if(permutation.size()==nums.size() && permutations.find(permutation)==permutations.end()){
            permutations.insert(permutation);
            return;
        }
        for(int i=0;i<nums.size();i++)
        if(!usedIndex[i]){
            permutation.push_back(nums[i]);
            usedIndex[i]=true;
            generatePermutations(nums,usedIndex,permutation,permutations);
            permutation.pop_back();
            usedIndex[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> permutations;
        vector<int> permutation;
        vector<bool> usedIndex(nums.size(),false);
        generatePermutations(nums,usedIndex,permutation,permutations);
        return vector<vector<int>>(permutations.begin(),permutations.end());
    }
};