// https://leetcode.com/problems/number-of-zero-filled-subarrays

class Solution {
    public long zeroFilledSubarray(int[] nums) {
        // Trying to find out the total number of subarrays within each subarray...
        // eg. [0,0,0,0] => [0],[0],[0],[0],[0,0],[0,0],[0,0],[0,0,0],[0,0,0],[0,0,0,0]
        // A 0-filled subarray of length 4 has 10 valid 0-filled subarrays within it
        // 4 of length = 1, 3 of length = 2, 2 of length = 3 and 1 of length = 4
        // Therefore, every subarray of length n will similarly have:
        // n of length 1, n - 1 of length 2 ... 2 of length n - 1 and 1 of length n
        // Total = n + (n - 1) + (n - 2) + (n - 3) + ... + 2 + 1 = n (n + 1) / 2
        long subarrays=0;
        int start=0,end=0,n=nums.length;
        boolean flag=false; // To denote if we are currently in a 0-filled subarray
        for(int i=0;i<n;i++) {
            if(nums[i]==0) {
                if(!flag) {
                    flag=true;
                    start=i;
                    end=i;
                }
                else end=i;
            }
            else {
                if(flag) {
                    int l=end-start+1;
                    subarrays+=(long)l*(l+1)/2;
                    flag=false;
                }
            }
        }
        // If the array ends in a 0-filled subarray
        if(flag) {
            int l=end-start+1;
            subarrays+=(long)l*(l+1)/2;
        }
        return subarrays;
    }
}