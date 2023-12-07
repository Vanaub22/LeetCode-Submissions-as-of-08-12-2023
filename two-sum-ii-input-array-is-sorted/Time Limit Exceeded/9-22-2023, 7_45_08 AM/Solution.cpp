// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++) for(int j=0; j<numbers.size();j++)
        if(i==j) continue;
        else if(numbers[j]==target-numbers[i]) return {i+1,j+1};
        return {};
    }
};