// https://leetcode.com/problems/excel-sheet-column-number

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length(),colNo=0;
        for(int i=n-1;i>=0;i--)
        colNo+=pow(26,n-1-i)*((columnTitle[i]-'A')+1);
        return(colNo);
    }
};