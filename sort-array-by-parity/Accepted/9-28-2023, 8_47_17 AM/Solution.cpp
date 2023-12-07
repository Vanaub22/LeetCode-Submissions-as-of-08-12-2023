// https://leetcode.com/problems/sort-array-by-parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odds,evens;
        for(int i:nums) if(i%2) odds.push_back(i);
        else evens.push_back(i);
        evens.insert(evens.end(),odds.begin(),odds.end());
        nums=evens;
        evens.clear();
        odds.clear();
        return nums;        
    }
};