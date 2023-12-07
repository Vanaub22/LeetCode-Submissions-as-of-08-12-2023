// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    bool isVowel(char c){
        return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    int maxVowels(string s, int k) {
        int max_vowels,vowels=0;
        for(int i=0;i<k;i++)
        if(isVowel(s[i]))
        vowels++;
        max_vowels=vowels;
        for(int i=k;i<s.length();i++){
            if(isVowel(s[i-k]))
            --vowels;
            if(isVowel(s[i]))
            vowels++;
            max_vowels=max(vowels,max_vowels);
            if(max_vowels==k)
            break;
        }
        return(max_vowels);
    }
};