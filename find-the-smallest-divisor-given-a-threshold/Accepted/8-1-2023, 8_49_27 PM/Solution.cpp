// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold

class Solution {
public:
    int result(vector<int>& nums, int divisor){
        int res=0;
        for(int i:nums) res+=ceil((float)i/divisor);
        return res;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=10e7,mid=low+(high-low)/2,smallestDivisor=high;
        while(low<high){
            if(result(nums,mid)<=threshold){
                smallestDivisor=min(smallestDivisor,mid);
                high=mid;
            }
            else low=mid+1;
            mid=low+(high-low)/2;
        }
        return smallestDivisor;
    }
};