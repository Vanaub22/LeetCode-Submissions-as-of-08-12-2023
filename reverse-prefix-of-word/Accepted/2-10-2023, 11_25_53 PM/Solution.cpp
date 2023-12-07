// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos;
        for(int i=0;i<word.size();i++)
        if(word[i]==ch){
            pos=i+1;
            break;
        }
        reverse(word.begin(),word.begin()+pos);
        return(word);
    }
};