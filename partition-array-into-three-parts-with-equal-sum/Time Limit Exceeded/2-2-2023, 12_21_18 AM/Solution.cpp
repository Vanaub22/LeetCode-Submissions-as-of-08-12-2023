// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
      int left_sum=0,middle_sum=0,total_sum=accumulate(arr.begin(),arr.end(),0),right_sum=total_sum;
      for(int i=0;i<arr.size()-2;i++){
          left_sum+=arr[i];
          right_sum=total_sum-left_sum; 
          for(int j=i+1;j<arr.size()-1;j++){
              right_sum-=arr[j];
              middle_sum=total_sum-(left_sum+right_sum);
              if(left_sum==right_sum && right_sum==middle_sum)
              return(true);
          }
      }
      return(false);  
    }
};