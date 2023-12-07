// https://leetcode.com/problems/find-all-duplicates-in-an-array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> twice(10000,0),duplicates; // O(1) space
        for(int i:nums) // O(N) time
        twice[i]++;
        for(int i=0;i<10000;i++)
        if(twice[i]==2)
        duplicates.push_back(i);
        return(duplicates);
    }
};