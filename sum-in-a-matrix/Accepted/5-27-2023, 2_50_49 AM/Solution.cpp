// https://leetcode.com/problems/sum-in-a-matrix

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size(),temp_score=INT_MIN,score=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                auto it=max_element(nums[j].begin(),nums[j].end());
                if(temp_score<*it)
                temp_score=*it;
                *it=INT_MIN;
            }
            score+=temp_score;
            temp_score=INT_MIN;
        }
        return(score);
    }
};