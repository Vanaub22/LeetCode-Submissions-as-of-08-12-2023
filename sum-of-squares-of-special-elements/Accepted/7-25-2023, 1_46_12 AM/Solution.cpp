// https://leetcode.com/problems/sum-of-squares-of-special-elements

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),sqSum=0;
        for(int i=1;i<=n;i++) if(n%i==0) sqSum+=pow(nums[i-1],2);
        return sqSum;
    }
};