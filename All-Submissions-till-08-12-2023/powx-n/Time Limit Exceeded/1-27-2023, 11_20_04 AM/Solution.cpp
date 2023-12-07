// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        double result=1.0;
        if(n>0){
            while(n-->0)
            result*=x;
        }
        else if(n==0||x==1.0)
        result=1.0;
        else{
            while(n++<0)
            result/=x;
        }
        return(result);
    }
};