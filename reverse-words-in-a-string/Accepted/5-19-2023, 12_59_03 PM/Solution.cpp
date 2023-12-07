// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        vector<pair<int,int>> word_indices;
        int word_start,n;
        string reversed="";
        s=" "+s+" ";
        for(int i=1;i<s.size();i++){
            if(s[i-1]==' ' && s[i]!=' ')
            word_start=i;
            if(s[i-1]!=' ' && s[i]==' ')
            word_indices.push_back({word_start,i});
        }  
        for(auto it:word_indices)
        words.push_back(s.substr(it.first,it.second-it.first));
        n=words.size();
        reversed+=words[n-1];
        for(int i=n-2;i>=0;i--)
        reversed+=" "+words[i];
        return(reversed);
    }
};