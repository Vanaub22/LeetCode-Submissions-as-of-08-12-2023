// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums)
        freq[i]++;
        int max_freq=0;
        for(auto it:freq)
        max_freq=it.second>max_freq?it.second:max_freq;
        vector<vector<int>> ans(max_freq);
        for(int i=0;i<max_freq;i++){
            for(auto it:freq){
                if(it.second>i)
                ans[i].push_back(it.first);
            }
        }
        return(ans);        
    }
};