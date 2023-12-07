// https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers

class Solution {
public:
    bool no_zero(int n){
        string numstr=to_string(n);
        for(char c:numstr)
        if(c=='0')
        return(false);
        return(true);
    }
    vector<int> getNoZeroIntegers(int n) {
       int i;
       for(i=1;i<n;i++)
       if(no_zero(i) && no_zero(n-i))
       break;
       return {i,n-i}; 
    }
};