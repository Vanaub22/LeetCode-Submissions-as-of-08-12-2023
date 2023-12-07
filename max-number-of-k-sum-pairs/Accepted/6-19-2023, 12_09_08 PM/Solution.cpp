// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int operations=0;
        unordered_map<int,int> umap;
        for(int i:nums)
        if(umap[k-i]>0){
            umap[k-i]--;
            operations++;
        }
        else
        umap[i]++;
        return(operations);    
    }
};