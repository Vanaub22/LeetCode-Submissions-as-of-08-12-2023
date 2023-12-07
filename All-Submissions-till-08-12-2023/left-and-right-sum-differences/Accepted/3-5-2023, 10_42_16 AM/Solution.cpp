// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++)
        answer.push_back(abs(accumulate(nums.begin(),nums.begin()+i,0)-accumulate(nums.begin()+i+1,nums.end(),0)));
        return(answer);
    }
};