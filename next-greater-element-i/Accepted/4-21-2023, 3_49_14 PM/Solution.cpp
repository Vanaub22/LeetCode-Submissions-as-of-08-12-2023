// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nextGreaters;
        int next_greater;
        bool pos;
        for(int i:nums1){
            pos=false;
            next_greater=-1;
            for(int j=0;j<nums2.size();j++){
                if(i==nums2[j])
                pos=true;
                if(nums2[j]>i&&pos){
                    next_greater=nums2[j];
                    break;
                }
            }
            nextGreaters.push_back(next_greater);
        }
        return(nextGreaters);
    }
};