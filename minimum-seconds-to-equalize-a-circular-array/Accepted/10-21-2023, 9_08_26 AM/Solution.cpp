// https://leetcode.com/problems/minimum-seconds-to-equalize-a-circular-array

class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        // Essentially what happens here is replacement, the final element lies within the array
        // Optimally, in each second, this chosen number will expand left and right from its index
        // Array will be equalized when the maximum gap between 2 occurrences of x is filled with x
        int n=nums.size();
        unordered_map<int,vector<int>> occurrences;
        for(int i=0;i<n;i++) occurrences[nums[i]].emplace_back(i);
        // The list of occurrences for each element will always appear in sorted fashion
        // Now we have to find the differences in indices
        vector<int> maxDifferences;
        for(int i=0;i<n;i++) maxDifferences.emplace_back(findMaxDiff(occurrences[nums[i]],n));
        return *min_element(maxDifferences.begin(),maxDifferences.end())/2;
    }
    int findMaxDiff(vector<int>& occ, int L) {
        int n=occ.size(),maxDiff=0,prev=occ[n-1]-L; // Gap between the first and last occurrence
        for(int idx:occ) {
            maxDiff=max(maxDiff,idx-prev);
            prev=idx;
        }
        return maxDiff;
    }
};