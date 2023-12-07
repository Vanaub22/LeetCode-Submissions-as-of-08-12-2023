// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod_sign=1;
        for(int i:nums){
            if(i<0)
            prod_sign*=(-1);
            else if(i==0)
            return(0);
        }
        return(prod_sign);
    }
};