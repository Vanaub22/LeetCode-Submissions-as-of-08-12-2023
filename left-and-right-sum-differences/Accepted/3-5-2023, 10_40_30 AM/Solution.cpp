// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int leftSum=accumulate(nums.begin(),nums.begin()+i,0),rightSum=accumulate(nums.begin()+i+1,nums.end(),0);
            answer.push_back(abs(leftSum-rightSum));
        }
        return(answer);
    }
};