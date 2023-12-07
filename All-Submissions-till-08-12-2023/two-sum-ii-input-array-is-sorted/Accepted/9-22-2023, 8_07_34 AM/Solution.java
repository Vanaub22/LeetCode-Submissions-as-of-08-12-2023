// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n=numbers.length;
        for(int i=0;i<n;i++){
            int low=i+1,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(numbers[mid]==target-numbers[i]) return new int[]{i+1,mid+1};
                else if(numbers[mid]<target-numbers[i]) low=mid+1;
                else high=mid-1;
            }
        }
        return new int[0];
    }
}