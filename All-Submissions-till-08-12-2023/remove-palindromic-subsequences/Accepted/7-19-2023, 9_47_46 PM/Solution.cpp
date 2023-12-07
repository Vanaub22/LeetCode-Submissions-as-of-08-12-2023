// https://leetcode.com/problems/remove-palindromic-subsequences

class Solution {
public:
    int removePalindromeSub(string s) {
        string copy=s;
        reverse(s.begin(),s.end());
        return copy==s?1:2;
    }
};