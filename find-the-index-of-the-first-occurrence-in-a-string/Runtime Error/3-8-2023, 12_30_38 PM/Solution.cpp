// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<=haystack.length()-needle.length();i++)
        if(needle==haystack.substr(i,needle.length()))
        return(i);
        return(-1);            
        }
};