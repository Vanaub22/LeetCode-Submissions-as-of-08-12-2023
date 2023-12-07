// https://leetcode.com/problems/convert-to-base-2

class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string str="";
        while(n!=0)
        if(n%2){
            str+='1';
            n=(n-1)/(-2);
        }
        else{
            str+='0';
            n/=(-2);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};