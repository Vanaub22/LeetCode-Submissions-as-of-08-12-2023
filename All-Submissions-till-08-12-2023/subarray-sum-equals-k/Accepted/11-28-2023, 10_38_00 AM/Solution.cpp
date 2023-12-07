// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> prefSum;
        long long prefixSum=0;
        int subarrays=0;
        for(int i:nums) {
            prefixSum+=i;
            if(prefixSum==k) subarrays++;
            if(prefSum.find(prefixSum-k)!=prefSum.end()) subarrays+=prefSum[prefixSum-k];
            prefSum[prefixSum]++;
        }
        return subarrays;
    }
};