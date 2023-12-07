// https://leetcode.com/problems/decompress-run-length-encoded-list

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> decompressedList;
        for(int i=0;i<nums.size()/2;i++)
        freq[nums[2*i+1]]=nums[2*i];
        for(auto it:freq)
        for(int i=0;i<it.second;i++)
        decompressedList.push_back(it.first);
        reverse(decompressedList.begin(),decompressedList.end());
        return(decompressedList);
    }
};