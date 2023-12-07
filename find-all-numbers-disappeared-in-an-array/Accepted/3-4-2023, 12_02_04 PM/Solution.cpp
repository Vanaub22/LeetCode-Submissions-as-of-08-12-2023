// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> not_present;
        unordered_map<int,int> umap;
        for(int i:nums)
        umap[i]=1;
        for(int i=1;i<=nums.size();i++)
        if(umap[i]!=1)
        not_present.push_back(i);
        return(not_present);
    }
};