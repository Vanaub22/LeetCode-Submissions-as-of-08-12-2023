// https://leetcode.com/problems/degree-of-an-array

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        // Finding out the frequencies for each element
        for(int i:nums) freq[i]++;
        int n=nums.size(),maxFreq=-1,shortestSubLength=n; // The maximum length subarray will be the array itself;
        vector<int> modes; // To store all the elements with the same maximum frequency
        // Finding out the elements with the maximum frequency
        for(auto& it:freq) { 
            if(it.second>maxFreq) {
                maxFreq=it.second;
                modes.clear();
                modes.push_back(it.first);
            }
            else if(it.second==maxFreq) modes.push_back(it.first);
        }
        // Finding the shortest among valid subarrays having the same degree as the actual array
        for(int& mode:modes) {
            int subarrayLength=findLastOccurrence(nums,mode,n)-(find(nums.begin(),nums.end(),mode)-nums.begin())+1;
            if(subarrayLength<shortestSubLength) shortestSubLength=subarrayLength;
        }
        return shortestSubLength;
    }
    // Helper function to find out the last occurrence of an element in the array
    int findLastOccurrence(vector<int>& nums, int x, int n) {
        int i=n-1;
        for(;i>=0;i--) if(nums[i]==x) return i;
        return 0;
    }
};