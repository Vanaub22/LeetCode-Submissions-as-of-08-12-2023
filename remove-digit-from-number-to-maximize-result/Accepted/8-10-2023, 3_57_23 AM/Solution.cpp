// https://leetcode.com/problems/remove-digit-from-number-to-maximize-result

class Solution {
public:
    string removeDigit(string number, char digit) {
        int n=number.length();
        string max_value="";
        for(int i=0;i<n;i++) 
        if(number[i]==digit) max_value=max(max_value,number.substr(0,i)+number.substr(i+1));
        return max_value;
    }
};