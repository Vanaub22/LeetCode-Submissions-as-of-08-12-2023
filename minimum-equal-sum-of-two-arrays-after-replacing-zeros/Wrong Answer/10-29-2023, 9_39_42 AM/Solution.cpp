// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros

class Solution {
public:
    int countZeroes(vector<int>& arr) {
        int count=0;
        for(int i:arr) if(i==0) count++;
        return count;
    }
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int sum1=accumulate(nums1.begin(),nums1.end(),0),sum2=accumulate(nums2.begin(),nums2.end(),0),diff=abs(sum1-sum2),zeroes1=countZeroes(nums1),zeroes2=countZeroes(nums2),zeroCountDiff=abs(zeroes1-zeroes2);
        if((zeroes1==0 || zeroes2==0) && zeroes1!=zeroes2 && sum1!=sum2) return -1;
        if(sum1==sum2) return sum1;
        long long minSum=0;
        if(sum1>sum2) minSum=sum1+zeroes1;
        else minSum=sum2+zeroes2;
        return minSum;
    }
};