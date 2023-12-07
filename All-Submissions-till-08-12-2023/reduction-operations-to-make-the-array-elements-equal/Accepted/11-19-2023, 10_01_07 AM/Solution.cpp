// https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),stepUps=0,ops=0;
        for(int i=0;i<n-1;i++) {
            if(nums[i+1]!=nums[i]) stepUps++;
            ops+=stepUps;
        }
        return ops;
    }
};