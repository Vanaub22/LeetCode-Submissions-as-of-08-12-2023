// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives,negatives,result;
        for(int i:nums)
        if(i>0)
        positives.push_back(i);
        else
        negatives.push_back(i);
        int i=0;
        while(result.size()!=nums.size()){
            result.push_back(positives[i]);
            result.push_back(negatives[i]);
            i++;
        }
        return(result);
    }
};