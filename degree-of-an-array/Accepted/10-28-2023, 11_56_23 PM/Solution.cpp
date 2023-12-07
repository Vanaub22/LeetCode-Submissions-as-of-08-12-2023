// https://leetcode.com/problems/degree-of-an-array

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums) freq[i]++;
        int maxFreq=-1;
        vector<int> modes;
        for(auto& it:freq) { 
            if(it.second>maxFreq) {
                maxFreq=it.second;
                modes.clear();
                modes.push_back(it.first);
            }
            else if(it.second==maxFreq) {
                modes.push_back(it.first);
            }
        }
        int shortestSubLength=nums.size();
        for(int mode:modes) {
            int subarrayLength=findLastOccurrence(nums,mode)-(find(nums.begin(),nums.end(),mode)-nums.begin())+1;
            if(subarrayLength<shortestSubLength) shortestSubLength=subarrayLength;
        }
        return shortestSubLength;
    }
    int findLastOccurrence(vector<int>& nums, int x) {
        int i=nums.size()-1;
        for(;i>=0;i--) if(nums[i]==x) return i;
        return 0;
    }
};