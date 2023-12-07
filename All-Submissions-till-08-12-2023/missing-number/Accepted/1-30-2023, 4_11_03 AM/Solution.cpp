// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int start,end,mid,miss;
       sort(nums.begin(),nums.end());
       for(int i=0;i<=nums.size();i++){
           miss=1;
           start=0;
           end=nums.size()-1;
           mid=start+(end-start)/2;
           while(start<=end){
               if(nums[mid]==i){
                   miss=0;
                   break;
               }
               else if(nums[mid]<i)
               start=mid+1;
               else
               end=mid-1;
               mid=start+(end-start)/2;
           }
           if(miss==1){
               miss=i;
               break;
           }
       } 
       return(miss);
    }
};