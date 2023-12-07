// https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options

class Solution {
public:
    long long fact(int n){
        long long factorial=1;
        for(int i=2;i<=n;i++) factorial*=i;
        return factorial; 
    }
    int countOrders(int n) {
        return (fact(2*n)/(long long)pow(2,n))%(long long)(1e9+7);
    }
};