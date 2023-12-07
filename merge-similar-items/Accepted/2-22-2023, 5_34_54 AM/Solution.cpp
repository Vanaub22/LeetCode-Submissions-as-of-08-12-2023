// https://leetcode.com/problems/merge-similar-items

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
     map<int,int> mp;
     for(auto it:items1)
     mp[it[0]]+=it[1];
     for(auto it:items2)
     mp[it[0]]+=it[1];
     items1.clear();
     for(auto it:mp)
     items1.push_back({it.first,it.second});
     sort(items1.begin(),items1.end());
     return(items1);   
    }
};