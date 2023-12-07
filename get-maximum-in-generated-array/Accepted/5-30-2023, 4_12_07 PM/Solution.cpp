// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0||n==1)
        return(n);
        int* nums=new int[n+1],maxgen=INT_MIN;
        nums[0]=0,nums[1]=1;
        for(int i=2;i<=n;i++){
            nums[i]=i%2?(nums[i/2]+nums[(i/2)+1]):nums[i/2];
            maxgen=max(maxgen,nums[i]);
        }
        return(maxgen);
    }
};