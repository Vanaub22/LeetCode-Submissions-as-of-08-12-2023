// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]))
            s[i]=toupper(s[i]);
            else if(isdigit(s[i]))
            continue;
            else{
            s.erase(i);
            i--;
            }
        }
        string copy=s;
        reverse(s.begin(),s.end());
        return(copy==s);
    }
};