// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous

class Solution {
public:
    int minOperations(vector<int> nums) {
        // Need Sorted Array with no duplicates
        set<int>uniq(nums.begin(),nums.end());
        nums=vector<int>(uniq.begin(),uniq.end());
        // Using Sliding Window Approach
        // Worst Case Max. operations = n (All elements are to be changed)
        int n=nums.size(),minimum_ops=n,left=0,right=0;
        for(;left<n;left++) {
            // Finding contiguous, valid (i.e. continuous) subarray
            while(right<n && nums[right]-nums[left]<n) right++;
            minimum_ops=min(minimum_ops,n-(right-left));
        }
        return minimum_ops;
    }
};