// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        for(double i=0.0;i<num;i++){
            if(i*i==num)
            return(true);
        }
        return(false);
    }
};