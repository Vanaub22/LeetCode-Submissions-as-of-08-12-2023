// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        if(sentence.substr(0,searchWord.length())==searchWord)
        return(1);
        int word=1;
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' '){
            word++;
            if(sentence.substr(i+1,searchWord.length())==searchWord)
            return(word);
            }
        }
        return(-1);   
    }
};