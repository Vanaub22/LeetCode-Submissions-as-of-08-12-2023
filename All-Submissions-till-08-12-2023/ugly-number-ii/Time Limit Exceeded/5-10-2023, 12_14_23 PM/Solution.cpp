// https://leetcode.com/problems/ugly-number-ii

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0 || n==1)
        return((n==1)?(true):(false));
        while(n%2==0 || n%3==0 || n%5==0){
            if(n%2==0)
            n/=2;
            if(n%3==0)
            n/=3;
            if(n%5==0)
            n/=5;
        }
        return((n==1)?(true):(false));
    }
    int nthUglyNumber(int n) {
        int count=0,num=0;
        while(true){
            if(isUgly(++num))
            count++;
            if(count==n)
            return(num);
        }
    }
};