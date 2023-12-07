// https://leetcode.com/problems/shortest-unsorted-continuous-subarray

class Solution {
public:
    // Two Pointer Approach
    int findUnsortedSubarray(vector<int>& arr) {
        // We will Sort and then Compare to find subarray that needs to be modified
        int n=arr.size(),left=0,right=n-1;
        vector<int> sorted_arr=arr;
        // sort(sorted_arr.begin(),sorted_arr.end()); // Sorting the Copy
        for(;left<n-1;left++) if(arr[left]>arr[left+1]) break; // Left Mismatch
        for(;right>=1;right--) if(arr[right]<arr[right-1]) break; // Right Mismatch
        return right>left?right-left+1:0;
    }
};