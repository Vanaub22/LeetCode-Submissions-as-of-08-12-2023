// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
public:
    bool inOrderLexCodes(string& a, string& b, unordered_map<char,int>& order){
        int n=min(a.size(),b.size());
        for(int i=0;i<n;i++) 
        if(order[a[i]]>order[b[i]]) return false;
        else if(order[a[i]]<order[b[i]]) return true;
        return a.size()<=b.size();
    }
    bool isAlienSorted(vector<string>& words, string dictionary) {
        unordered_map<char,int> order;
        int n=dictionary.length();
        for(int i=0;i<n;i++) order[dictionary[i]]=i;
        n=words.size();
        for(int i=0;i<n-1;i++) if(!inOrderLexCodes(words[i],words[i+1],order)) return false;
        return true;
    }
};