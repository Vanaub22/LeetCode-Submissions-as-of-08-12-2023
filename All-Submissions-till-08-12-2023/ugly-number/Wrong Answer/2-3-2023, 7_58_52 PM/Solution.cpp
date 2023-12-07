// https://leetcode.com/problems/ugly-number

class Solution {
public:
    bool isPrime(int num){
        if(num==1)
        return(false);
        for(int i=2;i<num;i++)
        if(num%i==0)
        return(false);
        return(true);
    }
    bool isUgly(int n) {
        for(int i=4;i<n;i++){
            if(n%i==0 && isPrime(i) && i!=5)
            return(false);
        }
        return(true);
    }
};