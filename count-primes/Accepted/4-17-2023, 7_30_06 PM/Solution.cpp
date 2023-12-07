// https://leetcode.com/problems/count-primes

class Solution {
public:
    //using the Sieve of Eratosthenes Approach
    int countPrimes(int n) {
        int primes=0;
        vector<bool> isPrime(n);
        fill(isPrime.begin(),isPrime.end(),true);
        for(int i=2;i<n&&i*i<n;i++) //checking for overflow
        if(isPrime[i])
        for(int j=i*i;j<n;j+=i)
        isPrime[j]=false;
        for(int i=2;i<n;i++)
        if(isPrime[i])
        primes++;
        return(primes);
    }
};