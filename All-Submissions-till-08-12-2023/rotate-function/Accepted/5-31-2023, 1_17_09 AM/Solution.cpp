// https://leetcode.com/problems/rotate-function

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return(0);
        vector<int> dp(n,0);
        int total=0;
        for(int i=0;i<n;i++){
            dp[0]+=(i*nums[i]);
            total+=nums[i];
        }
        for(int i=1;i<n;i++)
        dp[i]=dp[i-1]+(total-(n*nums[n-i]));
        return(*max_element(dp.begin(),dp.end()));

    }
};