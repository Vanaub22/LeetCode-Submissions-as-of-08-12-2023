// https://leetcode.com/problems/find-the-difference-of-two-arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1,set2;
        unordered_map<int,int> umap1,umap2;
        vector<int> a,b;
        for(int i:nums1)
        set1.insert(i);
        for(int i:nums2)
        set2.insert(i);
        for(int i:set1)
        umap1[i]++;
        for(int i:set2)
        umap2[i]++;
        for(int i:set1)
        if(umap2[i]==0)
        a.push_back(i);
        for(int i:set2)
        if(umap1[i]==0)
        b.push_back(i);
        return {a,b};
    }
};