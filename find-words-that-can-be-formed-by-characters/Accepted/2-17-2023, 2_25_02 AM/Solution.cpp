// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters

class Solution {
public:
    bool canBeFormed(string word,string chars){
        unordered_map<int,int> in_word,in_str;
        for(char ch:word)
        in_word[ch]++;
        for(char ch:chars)
        in_str[ch]++;
        unordered_map<int,int>::iterator it=in_word.begin();
        while(it!=in_word.end()){
            if(in_str[it->first]==0||in_str[it->first]<it->second)
            return(false);
            it++;
        }
        return(true);
    }
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        for(string str:words)
        if(canBeFormed(str,chars))
        res+=str.length();
        return(res);
    }
};