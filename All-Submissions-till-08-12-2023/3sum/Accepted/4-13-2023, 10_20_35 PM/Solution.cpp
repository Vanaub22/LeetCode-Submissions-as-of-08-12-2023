// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> uniqueTriplets;
        vector<vector<int>> triplets;
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1,k=nums.size()-1,tripletSum;
            while(j<k){
                tripletSum=nums[i]+nums[j]+nums[k];
                if(tripletSum==0)
                uniqueTriplets.insert({nums[i],nums[j],nums[k]});
                if(tripletSum<0)
                j++;
                else
                k--;                
            }
        }
        for(auto it:uniqueTriplets)
        triplets.push_back(it);
        return(triplets);
    }
};