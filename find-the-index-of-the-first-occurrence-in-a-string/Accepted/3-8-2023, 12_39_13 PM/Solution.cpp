// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle)
        return(0);
        if(needle.length()>=haystack.length())
        return(-1);
        for(int i=0;i<=haystack.length()-needle.length();i++)
        if(needle==haystack.substr(i,needle.length()))
        return(i);
        return(-1);            
        }
};