// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0,end=k-1,n=nums.size();
        if(k==n) return (double)accumulate(nums.begin(),nums.end(),0)/n;
        double avg=(double)accumulate(nums.begin(),nums.begin()+k,0)/k,curr_avg=avg;
        while(end<n){
            end++;
            curr_avg+=((double)nums[end]-nums[start])/k;
            start++;
            avg=max(avg,curr_avg);
        }
        return avg;
    }
};