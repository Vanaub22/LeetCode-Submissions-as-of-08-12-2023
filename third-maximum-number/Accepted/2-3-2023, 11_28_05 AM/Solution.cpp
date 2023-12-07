// https://leetcode.com/problems/third-maximum-number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
       int d=nums[0],pos=1;
       for(int i:nums){
           if(d!=i){
               d=i;
               if(++pos==3)
               break;
           }
       }
       return((pos==3)?(d):(nums[0])); 
    }
};