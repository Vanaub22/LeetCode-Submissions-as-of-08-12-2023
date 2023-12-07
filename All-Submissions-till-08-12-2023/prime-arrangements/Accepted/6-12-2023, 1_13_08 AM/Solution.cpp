// https://leetcode.com/problems/prime-arrangements

class Solution {
public:
    long long fact(int n){
        if(n<=1)
        return(1);
        return((n*fact(n-1)%(1000000007))%(1000000007));
    }
    int numPrimeArrangements(int n) {
        int primes=0;
        // using the Sieve of Eratosthenes for determining Primes since 1<=n<=100
        bool* isPrime=new bool[n+1];
        memset(isPrime,true,sizeof(bool)*(n+1));
        for(int i=2;i*i<=n;i++)
        if(isPrime[i])
        for(int j=i*i;j<=n;j+=i)
        isPrime[j]=false;
        // to find the number of primes smaller than or equal to n
        for(int i=2;i<=n;i++)
        if(isPrime[i])
        primes++;
        return((fact(primes)*fact(n-primes))%(1000000007));
    }
};