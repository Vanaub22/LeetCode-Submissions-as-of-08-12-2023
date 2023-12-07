// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> windowFreq;
        int start=0,end=k,n=nums.size();
        for(int i=0;i<=min(k,n-1);i++){
            windowFreq[nums[i]]++;
            if(windowFreq[nums[i]]==2) return true;
        }
        while(end<n-1){
            start++;
            end++;
            windowFreq[nums[start-1]]--;
            windowFreq[nums[end]]++;
            if(windowFreq[nums[end]]>=2) return true;
        }
        return false;
    }
};