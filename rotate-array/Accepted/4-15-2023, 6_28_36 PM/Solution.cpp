// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> rotated;
        k=k%n;
        for(int i=n-k;i<n;i++)
        rotated.push_back(nums[i]);
        for(int i=0;i<n-k;i++)
        rotated.push_back(nums[i]);
        nums=rotated;
    }
};