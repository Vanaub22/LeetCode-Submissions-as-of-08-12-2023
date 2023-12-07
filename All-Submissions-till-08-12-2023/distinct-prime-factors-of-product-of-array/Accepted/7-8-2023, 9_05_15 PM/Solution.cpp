// https://leetcode.com/problems/distinct-prime-factors-of-product-of-array

class Solution {
public:
    void Sieve(vector<bool>& isPrime, int n){
        for(int i=2;i*i<=n;i++)
        if(isPrime[i]) for(int j=i*i;j<=n;j+=i) isPrime[j]=false;
    }
    int distinctPrimeFactors(vector<int> nums) {
        int n=nums.size(),m=*max_element(nums.begin(),nums.end());
        vector<bool> isPrime(m+1,true);
        unordered_set<int> primes;
        Sieve(isPrime,m);
        for(int num:nums)
        for(int i=2;i<=num;i++) if(num%i==0 && isPrime[i]) primes.insert(i);
        return primes.size();
    }
};