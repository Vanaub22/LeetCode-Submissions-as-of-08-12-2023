// https://leetcode.com/problems/the-k-strongest-values-in-an-array

class Solution {
public:
    static bool solve(pair<int,int>& a, pair<int,int>& b){
        return a.second==b.second?a.first>b.first:a.second>b.second;
    }
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int> strongestK;
        sort(arr.begin(),arr.end());
        int n=arr.size(),median=arr[(n-1)/2];
        vector<pair<int,int>> valstr;
        for(int i:arr) valstr.push_back(pair<int,int>(i,abs(median-i)));
        sort(valstr.begin(),valstr.end(),solve);
        for(pair<int,int> p:valstr){
            strongestK.push_back(p.first);
            if(strongestK.size()==k) break;
        }
        return strongestK;
    }
};