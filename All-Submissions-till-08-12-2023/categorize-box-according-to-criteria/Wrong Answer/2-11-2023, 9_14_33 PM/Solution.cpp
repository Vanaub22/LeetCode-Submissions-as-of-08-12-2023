// https://leetcode.com/problems/categorize-box-according-to-criteria

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        double L=(double)length,W=(double)width,H=(double)height;
        bool bulky=(L>=10000.0 || W>=10000.0 || H>=10000.0),heavy=(mass>=100 || (length/100)*(width/100)*(height/100)>=1000.0);
        return(heavy?(bulky?("Both"):("Heavy")):(bulky?("Bulky"):("Neither")));
    }
};