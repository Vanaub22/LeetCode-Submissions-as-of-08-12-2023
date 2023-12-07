// https://leetcode.com/problems/shortest-unsorted-continuous-subarray

class Solution {
public:
    // Two Pointer Approach to find out the length of the subarray that requires sorting
    int findUnsortedSubarray(vector<int>& arr) {
        // We will Sort and then Compare to find subarray that needs to be modified
        int n=arr.size(),left=0,right=n-1;
        vector<int> sorted_arr=arr; // Creating a copy for sorting
        sort(sorted_arr.begin(),sorted_arr.end()); // Sorting the Copy
        for(;left<n;left++) if(arr[left]!=sorted_arr[left]) break; // Left Mismatch
        for(;right>=0;right--) if(arr[right]!=sorted_arr[right]) break; // Right Mismatch
        return right>left?right-left+1:0; // right<=left implies that the array is sorted
    }
};