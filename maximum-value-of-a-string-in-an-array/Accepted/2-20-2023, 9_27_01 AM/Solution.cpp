// https://leetcode.com/problems/maximum-value-of-a-string-in-an-array

class Solution {
public:
    bool isNumeric(string s){
        for(char c:s)
        if(!isdigit(c))
        return(false);
        return(true);
    }
    int maximumValue(vector<string>& strs) {
     int val,maxVal=INT_MIN;
     for(string s:strs){
         val=isNumeric(s)?stoi(s):s.length();
         maxVal=max(maxVal,val);
     }
     return(maxVal);   
    }
};