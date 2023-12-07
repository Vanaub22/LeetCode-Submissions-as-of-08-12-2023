// https://leetcode.com/problems/longest-palindrome

class Solution {
public:
    int longestPalindrome(string s) {
        int pairs=0;
        bool odd=false;
        unordered_map<char,int> umap;
        for(char c:s)
        umap[c]++;
        for(auto it:umap){
        if(it.second%2==0)
        pairs+=(it.second/2);
        else
        odd=true;
        }
        return(odd?(pairs*2+1):(pairs*2));
    }
};