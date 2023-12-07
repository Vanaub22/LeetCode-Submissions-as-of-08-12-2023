// https://leetcode.com/problems/check-if-array-is-good

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> umap;
        for(int i:nums){
            if(i>n-1 || i<1 || umap[i]>=2 || (umap[i]>=1 && i!=n-1)) return false;
            umap[i]++;
        }
        return true;
    }
};