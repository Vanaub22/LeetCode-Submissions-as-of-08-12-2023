// https://leetcode.com/problems/base-7

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        // Converting using the Long Division Method
        int x=abs(num);
        string base7="";
        while(x>0) {
            base7+=to_string(x%7);
            x/=7;
        }
        reverse(base7.begin(),base7.end());
        return num>0?base7:"-"+base7;
    }
};