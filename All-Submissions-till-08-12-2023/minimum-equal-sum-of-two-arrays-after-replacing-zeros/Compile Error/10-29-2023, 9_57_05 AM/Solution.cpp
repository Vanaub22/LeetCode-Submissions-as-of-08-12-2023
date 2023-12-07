// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=accumulate(arr.begin(),arr.end(),0LL),sum2=accumulate(arr.begin(),arr.end(),0LL),zeroes1=countZeroes(nums1),zeroes2=countZeroes(nums2);
        if(sum1+zeroes1==sum2+zeroes2) return sum1+zeroes1;
        if(sum1+zeroes1<sum2+zeroes2) {
            if(zeroes1>0) return sum2+zeroes2;
            else return -1;
        }
        else {
            if(zeroes2>0) return sum1+zeroes1;
            else return -1;
        }
    }
    long long countZeroes(vector<int>& arr) {
        long long count=0;
        for(long long i:arr) if(i==0) count++;
        return count;
    }
};