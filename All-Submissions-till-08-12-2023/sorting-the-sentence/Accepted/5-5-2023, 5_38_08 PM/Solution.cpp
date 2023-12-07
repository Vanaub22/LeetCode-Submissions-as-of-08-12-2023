// https://leetcode.com/problems/sorting-the-sentence

class Solution {
public:
    static bool comp(string a,string b){
        return(a[a.length()-1]<b[b.length()-1]);
    }
    string sortSentence(string s) {
        s+=' ';
        vector<string> words;
        int start=0;
        for(int i=0;i<s.length();i++)
        if(s[i]==' '){
            words.push_back(s.substr(start,i-start));
            start=i+1;
        }
        sort(words.begin(),words.end(),comp);
        s=words[0].substr(0,words[0].length()-1);
        for(int i=1;i<words.size();i++)
        s+=(" "+words[i].substr(0,words[i].length()-1));
        return(s);    
    }
};