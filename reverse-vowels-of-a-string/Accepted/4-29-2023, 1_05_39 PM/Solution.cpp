// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    bool isVowel(char c){
        return(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
    }
    string reverseVowels(string s) {
        vector<char> vowels;
        int j=0;
        for(char c:s)
        if(isVowel(c))
        vowels.push_back(c);
        for(int i=0;i<s.length();i++)
        if(isVowel(s[i])){
            s[i]=vowels[vowels.size()-j-1];
            j++;
        }
        return(s);
    }
};