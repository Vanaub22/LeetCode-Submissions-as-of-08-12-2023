// https://leetcode.com/problems/reverse-string-ii

class Solution {
public:
    string reverseStr(string s, int k) {
        int left=s.length()%(2*k);
        string left_str=s.substr(0,s.length()-left),right_str=s.substr(s.length()-left);
        if(right_str.length()<k) reverse(right_str.begin(),right_str.end());
        else reverse(right_str.begin(),right_str.begin()+k);
        for(int i=0;i<left_str.length()-k;i+=k) reverse(left_str.begin()+i,left_str.begin()+i+k);
        return(left_str+right_str);
    }
};