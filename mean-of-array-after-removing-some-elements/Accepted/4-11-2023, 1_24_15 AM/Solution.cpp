// https://leetcode.com/problems/mean-of-array-after-removing-some-elements

class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        double n=arr.size(),start=n*0.05,end=n-start,count=0.9*n;
        return(accumulate(arr.begin()+start,arr.begin()+end,0)/count);
    }
};