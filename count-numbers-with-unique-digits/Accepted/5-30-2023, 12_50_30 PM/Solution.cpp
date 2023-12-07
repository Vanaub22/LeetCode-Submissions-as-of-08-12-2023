// https://leetcode.com/problems/count-numbers-with-unique-digits

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int *table=new int[n+1];
        table[0]=1;
        for(int i=1;i<=n;i++){
            table[i]=9;
            for(int j=0;j<=i-2;j++)
            table[i]*=(9-j);
            table[i]+=table[i-1];
        }
        return(table[n]);
    }
};