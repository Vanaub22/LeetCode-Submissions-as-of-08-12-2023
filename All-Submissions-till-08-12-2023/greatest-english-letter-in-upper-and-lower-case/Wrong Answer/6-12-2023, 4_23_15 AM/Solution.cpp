// https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case

class Solution {
public:
    string greatestLetter(string s) {
        set<char> letters;
        for(char c:s)
        letters.insert(c);
        for(int i=90;i>=65;i--){
            char c=(char)i;
            if(letters.find(c)!=letters.end() && letters.find(tolower(c))!=letters.end())
            return(to_string(c));
        }
        return("");
    }
};