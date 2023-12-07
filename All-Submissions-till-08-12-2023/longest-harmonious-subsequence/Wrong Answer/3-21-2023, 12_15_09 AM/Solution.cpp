// https://leetcode.com/problems/longest-harmonious-subsequence

class Solution {
public:
    int subLength(int num, unordered_map<int,int>& umap){
        if(umap[num-1]==0 && umap[num+1]==0)
        return(0);
        return(umap[num-1]>=umap[num+1]?(umap[num]+umap[num-1]):(umap[num]+umap[num+1]));
    }
    int findLHS(vector<int>& nums) {
        int large_sub_length=0;
        unordered_map<int,int> umap;
        for(int i:nums)
        umap[i]++;
        for(auto it:umap){
            if(subLength(it.first,umap)>large_sub_length)
            large_sub_length=subLength(it.first,umap);
        }
        return(large_sub_length);
    }
};