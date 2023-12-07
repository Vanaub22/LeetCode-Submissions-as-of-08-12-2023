// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        set<string> uniqueWords;
        unordered_map<char,string> umap;
        s=" "+s+" ";
        int prev=1;
        for(int i=2;i<s.length();i++)
        if(s[i]==' '){
            words.push_back(s.substr(prev,i-prev));
            prev=i+1;
        }
        if(words.size()!=pattern.length())
        return(false);
        for(int i=0;i<pattern.length();i++)
        if(umap[pattern[i]]=="")
        umap[pattern[i]]=words[i];
        else
        if(umap[pattern[i]]!=words[i])
        return(false);
        for(auto it:umap){
            if(uniqueWords.find(it.second)!=uniqueWords.end())
            return(false);
            uniqueWords.insert(it.second);
        }
        return(true);
    }
};