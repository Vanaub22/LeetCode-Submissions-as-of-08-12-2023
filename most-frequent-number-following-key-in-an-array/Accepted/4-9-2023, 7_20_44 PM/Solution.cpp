// https://leetcode.com/problems/most-frequent-number-following-key-in-an-array

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> nextNum;
        int maxNext,maxfreq=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        if(nums[i]==key)
        nextNum.push_back(nums[i+1]);
        unordered_map<int,int> umap;
        for(int i:nextNum)
        umap[i]++;
        for(auto it:umap)
        if(it.second>maxfreq){
            maxNext=it.first;
            maxfreq=it.second;
        }
        return(maxNext);
    }
};