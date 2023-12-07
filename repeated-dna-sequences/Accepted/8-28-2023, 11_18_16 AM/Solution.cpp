// https://leetcode.com/problems/repeated-dna-sequences

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> dna_sequences;
        int n=s.length();
        if(n<10) return {};
        vector<string> repeated;
        for(int i=0;i<n-9;i++){
            string sequence=s.substr(i,10);
            dna_sequences[sequence]++;
            if(dna_sequences[sequence]==2) repeated.push_back(sequence);
        }
        return repeated; 
    }
};