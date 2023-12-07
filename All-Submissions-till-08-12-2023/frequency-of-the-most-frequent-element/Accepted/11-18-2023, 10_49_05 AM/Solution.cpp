// https://leetcode.com/problems/frequency-of-the-most-frequent-element

class Solution {
public:
    // Using the Sliding Window technique
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxFreq=0,left=0,n=nums.size();
        long long curr=0; // To store the current sum of the sliding window
        for(int right=0;right<n;right++) {
            int target=nums[right]; // Assuming this to be the target element
            curr+=target;
            // Shrinking window if number of operations required is more than k
            while((long long)(right-left+1)*target-curr>k) {
                curr-=nums[left];
                left++;
            }
            // The largest sliding window will yield the highest frequency of target
            maxFreq=max(maxFreq,right-left+1);
        }
        return maxFreq;
    }
};