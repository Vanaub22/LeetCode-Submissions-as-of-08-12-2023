// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefixProd=1,suffixProd=1,maxProd=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
            if(prefixProd==0) prefixProd=1;
            if(suffixProd==0) suffixProd=1;
            prefixProd*=nums[i];
            suffixProd*=nums[n-i-1];
            maxProd=max(maxProd,max(prefixProd,suffixProd));
        }
        return maxProd;
    }
};