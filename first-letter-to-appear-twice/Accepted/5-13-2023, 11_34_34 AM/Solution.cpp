// https://leetcode.com/problems/first-letter-to-appear-twice

class Solution {
public:
    char repeatedCharacter(string s) {
        char first='a';
        set<char> setchar;
        for(char c:s){
          if(find(setchar.begin(),setchar.end(),c)!=setchar.end()){
            first=c;
            break;
          }
          else
          setchar.insert(c);
        }
        return(first);
    }
};