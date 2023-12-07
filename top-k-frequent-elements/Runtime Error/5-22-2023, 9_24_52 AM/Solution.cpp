// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    static bool compare(pair<int,int>& p1,pair<int,int>& p2){
        return(p1.second>=p2.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> topK;
        map<int,int> freq;
        for(int i:nums)
        freq[i]++;
        vector<pair<int,int>> entries(freq.begin(),freq.end());
        sort(entries.begin(),entries.end(),compare);
        int i=0;
        while(--k>=0 && i<entries.size())
        topK.push_back(entries[i++].first);
        return(topK);
    }
};