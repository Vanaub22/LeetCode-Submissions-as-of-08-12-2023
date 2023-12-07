// https://leetcode.com/problems/nth-digit

class Solution {
public:
    int findNthDigit(int n) {
        string sequence="";
        for(int i=1;i<=n;i++)
        sequence+=to_string(i);
        return(sequence[n-1]-'0');
    }
};