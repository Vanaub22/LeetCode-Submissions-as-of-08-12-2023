// https://leetcode.com/problems/minimum-absolute-difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min_abs=INT_MAX;
        vector<vector<int>> pairs;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
        min_abs=min(arr[i+1]-arr[i],min_abs);
        for(int i=0;i<arr.size()-1;i++)
        if(arr[i+1]-arr[i]==min_abs)
        pairs.push_back({arr[i],arr[i+1]});
        return(pairs);
    }
};