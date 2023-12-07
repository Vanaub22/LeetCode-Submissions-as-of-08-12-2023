// https://leetcode.com/problems/top-k-frequent-words

class Solution {
public:
    static bool comp(pair<string,int>& a, pair<string,int>& b){
        return a.second==b.second?a.first<b.first:a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string,int> wordFreq;
        for(string word:words) wordFreq[word]++;
        vector<pair<string,int>> wordFreqPairs(wordFreq.begin(),wordFreq.end());
        sort(wordFreqPairs.begin(),wordFreqPairs.end(),comp);
        for(int i=0;i<k;i++) ans.push_back(wordFreqPairs[i].first);
        return ans;
    }
};