// https://leetcode.com/problems/maximum-number-of-pairs-in-array

class Solution {
public:
    int pair(int count){
        int p=0;
        if(count%2!=0)
        --count;
        while(count>1){
            count/=2;
            p++;
        }
        return(p);
    }
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> umap;
        int pairs=0,left=0;
        for(int i:nums)  
        umap[i]++;
        for(auto it:umap){
            if(it.second%2!=0)
            left+=1;
            pairs+=pair(it.second);
        }
        nums.clear();
        nums.push_back(pairs);
        nums.push_back(left);
        return(nums);
    }
};