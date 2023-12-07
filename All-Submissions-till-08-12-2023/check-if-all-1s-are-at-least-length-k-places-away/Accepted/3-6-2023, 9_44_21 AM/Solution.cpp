// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev;
        for(int i=0;i<nums.size();i++)
        if(nums[i]==1){
        prev=i;
        break;
        }
        for(int i=prev+1;i<nums.size();i++)
        if(nums[i]==1){
            if(i-prev-1<k)
            return(false);
            else
            prev=i;
        }
        return(true);
    }
};