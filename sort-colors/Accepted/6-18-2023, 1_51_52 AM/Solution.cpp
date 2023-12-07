// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using counting sort approach
        int zeroes=0,ones=0,twos=0,i=0;
        for(int i:nums)
        if(i==0)
        zeroes++;
        else if(i==1)
        ones++;
        else
        twos++;
        while(--zeroes>=0)
        nums[i++]=0;
        while(--ones>=0)
        nums[i++]=1;
        while(--twos>=0)
        nums[i++]=2;
    }
};