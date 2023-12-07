// https://leetcode.com/problems/distinct-prime-factors-of-product-of-array

class Solution {
public:
    bool isPrime(int num){
        int factor=0;
        if(num==1 || num==0)
        return(false);
        else{
            for(int i=1;i<=num/2;i++)
            if(num%i==0)
            factor++;
        }
        return((factor==1)?(true):(false));
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int prod=1,pf=0;
        for(int i:nums)
        prod*=i;
        for(int i=1;i<prod;i++)
        if(prod%i==0 && isPrime(i))
        pf++;
        return(pf);
    }
};