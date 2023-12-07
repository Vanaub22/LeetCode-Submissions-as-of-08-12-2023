// https://leetcode.com/problems/4sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> quadruplets;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1,l=n-1;
                while(k<l){
                    int sum=nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){ 
                        quadruplets.push_back({nums[i],nums[j],nums[k],nums[l]});
                        break;
                    }
                    else if(sum<target) k++;
                    else l--;
                }
            }
        }
        return quadruplets;
    }
};