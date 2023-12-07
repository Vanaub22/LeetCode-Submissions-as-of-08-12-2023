// https://leetcode.com/problems/permutations

class Solution {
public:
    void findPermutation(vector<int>& nums, vector<int>& permutation, vector<vector<int>>& permutations){
        if(permutation.size()==nums.size()){
            permutations.push_back(permutation);
            return;
        }
        for(int i:nums)
        if(find(permutation.begin(),permutation.end(),i)==permutation.end()){
            permutation.push_back(i);
            findPermutation(nums,permutation,permutations);
            permutation.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;
        vector<int> permutation;
        findPermutation(nums,permutation,permutations);
        return(permutations);
    }
};