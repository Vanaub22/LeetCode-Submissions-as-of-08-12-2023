// https://leetcode.com/problems/max-consecutive-ones-iii

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,end=0,n=nums.size(),flips=0,maxWindow=0;
        while(end<n){
            if(nums[end]==0) flips++;
            while(flips>k){
                if(nums[start]==0) flips--;
                start++;
            }
            maxWindow=max(maxWindow,end-start+1);
            end++;
        }
        return maxWindow;
    }
};