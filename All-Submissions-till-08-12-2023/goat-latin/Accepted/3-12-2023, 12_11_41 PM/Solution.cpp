// https://leetcode.com/problems/goat-latin

class Solution {
public:
    string a_suffix(int n){
        string suffix="";
        while(n>0){
        suffix+='a';
        n--;
        }
        return(suffix);
    }
    bool isVowel(char c){
        if(c<97)
        c+=32;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return(true);
        return(false);
    }
    string toGoatLatin(string sentence) {
        string word;
        int pos=0;
        string result="";
        stringstream ss(sentence);
        while(ss>>word){
            pos++;
            if(isVowel(word[0]))
            result+=(word+"ma"+a_suffix(pos)+" ");
            else
            result+=(word.substr(1,word.length()-1)+word[0]+"ma"+a_suffix(pos)+" ");
        }
        return(result.substr(0,result.length()-1));
    }
};