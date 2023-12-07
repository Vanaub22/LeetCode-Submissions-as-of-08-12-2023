// https://leetcode.com/problems/determine-if-string-halves-are-alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        return isAlike(s.substr(0,s.length()/2),s.substr(s.length()/2));
    }
    bool isAlike(string a, string b){
        int vowels=0;
        for(char c:a) if(isVowel(c)) vowels++;
        for(char c:b) if(isVowel(c)) vowels--;
        return vowels==0;
    }
    bool isVowel(char c){
        c=tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
};