// https://leetcode.com/problems/relative-sort-array

class Solution {
public:
    static bool comp(pair<int,int>& a, pair<int,int>& b){
        return(a.second<=b.second);
    }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> umap;
        vector<int> extra;
        vector<pair<int,int>> mapped;
        for(int i=0;i<arr2.size();i++)
        umap[arr2[i]]=i+1;
        for(int i:arr1)
        if(umap[i]==0)
        extra.push_back(i);
        else
        mapped.push_back({i,umap[i]-1});
        sort(extra.begin(),extra.end());
        sort(mapped.begin(),mapped.end(),comp);
        arr1.clear();
        for(auto it:mapped)
        arr1.push_back(it.first);
        for(int i:extra)
        arr1.push_back(i);
        return(arr1);
    }
};