// https://leetcode.com/problems/monotonic-array

class Solution {
    public boolean isMonotonic(int[] nums) {
        int n=nums.length;
        boolean increasing=false,set=false;
        for(int i=0;i<n-1;i++) {
            if(nums[i]==nums[i+1]) continue;
            if(!set) {
                if(nums[i]<nums[i+1]) increasing=true;
                set=true;
            }
            if(set && ((nums[i]<nums[i+1] && !increasing) || (nums[i]>nums[i+1] && increasing))) return false;
        }
        return true;
    }
}