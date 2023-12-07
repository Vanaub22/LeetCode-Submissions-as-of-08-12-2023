// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

class Solution {
public:
    int countElements(vector<int>& nums) {
        map<int,int> freq;
        for(int i:nums) freq[i]++;
        vector<pair<int,int>> freq_pairs(freq.begin(),freq.end());
        int n=freq_pairs.size(),count=0;
        for(int i=1;i<n-1;i++) count+=freq_pairs[i].second;
        return count;
    }
};