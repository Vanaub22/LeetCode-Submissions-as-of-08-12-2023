// https://leetcode.com/problems/next-permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),x=-1,s;
        for(int i=n-1;i>0;i--)
        if(nums[i]>nums[i-1]){
            x=i-1;
            break;
        }
        if(x==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        s=x+1;
        for(int i=x+1;i<n;i++)
        if(nums[i]<=nums[s] && nums[i]>nums[x])
        s=i;
        swap(nums[x],nums[s]);
        reverse(nums.begin()+x+1,nums.end());
    }
};