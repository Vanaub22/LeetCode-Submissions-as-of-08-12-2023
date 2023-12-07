// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),palindromeStart=0,palindromeEnd=0;
        // Caching / Memoizing intermediate results in a 2-D DP Array for O(1) checks
        bool memo[n][n]; 
        memset(memo,false,sizeof(memo));
        // Every single letter word is a Palindrome
        // Every two-letter word having the same letter is a Palindrome as well
        for(int i=0;i<n-1;i++) { 
            memo[i][i]=true;
            if(s[i]==s[i+1]) {
                memo[i][i+1]=true;
                palindromeStart=i,palindromeEnd=i+1;
            }
        }
        memo[n-1][n-1]=true;
        // The maximum difference between a pair of indices will be n-1
        for(int diff=n-1;diff>0;diff--) for(int start=0;start<n-diff;start++) {
            if(s[start]==s[start+diff] && memo[start+1][start+diff-1]) {
                memo[start][start+diff]=true;
                palindromeStart=start;
                palindromeEnd=start+diff;
            }
        }
        return s.substr(palindromeStart,palindromeEnd-palindromeStart+1); 
    }
};