// https://leetcode.com/problems/prime-in-diagonal

class Solution {
public:
    //using the Sieve of Eratosthenes to find primes in O(sqrt(n)) time
    void Sieve(vector<bool> isPrime){
        for(int i=2;i<isPrime.size();i++){
            if(isPrime[i])
            for(int j=i*i;j<isPrime.size();j++)
            isPrime[j]=false;
        }
    }
    int diagonalPrime(vector<vector<int>>& m) {
        set<int> diagonal_elements;
        int n=m.size();
        for(int i=0;i<n;i++){
            diagonal_elements.insert(m[i][i]);
            diagonal_elements.insert(m[i][n-i-1]);
        }
        set<int>::iterator it=diagonal_elements.end();
        vector<bool> isPrime(*(it)+1,true);
        Sieve(isPrime); 
        while(--it!=diagonal_elements.begin()){
            if(isPrime[*it])
            break;
        }
        return(*it);
    }
};