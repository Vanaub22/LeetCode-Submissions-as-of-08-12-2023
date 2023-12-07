// https://leetcode.com/problems/largest-3-same-digit-number-in-string

class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length(),ch=INT_MIN;
        string ans="";
        for(int i=0;i<n-2;i++)
        if(num[i]==num[i+1] && num[i+1]==num[i+2] && num[i]>ch){
            ch=num[i];
            ans=string(3,ch);
        }
        return ans;
    }
};