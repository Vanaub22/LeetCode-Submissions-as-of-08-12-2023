// https://leetcode.com/problems/repeated-dna-sequences

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> dna_sequences;
        int n=s.length();
        if(n<10) return {};
        vector<string> repeated;
        for(int i=0;i<n-9;i++) dna_sequences[s.substr(i,10)]++;
        for(auto seq_freq:dna_sequences) if(seq_freq.second>1) repeated.push_back(seq_freq.first);
        return repeated; 
    }
};