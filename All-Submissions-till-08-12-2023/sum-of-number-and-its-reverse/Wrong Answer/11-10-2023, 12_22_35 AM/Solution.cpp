// https://leetcode.com/problems/sum-of-number-and-its-reverse

class Solution {
public:
    // Looking at the constraints, we can go for a Brute-Force Approach
    bool sumOfNumberAndReverse(int num) {
        for(int i=1;i<=num;i++) {
            string strNum=to_string(i),revStrNum=strNum;
            reverse(revStrNum.begin(),revStrNum.end());
            if(stoi(revStrNum)+stoi(strNum)==num) return true;
        }
        return false;
    }
};