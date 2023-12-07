// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters

class Solution {
public:
    bool canBeFormed(string word, unordered_map<char,int>& in_str){
        unordered_map<char,int> in_word;
        for(char ch:word)
        in_word[ch]++;
        unordered_map<char,int>::iterator it=in_word.begin();
        while(it!=in_word.end()){
            if(in_str[it->first]==0||in_str[it->first]<it->second)
            return(false);
            it++;
        }
        return(true);
    }
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        unordered_map<char,int> in_str;
        for(char ch:chars)
        in_str[ch]++;
        for(string str:words)
        if(canBeFormed(str,in_str))
        res+=str.length();
        return(res);
    }
};