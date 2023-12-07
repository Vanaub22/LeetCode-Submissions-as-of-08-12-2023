// https://leetcode.com/problems/decompress-run-length-encoded-list

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressedList;
        for(int i=0;i<nums.size()/2;i++)
        for(int j=0;j<nums[2*i];j++)
        decompressedList.push_back(nums[2*i+1]);
        return(decompressedList);
    }
};