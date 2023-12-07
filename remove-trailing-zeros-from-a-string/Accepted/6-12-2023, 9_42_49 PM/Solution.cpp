// https://leetcode.com/problems/remove-trailing-zeros-from-a-string

class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.length(),trailingZeroes=0;
        for(int i=n-1;i>=0;i--)
        if(num[i]=='0')
        trailingZeroes++;
        else
        break;
        return(num.substr(0,n-trailingZeroes));
    }
};