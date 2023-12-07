// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    // trying to solve using constant extra space
    int findDuplicate(vector<int>& nums) {
        int low=1,high=nums.size()-1,mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            int cnt=0;
            for(int i:nums) if(i<=mid) cnt++; // number of elements lesser than or equal to mid
            // technically, mid should have mid elements lesser than equal to mid
            if(cnt>mid) high=mid-1; // repeated integer is smaller than or equal to mid
            else low=mid+1; // repeated integer is greater than or equal to mid
        }
        return low;
    }
};