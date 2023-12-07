// https://leetcode.com/problems/apply-operations-to-an-array

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
    int zeroes=0;
    for(int i=0;i<nums.size()-1;i++)
    if(nums[i]==nums[i+1]){
    nums[i]*=2;
    nums[i+1]=0;   
    }
    for(int i=0;i<nums.size();i++)
    if(nums[i]==0){
    nums.erase(nums.begin()+i);
    i--;
    zeroes++;
    }
    while(zeroes>0){
        zeroes--;
        nums.push_back(0);
    }
    return(nums);
    }
};