// https://leetcode.com/problems/minimum-common-value

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> unique;
        for(int i=0;i<nums1.size();i++)
        unique[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
        if(unique[nums2[i]]!=0)
        return(nums2[i]);
        return(-1);
    }
};