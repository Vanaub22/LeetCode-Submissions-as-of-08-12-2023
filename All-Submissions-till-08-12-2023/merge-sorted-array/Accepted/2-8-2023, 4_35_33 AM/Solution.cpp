// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> nums; //not space-optimized, definitely not 'in-place'
       int index1=0,index2=0;
       while(index1<m && index2<n){
           if(nums1[index1]<nums2[index2])
           nums.push_back(nums1[index1++]);
           else
           nums.push_back(nums2[index2++]);
       }
       while(index1<m)
       nums.push_back(nums1[index1++]);
       while(index2<n)
       nums.push_back(nums2[index2++]);
       nums1=nums; 
    }
};