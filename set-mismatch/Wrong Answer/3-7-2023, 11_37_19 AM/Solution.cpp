// https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeat;
        unordered_map<int,int> umap;
        for(int i:nums)
        umap[i]++;
        for(auto it:umap)
        if(it.second==2)
        repeat=it.first;
        if(umap[repeat+1]==0 && repeat+1<=nums.size())
        return {repeat, repeat+1};
        return {repeat, repeat-1};

    }
};