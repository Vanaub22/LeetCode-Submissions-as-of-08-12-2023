// https://leetcode.com/problems/longest-word-in-dictionary

class Solution {
public:
    string longestWord(vector<string>& wordset) {
        string res="";
        for(string word:wordset){
            int n=word.length();
            bool flag=false;
            if(n>res.length() || (n==res.length() && word<res)){
                flag=true;
                for(int i=1;i<n;i++)
                if(find(wordset.begin(),wordset.end(),word.substr(0,i))==wordset.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)
            res=word;
        }
        return(res);
    }
};