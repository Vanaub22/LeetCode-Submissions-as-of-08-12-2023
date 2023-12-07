// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int ones=0,max_ones=INT_MIN;
    for(int i:nums){
        if(i==1)
        ones++;
        else{
            max_ones=max(max_ones,ones);
            ones=0;
        }
    }
    max_ones=max(max_ones,ones);
    return(max_ones);    
    }
};