// https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeat,notPresent;
        unordered_map<int,int> umap;
        for(int i:nums)
        umap[i]++;
        for(auto it:umap)
        if(it.second==2)
        repeat=it.first;
        for(int i=1;i<=nums.size();i++)
        if(umap[i]==0){
        notPresent=i;
        break;
        }
        return {repeat,notPresent};
    }
};