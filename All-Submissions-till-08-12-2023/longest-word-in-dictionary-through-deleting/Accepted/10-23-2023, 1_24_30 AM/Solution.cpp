// https://leetcode.com/problems/longest-word-in-dictionary-through-deleting

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string longest="";
        for(string& word:dictionary)
        if(longest.size()<word.size() || (longest.size()==word.size() && word<longest))
        longest=isSubsequence(word,s)?word:longest;
        return longest;
    }
    // To check if the substring can be formed by deleting some characters from super string
    bool isSubsequence(string& sub, string& super) {
        int i=0,j=0,n=sub.length(),m=super.length();
        // If length of substring is greater than that of super string, it cannot be formed
        if(n>m) return false;
        while(i<n && j<m) {
            if(sub[i]==super[j]) i++;
            j++;
        }
        return i==n;
    }
};