// https://leetcode.com/problems/partition-array-according-to-given-pivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int pivot_occ=0;
        vector<int> modified;
        for(int i:nums) if(i==pivot) pivot_occ++;
        else if(i<pivot) modified.push_back(i);
        for(int i=0;i<pivot_occ;i++) modified.push_back(pivot);
        for(int i:nums) if(i>pivot) modified.push_back(i);
        nums=modified; // Since problem statement says Rearrangement
        return nums;
    }
};