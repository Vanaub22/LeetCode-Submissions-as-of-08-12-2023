// https://leetcode.com/problems/minimum-absolute-difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        map<int,vector<vector<int>>> mp;
        int min_abs=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        for(int j=i+1;j<arr.size();j++)
        mp[abs(arr[i]-arr[j])].push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});
        for(auto it:mp)
        min_abs=min(min_abs,it.first);
        sort(mp[min_abs].begin(),mp[min_abs].end());
        return(mp[min_abs]); 
    }
};