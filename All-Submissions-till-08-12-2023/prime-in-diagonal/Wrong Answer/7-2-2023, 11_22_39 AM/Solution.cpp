// https://leetcode.com/problems/prime-in-diagonal

class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),maxPrime=INT_MIN;
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])) maxPrime=max(maxPrime,nums[i][i]);
            if(isPrime(nums[i][n-i-1])) maxPrime=max(maxPrime,nums[i][n-i-1]);
        }
        return maxPrime;
    }
};