// https://leetcode.com/problems/find-numbers-with-even-number-of-digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count;
        for(int i:nums)
        if((to_string(i)).length()%2==0)
        count++;
        return(count);
    }
};