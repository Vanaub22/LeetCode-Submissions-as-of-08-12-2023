// https://leetcode.com/problems/find-maximum-number-of-string-pairs

class Solution {
public:
    bool isValidPair(string& a, string& b){
        if(a.length()!=b.length()) return false;
        int n=a.length();
        for(int i=0;i<n;i++) if(a[i]!=b[n-i-1]) return false;
        return true;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size(),stringPairs=0;
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(isValidPair(words[i],words[j])) stringPairs++;
        return stringPairs;
    }
};