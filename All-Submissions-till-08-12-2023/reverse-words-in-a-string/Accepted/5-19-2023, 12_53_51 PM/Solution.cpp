// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        vector<pair<int,int>> word_indices;
        pair<int,int> word_index;
        string reversed="";
        s=" "+s+" ";
        for(int i=1;i<s.size();i++){
            if(s[i-1]==' ' && s[i]!=' ')
            word_index.first=i;
            if(s[i-1]!=' ' && s[i]==' '){
                word_index.second=i;
                word_indices.push_back(word_index);
            }
        }  
        for(auto it:word_indices)
        words.push_back(s.substr(it.first,it.second-it.first));
        reversed+=words[words.size()-1];
        for(int i=words.size()-2;i>=0;i--)
        reversed+=" "+words[i];
        return(reversed);
    }
};