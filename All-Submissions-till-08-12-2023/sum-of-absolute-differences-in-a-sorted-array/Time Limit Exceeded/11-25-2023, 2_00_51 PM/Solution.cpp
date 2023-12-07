// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            int absSum=0;
            for(int j=0;j<n;j++) {
                if(i==j) continue;
                absSum+=abs(nums[i]-nums[j]);
            }
            result.push_back(absSum);
        }
        return result;
    }
};