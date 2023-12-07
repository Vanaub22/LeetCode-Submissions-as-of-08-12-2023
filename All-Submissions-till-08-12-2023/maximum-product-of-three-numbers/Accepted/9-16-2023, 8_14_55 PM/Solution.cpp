// https://leetcode.com/problems/maximum-product-of-three-numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1=INT_MAX,min2=min1,max1=INT_MIN,max2=max1,max3=max1;
        for(int i:nums){
            if(i<min1){
                min2=min1;
                min1=i;
            }
            else if(i<min2) min2=i;
            if(i>max1){
                max3=max2;
                max2=max1;
                max1=i;
            }
            else if(i>max2){
                max3=max2;
                max2=i;
            }
            else if(i>max3) max3=i;
        }
        return max(min1*min2*max1,max1*max2*max3);
    }
};