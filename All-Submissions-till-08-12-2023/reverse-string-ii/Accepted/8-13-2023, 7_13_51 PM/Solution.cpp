// https://leetcode.com/problems/reverse-string-ii

class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length(),i=0;
        while(i+2*k<=n){
            reverse(s.begin()+i,s.begin()+i+k);
            i+=2*k;
        }
        if(n-i<k) reverse(s.begin()+i,s.end());
        else reverse(s.begin()+i,s.begin()+i+k);
        return s;
    }
};