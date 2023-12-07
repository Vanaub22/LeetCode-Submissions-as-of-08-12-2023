// https://leetcode.com/problems/n-repeated-element-in-size-2n-array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i:nums)
        umap[i]++;
        for(auto it:umap)
        if(it.second==nums.size()/2)
        return(it.first); 
        return(-1);   
    }
};