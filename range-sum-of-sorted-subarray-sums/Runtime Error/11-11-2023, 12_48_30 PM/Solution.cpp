// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int res=0;
        vector<int> subArraySums;
        // Calculating all the Subarray sums
        for(int i=0;i<n;i++) {
            int subArraySum=0;
            for(int j=i;j<n;j++) {
                subArraySum+=nums[j];
                subArraySums.push_back(subArraySum);
            }
        }
        sort(subArraySums.begin(),subArraySums.end()); // Sorting the SubArray sums
        for(int i=left-1;i<right;i++) res+=subArraySums[i]; // Calculating Result
        return res;
    }
};