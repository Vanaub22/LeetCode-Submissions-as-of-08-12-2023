// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_map<int,int> umap;
        for(int i:nums1)
        umap[i]++;
        for(int i:nums2)
        if(umap[i]>0){
        intersection.push_back(i);
        umap[i]--;
        }
        return(intersection);
    }
};