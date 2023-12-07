// https://leetcode.com/problems/apply-operations-to-make-all-array-elements-equal-to-zero

class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int currentWindowSum=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(currentWindowSum>nums[i]) return false;
            nums[i]-=currentWindowSum;
            currentWindowSum+=nums[i];
            if(i>=k-1) currentWindowSum-=nums[i-k+1];
        }      
        return currentWindowSum==0;
    }
};