// https://leetcode.com/problems/sort-array-by-increasing-frequency

class Solution {
public:
    static bool comp(pair<int,int>& a, pair<int,int>& b){
        if(a.second==b.second)
        return(a.first>b.first);
        return(a.second<b.second);
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums)
        freq[i]++;
        vector<pair<int,int>> freqPairs(freq.begin(),freq.end());
        sort(freqPairs.begin(),freqPairs.end(),comp);
        nums.clear();
        for(auto p:freqPairs)
        for(int i=0;i<p.second;i++)
        nums.push_back(p.first);
        return(nums);
    }
};