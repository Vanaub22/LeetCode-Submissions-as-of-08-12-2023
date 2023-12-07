// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum

class Solution {
public:
    int minStartValue(vector<int>& nums) {
     int minimum=INT_MAX,sts_sum=0;
     for(int i:nums){
         sts_sum+=i;
         minimum=min(minimum,sts_sum);
     }
     return((minimum>=1)?1:(1-minimum));   
    }
};