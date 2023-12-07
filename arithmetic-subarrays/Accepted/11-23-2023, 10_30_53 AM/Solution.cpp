// https://leetcode.com/problems/arithmetic-subarrays

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        // Low constraints => Brute Force
        int n=l.size();
        vector<bool> answer;
        for(int i=0;i<n;i++) {
            vector<int> subarray; // To find and store the subarray
            for(int j=l[i];j<=r[i];j++) subarray.emplace_back(nums[j]);
            answer.emplace_back(isArithmetic(subarray));
        }
        return answer;
    }
    bool isArithmetic(vector<int>& subarray) {
        sort(subarray.begin(),subarray.end());
        int diff=subarray[1]-subarray[0],n=subarray.size();
        for(int i=1;i<n-1;i++) if(subarray[i+1]-subarray[i]!=diff) return false;
        return true;
    }
};