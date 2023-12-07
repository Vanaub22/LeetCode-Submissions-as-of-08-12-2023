// https://leetcode.com/problems/odd-string-difference

class Solution {
public:
    vector<int> diffArray(string s){
        vector<int> diffArray;
        for(int i=0;i<s.length()-1;i++)
        diffArray.push_back((int)(s[i+1]-s[i]));
        return(diffArray);
    }
    string oddString(vector<string>& words) {
     vector<int> dA=diffArray(words[0]);
     for(string s:words)
     if(diffArray(s)!=dA)
     return(s);
     return("");
    }
};