// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> intersection;
        unordered_map<int,int> umap;
        for(int i:nums1)
        umap[i]++;
        for(int i:nums2)
        if(umap[i]>0)
        intersection.insert(i);
        vector<int> res(intersection.begin(),intersection.end());
        return(res);
    }
};