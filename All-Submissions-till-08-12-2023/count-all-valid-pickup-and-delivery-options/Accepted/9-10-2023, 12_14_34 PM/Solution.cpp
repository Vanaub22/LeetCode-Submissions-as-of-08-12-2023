// https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options

class Solution {
public:
    int countOrders(int n) {
        long long cnt=1;
        for(int i=2;i<=n;i++) cnt=(cnt*(2*i-1)*i)%(long long)(1e9+7);
        return cnt;
    }
};