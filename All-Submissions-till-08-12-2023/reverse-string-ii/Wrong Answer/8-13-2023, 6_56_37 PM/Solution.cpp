// https://leetcode.com/problems/reverse-string-ii

class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        for(int i=0;i<n;i+=(2*k)) reverse(s.begin()+i,s.begin()+i+k);
        return s;
    }
};