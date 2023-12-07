// https://leetcode.com/problems/valid-palindrome-ii

class Solution {
public:
    bool isPalindrome(string s){
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
            return(false);
        }
        return(true);
    }
    bool validPalindrome(string s) {
        if(isPalindrome(s))
        return(true);
        int n=s.length();
        for(int i=0;i<n;i++){
            string removed=s.substr(0,i)+s.substr(i+1,n-i);
            if(isPalindrome(removed))
            return(true);
        }
        return(false);
    }
};