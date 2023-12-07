// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),left,right,closest=nums[0]+nums[1]+nums[n-1],currSum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            left=i+1,right=n-1;
            currSum=nums[i]+nums[left]+nums[right];
            while(left<right-1){
                if(target>currSum) left++;
                else if(target<currSum) right--;
                else return currSum;
                currSum=nums[i]+nums[left]+nums[right];
            }
            if(abs(target-currSum)<abs(target-closest)) closest=currSum;
        }
        return closest;
    }
};