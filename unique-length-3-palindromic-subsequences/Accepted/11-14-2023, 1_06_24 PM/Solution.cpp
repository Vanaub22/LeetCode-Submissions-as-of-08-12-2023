// https://leetcode.com/problems/unique-length-3-palindromic-subsequences

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count=0;
        unordered_set<char> charSet;
        // Finding out the unique characters in s
        for(char c:s) charSet.insert(c);
        for(char c:charSet) {
            // For a Palindromic Subsequence of Length 3, the first and last letter must be the same
            // Any other unique character in between will do
            auto first_occ=s.find(c),last_occ=s.find_last_of(c);
            if(first_occ!=string::npos && first_occ!=last_occ) {
                string inBetween=s.substr(first_occ+1,last_occ-first_occ-1);
                count+=unordered_set<char>(inBetween.begin(),inBetween.end()).size();
            }
        }
        return count;
    }
};