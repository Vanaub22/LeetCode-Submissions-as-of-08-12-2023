// https://leetcode.com/problems/top-k-frequent-words

class Solution {
public:
    static bool comp(pair<string,int>& a, pair<string,int>& b){
        if(a.second==b.second){
            for(int i=0;i<min(a.first.size(),b.first.size());i++)
            if(a.first[i]<b.first[i]) return true;
            else if(b.first[i]<a.first[i]) return false;
            else continue;
            return a.first.size()<b.first.size();
        }
        return a.second>b.second;
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