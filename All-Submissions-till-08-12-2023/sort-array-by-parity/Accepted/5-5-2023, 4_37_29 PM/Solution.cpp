// https://leetcode.com/problems/sort-array-by-parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even,odd;
        for(int i:nums)
        if(i%2==0)
        even.push_back(i);
        else
        odd.push_back(i);
        nums.clear();
        nums.insert(nums.end(),even.begin(),even.end());
        nums.insert(nums.end(),odd.begin(),odd.end());
        return(nums);
    }
};