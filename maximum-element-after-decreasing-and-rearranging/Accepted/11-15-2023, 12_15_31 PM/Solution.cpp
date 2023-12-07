// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<=n-1;i++) if(abs(arr[i-1]-arr[i])<=1) continue;
        else arr[i]=arr[i-1]+1;
        return arr[n-1];
    }
};