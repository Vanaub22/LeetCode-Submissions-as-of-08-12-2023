// https://leetcode.com/problems/categorize-box-according-to-criteria

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=(length*width*height>=1000000000 || length>=10000 || width>=10000 || height>=10000),heavy=(mass>=100);
        return(heavy?(bulky?("Both"):("Heavy")):(bulky?("Bulky"):("Neither")));
    }
};