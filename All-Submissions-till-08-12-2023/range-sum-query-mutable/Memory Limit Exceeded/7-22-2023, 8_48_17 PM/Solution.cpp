// https://leetcode.com/problems/range-sum-query-mutable

class NumArray {
public:
    vector<vector<int>> dp;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        dp=vector<vector<int>>(n,vector<int>(n,INT_MIN));
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(i==j) dp[i][j]=nums[i];
        else if(i<j) dp[i][j]=dp[i][j-1]+nums[j];
    }
    void update(int index, int val) {
        int n=dp[0].size(),change=val-dp[index][index];
        for(int i=0;i<=index;i++)
        for(int j=index;j<n;j++)
        dp[i][j]+=change;
    }
    int sumRange(int left, int right) {
        return dp[left][right];
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */