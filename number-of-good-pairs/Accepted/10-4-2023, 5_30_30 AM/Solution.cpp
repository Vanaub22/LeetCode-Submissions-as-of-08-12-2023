// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs=0;
        unordered_map<int,int> umap;
        for(int i:nums) umap[i]++;
        for(auto it:umap) good_pairs+=it.second*(it.second-1)/2;
        return good_pairs;
    }
};