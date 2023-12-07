// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> positive_to_n;
        for(int i=1;i<=nums.size();i++)
        positive_to_n[i]=0;
        for(int i:nums)
        positive_to_n[i]=1;
        for(auto it:positive_to_n)
        if(it.second==0)
        return(it.first);
        return(-1);
    }
};