// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    int vowelCount(string str){
        int vowels=0;
        for(char c:str)
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        vowels++;
        return(vowels);
    }
    int maxVowels(string s, int k) {
        int max_vowel=-1;
        for(int i=0;i<s.length()-k;i++){
            max_vowel=max(max_vowel,vowelCount(s.substr(i,k)));
            if(max_vowel==3)
            break;
        }
        return(max_vowel);
    }
};