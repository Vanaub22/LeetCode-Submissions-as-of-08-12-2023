// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        long long ln=n>0?n:-1.0*n;
        double ans=1.0;
        while(ln)
        if(ln%2){
            ans*=x;
            ln--;
        }
        else{
            x*=x;
            ln/=2;
        }
        return n>0?ans:1/ans;
    }
};