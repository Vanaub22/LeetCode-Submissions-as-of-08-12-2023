// https://leetcode.com/problems/partition-array-according-to-given-pivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int pivot_occ=0;
        vector<int> modified;
        for(int i:nums) if(i==pivot) pivot_occ++;
        else if(i<pivot) modified.push_back(i);
        vector<int> pivots(pivot_occ,pivot);
        modified.insert(modified.end(),pivots.begin(),pivots.end());
        for(int i:nums) if(i>pivot) modified.push_back(i);
        return modified;
    }
};