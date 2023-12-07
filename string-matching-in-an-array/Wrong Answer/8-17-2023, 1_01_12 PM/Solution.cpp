// https://leetcode.com/problems/string-matching-in-an-array

class Solution {
public:
    bool isSubstr(string word,string sub){
        for(int i=0;i<=word.length()-sub.length();i++)
        if(word.substr(i,sub.length())==sub) return true;
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> subs;
        for(int i=0;i<words.size();i++)
        for(int j=0;j<words.size();j++)
        if(j!=i && words[j].length()>=words[i].length() && isSubstr(words[j],words[i])) subs.push_back(words[i]);
        return subs;
    }
};