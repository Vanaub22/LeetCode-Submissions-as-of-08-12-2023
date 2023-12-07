// https://leetcode.com/problems/sort-vowels-in-a-string

class Solution {
public:
    bool isVowel(char c){
        return c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u';
    }
    string sortVowels(string s) {
        int n=s.length(),v_idx=0;
        vector<char> vowels;
        for(int i=0;i<n;i++)
        if(isVowel(s[i])){
            vowels.push_back(s[i]);
            s[i]='*';
        }
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<n;i++) if(s[i]=='*') s[i]=vowels[v_idx++];
        return s;
    }
};