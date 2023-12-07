// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated

class Solution {
public:
    bool rotateCompare(vector<int>& A, vector<int>& B, int x){
        for(int i=0;i<A.size();i++)
        if(A[i]!=B[(i+x)%A.size()])
        return(false);
        return(true);
    }
    bool check(vector<int>& nums) {
        bool res=false;
        vector<int> sorted_nums=nums;
        sort(sorted_nums.begin(),sorted_nums.end());
        for(int i=0;i<nums.size();i++)
        if(nums[i]==sorted_nums[0]){
        res=rotateCompare(sorted_nums,nums,i);
        if(res)
        return(res);
        }
        return(res);
    }
};