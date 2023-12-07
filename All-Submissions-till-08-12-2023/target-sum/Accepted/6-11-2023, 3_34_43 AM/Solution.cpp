// https://leetcode.com/problems/target-sum

class Solution {
public:
    void calc(int idx,int sum,vector<int>& nums,int target,int& ways){
        if(idx==nums.size()){
            if(sum==target)
            ways++;
            return;
        }
        calc(idx+1,sum+nums[idx],nums,target,ways);
        calc(idx+1,sum-nums[idx],nums,target,ways);
    }
    int findTargetSumWays(vector<int>& nums,int target) {
       int ways=0;
       calc(0,0,nums,target,ways);
       return(ways); 
    }
};