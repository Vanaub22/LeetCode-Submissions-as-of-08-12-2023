// https://leetcode.com/problems/excel-sheet-column-title

class Solution {
public:
    string convertToTitle(int col) {
        string title="";
        while(col>0){
            col-=1;
            title=(char)(65+(col%26))+title;
            col/=26;
        }
        return(title);
    }
};