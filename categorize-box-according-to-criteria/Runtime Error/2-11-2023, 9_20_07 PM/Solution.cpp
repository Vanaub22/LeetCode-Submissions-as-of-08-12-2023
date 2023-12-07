// https://leetcode.com/problems/categorize-box-according-to-criteria

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        //double L=(double)length,W=(double)width,H=(double)height;
        bool bulky=((length>=10000 || width>=10000 || height>=10000) || (long long)(length*width*height)>=1e9);
        bool heavy=(mass>=100);
        return(heavy?(bulky?("Both"):("Heavy")):(bulky?("Bulky"):("Neither")));
    }
};