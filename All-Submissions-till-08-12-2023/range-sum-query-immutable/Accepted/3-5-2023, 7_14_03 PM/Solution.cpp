// https://leetcode.com/problems/range-sum-query-immutable

class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums=nums;   
    }
    
    int sumRange(int left, int right) {
        return(accumulate(nums.begin()+left,nums.begin()+right+1,0));
    }
};