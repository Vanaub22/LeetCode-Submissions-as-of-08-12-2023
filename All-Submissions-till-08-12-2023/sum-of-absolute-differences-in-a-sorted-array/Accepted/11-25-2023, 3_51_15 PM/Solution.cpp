// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(),total=accumulate(nums.begin(),nums.end(),0);
        vector<int> result(n,0),suffSum(n,0),prefSum(n,0);
        // Standard Approach O (N ^ 2) => TLE on 43rd T.C.
        // Reducing to O(N) using Prefix and Suffix Sum
        // We know that the array is already sorted
        // => abs(nums[i] - nums[j]) = nums[i] - nums[j] when i > j otherwise nums[j] - nums[i] 
        // Prefix Section: (nums[i] - nums[i - 1]) + (nums[i] - nums[i - 2]) + ... + (nums[i] - nums[0])
        // = (i x nums[i]) - (nums[0] +nums[1] + nums[2] + ... + nums[i - 1])
        // = (i x nums[i]) - (Prefix Sum to that point)
        for(int i=1;i<n;i++) prefSum[i]=prefSum[i-1]+nums[i-1];
        // Suffix Section: (nums[i + 1] - nums[i]) + (nums[i + 2] - nums[i]) + ... + (nums[n - 1] - nums[i])
        // = (nums[i + 1] + nums[i + 2] + ... + nums[n - 1]) - {(n - i - 1) x nums[i]}
        // = (nums[n - 1] + nums[n - 2] + ... + nums[i + 1]) - {(n - i - 1) x nums[i]}
        // = (Suffix Sum from that point) - {(n - i - 1) x nums[i]}
        for(int i=n-2;i>=0;i--) suffSum[i]=suffSum[i+1]+nums[i+1];
        for(int i=0;i<n;i++) result[i]=+suffSum[i]-prefSum[i]-(n-i-1)*nums[i]+i*nums[i];
        return result;
        
        

    }
};