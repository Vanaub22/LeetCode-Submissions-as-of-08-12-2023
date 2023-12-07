// https://leetcode.com/problems/prime-in-diagonal

class Solution {
public:
    //using the Sieve of Eratosthenes to find primes in O(sqrt(n)) time
    void Sieve(vector<bool>& isPrime){
        for(int i=2;i<isPrime.size();i++){
            if(isPrime[i])
            for(int j=i*i;j<isPrime.size();j++)
            isPrime[j]=false;
        }
    }
    int diagonalPrime(vector<vector<int>>& m) {
        set<int> diag;
        int n=m.size();
        for(int i=0;i<n;i++){
            diag.insert(m[i][i]);
            diag.insert(m[i][n-i-1]);
        }
        vector<bool> isPrime(n*n+1,true);
        Sieve(isPrime);
        for(auto it=diag.rbegin();it!=diag.rend();++it){
            if(isPrime[*it])
            return(*it);
        }
        return(0);
    }
};